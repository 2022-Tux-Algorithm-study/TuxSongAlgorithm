#include <iostream>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int N;
	cin>>N;

	int arr[10001]={0};

	for(int i=0;i<N;i++){
	    int a;
	    cin>>a;
	    arr[a]+=1;
	}
	cout<<"\n";
	for(int i=1;i<=10000;i++){
	    for(int j=0;j<arr[i];j++){
		cout<<i<<'\n';
	    }
	}    
}
