#include <iostream>
using namespace std;

int main ()
{
int n;
cout << "N: ";
cin >> n;

int i = 1;
while (i<=n){
	if (n%i == 0){
		cout << i << "; "; // Display the input value 
	}
	i++;
}

return 0;
}
