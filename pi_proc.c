#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <math.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	int numero = 100000;
	int n = 0;
	int i = 0;
	float x,y;
	
	pid_t newpid;
	newpid = fork();
	

	srand(time(NULL));
	
	switch(newpid){
		case -1:
			break;
		case 0:
			
			while(i<numero){
				x = (float)rand()/RAND_MAX;
				y = (float)rand()/RAND_MAX;
				if(sqrt(x*x+y*y) <=1){
					n++;
				}
				i++;
			
			}
			

		default:
			sleep(1);
			float resultado = (((float)4* (float)n) / (float)numero);
			wait(10);
			printf("PI é igual a: %f\n", resultado);
			
			
	}
	return 0;
	
}
