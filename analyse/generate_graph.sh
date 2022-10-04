#!/bin/bash -e

get_historical_data() {
	cat graph-data-historical.txt
}

get_repo_data() {
	for data_file in Acceptance-criteria.md README.md; do
		while read commit date; do
			(git show "${commit}:${data_file}" | grep  ' complete ') >&/dev/null || continue
			printf "%s" "$date"
			while read _ _ _cat _done _ _total _; do
				printf " %s %s" "$_done" "$_total"
			done < <(git show "${commit}:${data_file}" | ./analyse --stats | grep 'Cat [A-B]')
			printf "\n"
		done < <(git log --reverse --format="%H %as" -- "../$data_file")
	done
}

combined() {
	get_historical_data
	get_repo_data
}

echo "Generating graph.."
combined | sort -n | uniq > graph-data.txt
./plot.sh
