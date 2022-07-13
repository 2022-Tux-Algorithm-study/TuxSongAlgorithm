#include <iostream>
using namespace std;

int main(){


	string input;

	cin>>input;

	int count=1;
	for(int i=0;i<input.length();i++){
		cout<<input[i];
		if(!(count%10)) cout<<'\n';
		count++;
	}
}
