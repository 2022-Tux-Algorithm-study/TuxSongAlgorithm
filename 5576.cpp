#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
	return a>b;
}
int main(){


	int W[10];
	int K[10];

	for(int i=0;i<10;i++)
		cin>>W[i];

	for(int i=0;i<10;i++)
		cin>>K[i];

	int W3total=0;
	int K3total=0;

	sort(W,W+10,compare);
	sort(K,K+10,compare);

	for(int i=0;i<3;i++){
		W3total+=W[i];
		K3total+=K[i];
	}

	cout<<W3total<<" "<<K3total<<'\n';

}
