#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	int const N =5;
	int const M =5;
	int a[N][M];
	int b[M];
	
	time_t t;
	srand((unsigned) time(&t));
	int randNum;
	
	for (int i=0;i<N;i++){
		for(int f=0;f<M;f++){
			randNum = rand()%3;
			a[i][f]=randNum;
			cout << a[i][f]<< " ";
		}
		cout << endl;
	}
	int max=0;
	for (int i=0;i<N;i++){
		for(int f=0;f<M;f++){
			if (max < a[i][f]){
				max = a[i][f];
			}
		}
		b[i]=max;
		max=0;
	}	
	cout << "****************"<<endl;
	for(int i=0;i<N;i++){
		cout << b[i]<< " ";		
	}
	
}


