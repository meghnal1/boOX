ROBOT_LIST=`cat robots_16`
SIZE=16

for ROBOTS in $ROBOT_LIST;
do
    echo 'Solving star instance '$SIZE' with '$ROBOTS' agents ...'
    ./swap_solver_boOX --timeout=64 --algorithm=cbs+ '--input-file=star_'$SIZE'_a'$ROBOTS'.mpf' '--output-file=star_'$SIZE'_a'$ROBOTS'.out' > 'swap-cbs_star_'$SIZE'_a'$ROBOTS'.txt'
done
