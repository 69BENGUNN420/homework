#include <iostream>
using namespace std;

int main ()
{
int x,y;
cout << "sakumorientacija: ";
cin >> x;

switch(x){
		case 1:{
			cout << "ziemeli: " << endl;
			break;
		}
		case 2:{
			cout << "dienvidi: " << endl;
			break;
		}
		case 3:{
			cout << "rietumi: " << endl;
			break;
		}
		case 4:{
			cout << "austrumi: " << endl;
			break;
		}
		default: {
			cout<< "invalid command" << endl;
		}
	}

while (true){	
	cout << "Kommanda: ";
	cin >> y;
switch(y){
		case 1:{
			if (x==4){
				x=0;
			}
			x++;
			if (x==4){
				x=0;
			}
			x++;
			break;
		}
		case -1:{
			if (x==1){
				x=5;
			}
			x--;
			if (x==1){
				x=5;
			}
			x--;
			break;
		}
		
		case 0:{
			break;
		}
		default :{
			cout<< "invalid command" << endl;
			break;
		}
	}
	
switch(x){
		case 1:{
			cout << "ziemeli: " << endl;
			break;
		}
		case 2:{
			cout << "dienvidi: " << endl;
			break;
		}
		case 3:{
			cout << "rietumi: " << endl;
			break;
		}
		case 4:{
			cout << "austrumi: " << endl;
			break;
		}
		default: {
			cout<< "invalid command" << endl;
		}
	}

}

}
