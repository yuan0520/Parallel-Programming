# rm output/*
# rm inter_file/*
# rm reduce_file/*

make clean
make 

# srun -N2 -c5 ./hw4 TEST01 7 3 testcases/01.word 2 testcases/01.loc output/
# srun -N3 -c12 ./hw4 TEST05 10 1 testcases/05.word 2 testcases/05.loc output/
srun -N4 -c12 ./hw4 TEST10 12 5 testcases/10.word 10 testcases/10.loc output/