#include <iostream>
using namespace std;

int main ()
{
int x1,x2,y1,y2,r;
cout << "x1: ";
cin >> x1;

cout << "y1: ";
cin >> y1;

cout << "x2: ";
cin >> x2;

cout << "y2: ";
cin >> y2;

cout << "r: ";
cin >> r;

if (x1<x2+r&&y1<y2+r||x1>x2-r&&y1>y2-r){
		cout<<"Pieder ";
		return 1;
	}
	else{
		cout<<"Ne ";
		return 1;
	}
}
