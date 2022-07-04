#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int *A=new int[4];
	int *B=new int[2];

	for(int i=0;i<4;i++)
		cin>>A[i];	

	for(int i=0;i<2;i++)
		cin>>B[i];

	sort(A,A+4);
	sort(B,B+2);

	int sum=0;
	for(int i=3;i>0;i--)
		sum+=A[i];

	sum+=B[1];

	cout<<sum<<'\n';
}
