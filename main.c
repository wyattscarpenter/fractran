typedef struct {int n; int d;} frac; //numerator and denominator
frac fracs[] = {(frac){3,2}}; //simple fractran program that adds two numbers (in an archane way), as documented on the wikipedia pag
int n = 6;
int main(void){
	for(int i = 0; i < sizeof(fracs)/sizeof(frac); i++){
		frac f = fracs[i];
		if(n*f.n%f.d == 0){
			n = n*f.n/f.d;
			i = 0;
		}
	}
	return n;
}