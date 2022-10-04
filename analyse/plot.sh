#!/bin/bash -e

cat << EOF | gnuplot
set title "Lab Wayland Compositor User Requirements"
set xdata time
set term png
set timefmt "%Y-%m-%d"
set format x "%m/%y"
set xlabel "Date"
set ylabel "Requirements"
set xrange ["2021-04-17":"$(date "+%Y-%m-%d")"]
set yrange ["0":"255"]
set output '../graph.png'
plot \
	'graph-data.txt' u 1:2 w lp t 'Completed Cat A', \
	'graph-data.txt' u 1:3 w lp t 'Total Cat A', \
	'graph-data.txt' u 1:4 w lp t 'Completed Cat B', \
	'graph-data.txt' u 1:5 w lp t 'Total Cat B'
EOF
