ROBOT_LIST=`cat robots_08x08`
SEED_LIST=`cat seeds_10`
SIZE=8

for ROBOTS in $ROBOT_LIST;
do
  for SEED in $SEED_LIST;	
  do        
    echo 'Solving grid instance '$SIZE'x'$SIZE' with '$ROBOTS' agents ...'
  ../main/perm_solver_boOX --algorithm=cbs++ --timeout=128 '--input-file=grid_'$SIZE'x'$SIZE'_a'$ROBOTS'_'$SEED'.mpf' '--output-file=perm-cbs_grid_'$SIZE'x'$SIZE'_a'$ROBOTS'_'$SEED'.out' > 'perm-cbs_grid_'$SIZE'x'$SIZE'_a'$ROBOTS'_'$SEED'.txt'
  done
done
