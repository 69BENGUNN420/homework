#include <iostream>
using namespace std;

int func (int a, int b){
int maxint=0;
if (a>b){
	for(int i=1; i<=b; i++){
		if (a%i==0&b%i==0){
			maxint = i;
		}		
	}
}else{
	for(int i=1; i<=a; i++){
		if (a%i==0&b%i==0){
			maxint = i;
		}
			
	}
}
return(maxint);

}

int main ()
{

int a;
cout << "Type a number: ";
cin >> a;

int b;
cout << "Type a number: ";
cin >> b;

cout << "Augstakais kop. kap. : " << func(a,b) << endl;

}


