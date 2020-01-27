#include <iostream>
using namespace std;

int main ()
{

int x; 
int p;
int y;
cout << "Type a number: ";
cin >> x;
cout << "Type a power: "; // Type a number and press enter
cin >> p; // Get user input from the keyboard
y=x;
//46%10 = 6
//23/10 = 2
for (int i=1; i < p; i++){
	x=x*y;
}

cout << "Your number is: " << x; // Display the input value 
}
