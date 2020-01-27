#include <iostream>

using namespace std;

int main()
{
	double v,s;
	cout << "V: ";
	cin >> v;
	cout << "S: ";
	cin >> s;
	if (v<0){
		if (s<0){
			s = s/v;
			cout << "T:"<< s;		
		}
	}
	else if(s<=0){
		if(v==0){
			if (s==0){
				cout << "T: 0";
			}
		}
		else {
		
		cout << "Not Possible";
}
	} else if (v<=0){
		cout << "Not Possible";
	} 
	else {
		s = s/v;
		cout << "T:"<< s;
	
	}
}

