#include <iostream>

using namespace std;

int main()
{
	int h, m, s;
	int fcirc = 360;
	int hcirc = fcirc/12;
	int mcirc = fcirc/60;
	int scirc = fcirc/3600;
	
	cout << "Hours: ";
	cin >> h;
	cout << "Minutes: ";
	cin >> m;
	cout << "Seconds: ";
	cin >> s;
	int sum = hcirc*h+mcirc*m+scirc*s;
	while (sum>=360)
	{
		sum=sum-360;
	}
	
	cout << sum;
	
}
