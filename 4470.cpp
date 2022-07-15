#include <iostream>
using namespace std;

int main(){

	int N;
	cin>>N;
	string *input=new string[N];
	getline(cin,input[0]); //int형의 \n을 인식해서, 일부로 한번 더 써서 날려준다/
	for(int i=0;i<N;i++){
		getline(cin,input[i]);
		string a=to_string(i+1)+". ";
		input[i].insert(0,a);
	}
	
	for(int i=0;i<N;i++){
		cout<<input[i]<<'\n';
	}
}
