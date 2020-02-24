#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	int const N =5;
	int const M =5;
	int a[N][M];
	int B[N][M];
	int C[N][M];
	
	time_t t;
	srand((unsigned) time(&t));
	int randNum;
	
	for (int i=0;i<N;i++){
		for(int f=0;f<M;f++){
			randNum = rand()%2;
			a[i][f]=randNum;
			cout << a[i][f]<< " ";
		}
		cout << endl;
	}
	cout << "****************"<<endl;
	for (int i=0;i<N;i++){
		for(int f=0;f<M;f++){
			randNum = rand()%2;
			B[i][f]=randNum;
			cout << B[i][f]<< " ";
		}
		cout << endl;
	}
	for (int i=0;i<N;i++){
		for(int f=0;f<M;f++){
			C[i][f]=a[i][f]+B[i][f];
		}
	}	
	cout << "****************"<<endl;
	for (int i=0;i<N;i++){
		for(int f=0;f<M;f++){
			cout << C[i][f]<< " ";
		}
		cout << endl;
	}
	
}


