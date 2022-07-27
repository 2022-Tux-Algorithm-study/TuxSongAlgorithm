#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(int a,int b){
    return a>b;
}
int main(){

    int N,k;
    cin>>N>>k;

    vector<int> people;
    for(int i=0;i<N;i++){
	int tmp;
	cin>>tmp;
	people.push_back(tmp);
    }
    
    sort(people.begin(),people.end(),comp);

    cout<<people[k-1]<<'\n';
}
