#include <iostream>
using namespace std;

int main ()
{
	int const N =5;
	int a[N] = { 1, 3, 5, 7 , 4};
	int c=a[0];
	int b=0;
	for(int i=0;i<N;i++){
		if (a[i]>=c){
		b=c;
		c=a[i];			
	}
	else if (a[i]>=b){
		b=a[i];		
	}
	
	}
	cout << b;
	
}


