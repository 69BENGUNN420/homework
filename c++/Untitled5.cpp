#include <iostream>
using namespace std;

int main ()
{
int x[] = {0};

int i = 0;
bool enter = true;
while (enter){
	cout << "Type a number: ";
	if (cin == "\n"){
		break;
	}
	else{
	cin >> x[i];
	i++;	
	}
}
int biggest = x[0];
for (int b=0; b<=i; b++){
	if(biggest<x[b]){
		biggest = x[b];
	}
}

cout << "Biggest number : " << biggest;

}
