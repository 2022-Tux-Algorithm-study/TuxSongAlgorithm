#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int N;
	cin>>N;

	for(int i=0;i<N;i++){
		string input;
		cin>>input;
		int sum=stoi(input);
		reverse(input.begin(),input.end());
		sum+=stoi(input);
	
		string output=to_string(sum);
		int size=output.length()-1;
		int count=0;
		for(int i=0;i<=size/2;i++){
			if(output[i]==output[size-i]){
				count++;
			}
		}

		if(size/2==count-1){
			cout<<"YES"<<endl;
		}else
			cout<<"NO"<<endl;
	}

}
