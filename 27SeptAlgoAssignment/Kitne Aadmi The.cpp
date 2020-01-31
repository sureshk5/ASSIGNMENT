#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;
int main ()
{
    string s;
    int count = 0, i;
    ifstream inFile;
    inFile.open("datafile.txt");
    if (!inFile) {
    	cerr << "Unable to open file datafile.txt";
    	exit(1);   // call system to stop
	}
	while (inFile >> s) {
		count++;
	}
	inFile.close();
    cout << count;
    return 0;
}
