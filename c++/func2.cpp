#include <iostream>
using namespace std;

void func (int a){

for (int i=0; i<a; i++){
	for (int b=0; b<a; b++){
	cout << "*";	
	}
	cout << endl;
}
	
}
int main ()
{

int a;
cout << "Type a number: ";
cin >> a;
func(a);
}


