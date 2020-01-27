#include <iostream>
#include <sstream>  // for string streams 
using namespace std;

int main ()
{
int n;

cout << "N: ";
cin >> n;
int sum;
ostringstream str1; 
for(int i=1; i<=n; i++){
	str1 << i;
}
cout << str1.str() << endl;
string s = str1.str();
cout << s.length();
}
