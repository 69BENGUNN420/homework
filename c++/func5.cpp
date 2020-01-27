#include <iostream>
using namespace std;

int func (int a, int b){
int x = a;
for (int i=1; i<b; i++){
	x=x*x;
}
return x;
} 
	

int main ()
{

int a;
cout << "Type a number: " << endl;
cin >> a;
int b;
cout << "Type a number: " << endl;
cin >> b;

cout << func(a,b);
}


