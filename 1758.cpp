#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a,int b)
{
	return a>b;
}
int main(){

	int N;
	cin>>N;

	long long int *tip=new long long int[N];

	for(long long int i=0;i<N;i++)
		cin>>tip[i];

	sort(tip,tip+N,compare);
	long long int sum=0;
	for(long long int i=0;i<N;i++){
		long long int tmp=tip[i]-i;
		if(tmp<0) tmp=0;
		else sum+=tmp;
	}
	cout<<sum<<'\n';
}
