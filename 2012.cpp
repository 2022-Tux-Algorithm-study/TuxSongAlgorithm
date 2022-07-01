#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int N;

	cin>>N;

	int *scores=new int[N];

	for(int i=0;i<N;i++){
		cin>>scores[i];
	}

	sort(scores,scores+N);

	long long int total=0;

	for(int i=1;i<=N;i++){
		total+=((scores[i-1]-i)<0)? (-(scores[i-1]-i)):(scores[i-1]-i);

	}

	cout<<total<<'\n';
}
