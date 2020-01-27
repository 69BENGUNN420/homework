#include <iostream>
using namespace std;

int main ()
{

int a;
cout << "Type a number: ";
cin >> a;
string exist = "nesanac";

if (a%2==0 && a%3==0 && a%7!=0){
	exist = "sanac";
}

cout << "Triangle : " << exist; 

}


