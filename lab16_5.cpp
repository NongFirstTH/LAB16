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

void shuffle(int *a,int *b,int *c,int *d){
int x[]={*a,*b,*c,*d};
int ans[4];
int i=0;
int R[4]={1,1,1,1};
while(i<4){
    int r = rand()%4;
        if(R[r]==1){
    ans[i] = x[r];
    R[r]=0;
    i++;
        }
    }
*a = ans[0];
*b = ans[1];
*c= ans[2];
*d= ans[3];
}