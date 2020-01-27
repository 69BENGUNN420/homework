#include <iostream>
using namespace std;

int main ()
{
double n = 0;

cout << "N: ";
cin >> n;

double sum = 500;
int year = 0;
while (sum < 1000){
	sum = sum+sum*n*0.01;
	year++;
}

cout << year;

}
