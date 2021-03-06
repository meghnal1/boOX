ROBOT_LIST=`cat robots_maps`
SEED_LIST=`cat seeds_10`
SIZE=16

for ROBOTS in $ROBOT_LIST;
do
  for SEED in $SEED_LIST;	
  do            
    echo 'Solving den520d instance with '$ROBOTS' agents ...'
    ../main/rota_solver_boOX --algorithm=smtcbs+ --timeout=128 '--input-file=den520d_a'$ROBOTS'_'$SEED'.mpf' '--output-file=rota-smt_den520d_a'$ROBOTS'_'$SEED'.out' > 'rota-smt_den520d_a'$ROBOTS'_'$SEED'.txt'
  done
done
