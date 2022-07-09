#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

	int N;
	cin>>N;

	vector<string> num;

	for(int i=0;i<N;i++){
		string tmp;
		cin>>tmp;
		num.push_back(tmp);
	}

	for(int i=0;i<N;i++){
		int tmp=(int)num[i][num[i].length()-1]-'0';
		if(tmp%2){
			cout<<"odd"<<'\n';
		}else{
			cout<<"even"<<'\n';
		}
	}
	
}
