#include <iostream>
using namespace std;

int main ()
{

int x,p,y;
cout << "Type a number: ";
cin >> x;
cout << "Type a number: "; // Type a number and press enter
cin >> p; // Get user input from the keyboard
cout << "Type a number: "; // Type a number and press enter
cin >> y; // Get user input from the keyboard
int biggest;

if (x>=y){
	biggest = x;
}

else if (y>=x) {
	biggest = y;
}

else if (p>=x) {
	biggest = p;
} 

else if (p>=y){
	biggest = p;
}
cout << "Biggest number : " << biggest;

}
