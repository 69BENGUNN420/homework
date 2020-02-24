#include <iostream>
using namespace std;

int main ()
{
	int const N =5;
	int a[N] = { 1, 3, 5, 4, 4};
	int c=a[0];
	int b=a[0];
	int cap, cap2;
	for(int i=0;i<N;i++){
		if (a[i]>=c){
			c=a[i];	
			cap=i;		
		}
		if (a[i]<=b){
			b=a[i];		
			cap2=i;
		}
	}
	a[cap]=b;
	a[cap2]=c;
	
	for(int i=0;i<N;i++){
		cout << a[i];		
	}
	
}


