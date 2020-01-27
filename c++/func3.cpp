#include <iostream>
using namespace std;

void func (int a){
for (int i=0; i<a; i++){
	cout << "*";
}
cout << endl;

for (int i=2; i<a; i++){
	cout << "*";
	for (int b=2; b<a; b++){
	cout << " ";	
	}
	cout << "*";
	cout << endl;
}

for (int i=0; i<a; i++){
	cout << "*";
}
	
}
int main ()
{

int a;
cout << "Type a number: ";
cin >> a;
func(a);
}


