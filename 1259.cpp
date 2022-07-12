#include <iostream>
using namespace std;

int main(){

	while(true){
		string input;
		cin>>input;
		
		int count=0;
		int size=input.length()-1;
		for(int i=0;i<=size/2;i++){
			if(input[i]==input[size-i]){
				count++;
			}
		}
		
		if(input=="0") break;
		if((size/2)==count-1){
			cout<<"yes"<<"\n";
		}else{
			cout<<"no"<<"\n";
		}
	}
}
