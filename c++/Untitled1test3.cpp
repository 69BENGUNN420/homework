#include <iostream>
using namespace std;

int main ()
{
int x,y,m,n;
cout << "y: ";
cin >> x;

cout << "x: ";
cin >> y;

cout << "x1(saurums): ";
cin >> m;

cout << "y1(platums): ";
cin >> n;

if(m<=0||n<=0){
	cout<<"Neder ";
	return 1;
}

if (x+1<=m){
		cout<< x+1 << " " << y << endl;
	}
	if (x-1!=0){
		cout<< x-1 << " " << y << endl;
	}
	if (y+1<=n){
		cout<< x << " " << y+1 << endl;
	}
	if (y-1!=0){
		cout<< x << " " << y-1 << endl;
	}
}
