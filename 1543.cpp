#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

	string line;
	getline(cin,line);
	string input;
	getline(cin,input);
	int tmp=line.find(input);
	
	int count=0;
	while(tmp!=string::npos){
		line.erase(0,tmp+input.length());
		tmp=line.find(input);
		count++;
	}

	cout<<count<<'\n';
}
