ROBOT_LIST=`cat robots_16`
SEED_LIST=`cat seeds_10`
SIZE=16

for ROBOTS in $ROBOT_LIST;
do
  for SEED in $SEED_LIST;	
  do            
    echo 'Solving path instance '$SIZE' with '$ROBOTS' agents ...'
    ../main/perm_solver_boOX --algorithm=cbs++ --timeout=128 '--input-file=path_'$SIZE'_a'$ROBOTS'_'$SEED'.mpf' '--output-file=perm-cbs_path_'$SIZE'_a'$ROBOTS'_'$SEED'.out' > 'perm-cbs_path_'$SIZE'_a'$ROBOTS'_'$SEED'.txt'
  done
done
