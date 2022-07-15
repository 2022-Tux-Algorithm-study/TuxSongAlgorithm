#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int N,M;

	cin>>N>>M;
	string *input=new string[N];

	for(int i=0;i<N;i++){
		cin>>input[i];
	}

	for(int i=0;i<N;i++){
		reverse(input[i].begin(),input[i].end());
		cout<<input[i]<<'\n';
	}
	
}
