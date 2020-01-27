#include <iostream>
using namespace std;

int main ()
{

int m = 1; 
int n = 0;
int sum = 0;
while (m>=n){
	if (m>=n){
		cout << "M: ";
		cin >> m;
		cout << "N: ";
		cin >> n;
	}
	else{
		break;
	}
}

for (int i=m; i <= n; i++){
	if (i%2!=0){
		sum = sum + i;	
	}
}

cout << "Sum: " << sum; // Display the input value 
}
