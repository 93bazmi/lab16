#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *s,int *n,int *o,int *w){
	int a = *s , b = *n , c = *o , d = *w ; 
	int x = rand()%4 ; 
	if(x==0){
		*s = a;
		int y=rand()%3;
		if(y==0){
			*n=b;
			int z=rand()%2;
			if(z==0){
				*o=c;
				*w=d;
			}
			if(z==1){
				*w=c;
				*o=d;
			}
		}
		if(y==1){
			*o=b;
			int z=rand()%2;
			if(z==0){
				*n=c;
				*w=d;
			}
			if(z==1){
				*w=c;
				*n=d;
			}
		}
		if(y==2){
			*w=b;
			int z=rand()%2;
			if(z==0){
				*n=c;
				*o=d;
			}
			if(z==1){
				*o=c;
				*n=d;
			}
		}
	}
	if(x==1){
		*n = a;
		int y=rand()%3;
		if(y==0){
			*s=b;
			int z=rand()%2;
			if(z==0){
				*o=c;
				*w=d;
			}
			if(z==1){
				*w=c;
				*o=d;
			}
		}
		if(y==1){
			*o=b;
			int z=rand()%2;
			if(z==0){
				*s=c;
				*w=d;
			}
			if(z==1){
				*w=c;
				*s=d;
			}
		}
		if(y==2){
			*w=b;
			int z=rand()%2;
			if(z==0){
				*s=c;
				*o=d;
			}
			if(z==1){
				*o=c;
				*s=d;
			}
		}
	}
	if(x==2){
		*o = a;
		int y=rand()%3;
		if(y==0){
			*s=b;
			int z=rand()%2;
			if(z==0){
				*n=c;
				*w=d;
			}
			if(z==1){
				*w=c;
				*n=d;
			}
		}
		if(y==1){
			*n=b;
			int z=rand()%2;
			if(z==0){
				*s=c;
				*w=d;
			}
			if(z==1){
				*w=c;
				*s=d;
			}
		}
		if(y==2){
			*w=b;
			int z=rand()%2;
			if(z==0){
				*s=c;
				*n=d;
			}
			if(z==1){
				*n=c;
				*s=d;
			}
		}
	}
	if(x==3){
		*w = a;
		int y=rand()%3;
		if(y==0){
			*s=b;
			int z=rand()%2;
			if(z==0){
				*n=c;
				*o=d;
			}
			if(z==1){
				*o=c;
				*n=d;
			}
		}
		if(y==1){
			*n=b;
			int z=rand()%2;
			if(z==0){
				*s=c;
				*o=d;
			}
			if(z==1){
				*o=c;
				*s=d;
			}
		}
		if(y==2){
			*o=b;
			int z=rand()%2;
			if(z==0){
				*s=c;
				*n=d;
			}
			if(z==1){
				*n=c;
				*s=d;
			}
		}
	}
}

