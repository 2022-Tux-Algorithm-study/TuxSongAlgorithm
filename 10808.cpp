#include <iostream>
#include <string>
using namespace std;

int main(){

	int alpha[26]={0};

	string line;
	cin>>line;

	for(int i=0;i<line.length();i++){
		for(int j=0;j<26;j++){
			if(line[i]=='a'+j)
				alpha[j]++;
		}
	}

	for(int i=0;i<26;i++)
		cout<<alpha[i]<<" ";
}
