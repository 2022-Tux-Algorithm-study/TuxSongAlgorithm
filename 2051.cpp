#include <iostream>
using namespace std;

int main(){
	
	int N,K;
	cin>>N>>K;
	
	bool check=false;
	int count=0;
	for(int i=1;i<=N;i++){
		if(!(N%i)){
			count++;
			if(count==K){
				check=true;
				cout<<i<<endl;
			}
		}
	}
	if(!check)  cout<<0<<endl;
	
}	
