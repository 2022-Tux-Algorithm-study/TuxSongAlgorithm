#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string A,B;

	cin>>A>>B;

	int size=B.length();


	string output;

	long long mul=0;
	for(int i=0;i<A.length();i++){
		for(int j=0;j<size;j++){
			mul+=(A[i]-'0')*(B[j]-'0');
		}
	}
	cout<<mul<<endl;
}
