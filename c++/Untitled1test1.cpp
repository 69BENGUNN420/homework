#include <iostream>
using namespace std;

int main ()
{
int x;
cout << "y: ";
cin >> x;

int y;
cout << "x: ";
cin >> y;


int k;
cout << "k: ";
cin >> k;

if(k==0){
	cout<<"Ja ";
	return 1;
}else if(x==0||y==0||k>x*y){
	cout<<"Ne ";
	return 1;
}

if (k % y==0){
		cout<<"Ja ";
		return 1;
	}
	else if (k % x==0){
		cout<<"Ja ";
		return 1;
	}
	else{
		cout<<"Ne ";
		return 1;
	}
}
