#include <iostream>
using namespace std;

string func (int a){
for (int i=2; i<a; i++){
	if (a%i==0){
		return "ne";
	}	
}
return "ja";
} 
	

int main ()
{

int a;
cout << "Type a number: " << endl;
cin >> a;
cout << func(a);
}


