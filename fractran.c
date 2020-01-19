#include <stdio.h>
#include <ctype.h>
int d[1000]; //arbitrary limit
int i = 0;
int wasdigit = 0;
char c;
int main(void){
	while ( (c = getchar()) != EOF){ //parse fractran file (hard part)
		if(isdigit(c)){
			d[i] = d[i]*10+c-'0';
			wasdigit=1;
		}else if(wasdigit){
			i++;
			wasdigit=0;
		}
		
	}
	for(int j = 1; j < i; j+=2){ //run fractran algorithm
		if(d[0]*d[j]%d[j+1] == 0){
			d[0] = d[0]*d[j]/d[j+1];
			j = 1;
		}
	}
	return d[0];
}