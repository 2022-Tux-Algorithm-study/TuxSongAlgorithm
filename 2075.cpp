#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a,int b){
	return a>b;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;

	int *nums=new int[N*N];
	for(int i=0;i<N*N;i++)
	{
		cin>>nums[i];
	}

	sort(nums,nums+(N*N),compare);
	cout<<nums[N-1]<<endl;
}

