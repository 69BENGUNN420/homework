#include <iostream>
using namespace std;

int main ()
{

int a,b,c;
cout << "Type a number: ";
cin >> a;
cout << "Type a number: "; // Type a number and press enter
cin >> b; // Get user input from the keyboard
cout << "Type a number: "; // Type a number and press enter
cin >> c; // Get user input from the keyboard
string exist = "eksiste";

if (a+b<c || a+c<b || b+c<a){
	exist = "neeksiste";
}

cout << "Triangle : " << exist; 

}
