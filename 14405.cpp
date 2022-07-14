#include <iostream>
#include <regex>
#include <string>
using namespace std;

int main(){

	cin.tie(0); cout.tie(0);
	regex re("(pi|ka|chu)*");
	string input;

	cin>>input;

	if(regex_match(input,re)){
		cout<<"YES"<<endl;
	}else
		cout<<"NO"<<endl;
	
}

