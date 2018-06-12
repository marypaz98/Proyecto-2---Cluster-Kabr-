#include <stdio.h>
#include "mpi.h"
#include  <omp.h>    
int main(int argc, char *argv[]){

int i, sum, sumTotal, upToVal;
int start, end, size, myRank;
upToVal = 999999999;
MPI_Init(&argc, &argv); 	MPI_Comm_size(MPI_COMM_WORLD, &size	   MPI_Comm_rank(MPI_COMM_WORLD, &myRank);
start = myRank*(upToVal/size)+1;

if(myRank == (size-1)){
end = upToVal;
}else{
	end = start + (upToVal/size)-1;}
op = 0;
opTotal = 0;
#pragma parallel for
for(i=start; i <= end; i++){
op=pow(upToVal,9999)*pow(i,99999)*pow(op,8888)+pow(upToVal,9998)*pow(op,99999)
}
MPI_Reduce(&op, &opTotal, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);    printf("\nRank: %d, local sum: %d, total sum: %d\n", myRank, op, opTotal);    
MPI_Finalize();

return 0;    
}
