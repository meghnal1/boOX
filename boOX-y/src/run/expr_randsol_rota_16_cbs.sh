ROBOT_LIST=`cat robots_16`
SEED_LIST=`cat seeds_10`
SIZE=16

for ROBOTS in $ROBOT_LIST;
do
  for SEED in $SEED_LIST;	
  do            
    echo 'Solving random instance '$SIZE' with '$ROBOTS' agents ...'
    ../main/rota_solver_boOX --algorithm=cbs++ --timeout=128 '--input-file=rand_'$SIZE'_a'$ROBOTS'_'$SEED'.mpf' '--output-file=rota-cbs_rand_'$SIZE'_a'$ROBOTS'_'$SEED'.out' > 'rota-cbs_rand_'$SIZE'_a'$ROBOTS'_'$SEED'.txt'
  done
done
