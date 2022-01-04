#!/bin/bash

cmds="gnuplot-commands.txt"
cat >$cmds <<'EOF'
set title "Lab Wayland Compositor Acceptance Criteria"
set xdata time
set term png
set timefmt "%Y-%m-%d"
set format x "%d/%m"
set xlabel "Time"
set ylabel "Cat A Requirements"
set xrange ["2021-04-17":"2022-03-31"]
set yrange ["35":"100"]
set output 'graph.png'
plot 'graph-data.txt' u 1:3 w lp t 'Minimum viable product', \
	'graph-data.txt' u 1:2 w lp t 'Completed'
EOF

gnuplot <$cmds
