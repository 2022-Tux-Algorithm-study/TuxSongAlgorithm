#include <iostream>
using namespace std;

int main(){

	int N;
	cin>>N;

	int count=0;
	for(int i=0;i<5;i++){
		int tmp;
		cin>>tmp;

		if((tmp==N)){
			count++;
		}
	}

	cout<<count<<endl;
}
