#include <stdio.h>
#include <ctype.h>
int d[1000]; //arbitrary limit
int i = -1;
int wasdigit = 0;
char c;
int main(void){
	while ( (c = getchar()) != EOF){ //parse fractran file (hard part)
		if(isdigit(c)){
			if(!wasdigit){i++;}
			d[i] = d[i]*10+(c-'0');
			wasdigit=1;
		}else{
			wasdigit=0;
		}
		
	}
	//int foo = 0; while(d[foo]){printf("%d ", d[foo]); foo++;} //verify program was read correctly
	int j = 1;
	while(j <= i){ //run fractran algorithm
		if(d[0]*d[j]%d[j+1] == 0){
			d[0] = d[0]*d[j]/d[j+1];
			//printf("%d: %d/%d. %d\n", i, d[j], d[j+1], d[0]); //show steps
			j = 1;
		} else {
			j += 2;
		}
	}
	printf("%d\n", d[0]); //often our results are too large to fit in the 1 byte of exit status
	return 0;
}