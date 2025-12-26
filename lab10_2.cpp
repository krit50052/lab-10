#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	string line;
	dest << "-------------------- BOOM ---------------------\n";
	
	while(getline(source, line)){
		dest << line << "\n";
	}
	dest << "-------------------- HA!! ---------------------\n";
	
    source.close();
    dest.close();
	return 0;
}
