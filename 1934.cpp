#include <iostream>
using namespace std;

int main(){
	int A,B;
	int lA,lB;

	int T;
	cin>>T;

	for(int i=0;i<T;i++){
		cin>>A>>B;
		lA=A,lB=B;
	
		while(B!=0){
			int tmp=A%B;
			A=B;
			B=tmp;
		}
	
		int lcb=(lA*lB)/A;

		cout<<lcb<<endl;
	}
}
