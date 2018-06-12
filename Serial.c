	#include <stdio.h>
#include <time.h>
int main(int argc, char *argv[]){

int i, op, upToVal;
            		upToVal = 999999999;
            		op = 0;
            		clock_t start =clock();
    
            		for(i=0; i <= upToVal; i++){

op=pow(upToVal,9999)*pow(i,99999)*pow(op,8888)+pow(upToVal,9998)*pow(op,99999)
           	 	}
       		double time = (((double)  clock()- 
start)  /CLOCKS_PER_SEC);
        		printf("\nOp is %d\n", op);
        	            printf("Execution time: %f", time);
            		return 0;
}
