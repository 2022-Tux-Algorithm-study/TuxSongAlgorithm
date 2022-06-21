#include <iostream>
#include <cstring>
using namespace std;

int main(){

	int N,M;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>N>>M;
	
	bool *check=new bool[M+1];
	memset(check,true,sizeof(bool)*M+1);

	for(int i=2;i<=M;i++){
		if(check[i]){
			for(int j=i*2;j<=M;j+=i)
				check[j]=false;
		}	
	}

	check[1]=false;
	for(int i=N;i<=M;i++)
		if(check[i])
			cout<<i<<'\n';
}
