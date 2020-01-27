#include <iostream>
using namespace std;

int kap(int x, int y){
	if (y==1);
	else kap(x*x,y-1);
	x = x*x;
	cout << x << endl;
	return x;
}

int main ()
{
int x;
cout << "Numb ";
cin >> x;

int y;
cout << "Power ";
cin >> y;
cout << kap(x, y) << endl;
}


