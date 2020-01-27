#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 22;
int grades[SIZE];

void readData() {
	
	int i=0;

    string inFileName = "grades.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())  
    {
        for (i = 0; i < SIZE; i++) 
        {
            inFile >> grades[i];
            cout << grades[i] << " ";
        }

        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
}

    void getAverage() {
		
	int i=0;
	double avg=0;
	
    string inFileName = "grades.txt";
    ifstream inFile;
    inFile.open(inFileName.c_str());

    if (inFile.is_open())  
    {
        for (i = 0; i < SIZE; i++) 
        {
            inFile >> grades[i];
        }
		for (i = 0; i < SIZE; i++) 
        {
            avg = avg+ grades[i];
        }
        cout << avg/SIZE << " Is Average";
        inFile.close(); // CLose input file
    }
    else { //Error message
        cerr << "Can't find input file " << inFileName << endl;
    }
   }
/*
    void printGradesTable() {

    }

    void printGradesInRow() {

    }


    void min () {
        int pos = 0;
        int minimum = grades[pos];

        cout << "Minimum " << minimum << " at position " << pos << endl;
    }

    void max () {
        int pos = 0;
        int maximum = grades[pos];

        cout << "Maximum " << maximum << " at position " << pos << endl;
    }

    void sort() {

    }
*/


int main ()
{
    readData();
    getAverage();
    return 0;
}
