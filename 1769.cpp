#include <iostream>
#include <string>
using namespace std;

int main(){

	string line;
	cin>>line;

	long long sum=0;
	int count=0;
	bool check=false;
	long long size=line.length();
	
	if(size>1) count++;
	while(true){
		for(int i=0;i<size;i++){
			sum+=(int)line[i]-'0';	
		}
		if(sum>=10){
			count++;
			line=to_string(sum);
		}else{
			if(!(sum%3)){
				check=true;	
			}
			break;
		}
		size=line.length();
		sum=0;
	}
	cout<<count<<'\n';
	if(check){
		cout<<"YES"<<'\n';
	}else{
		cout<<"NO"<<'\n';
	}

}
