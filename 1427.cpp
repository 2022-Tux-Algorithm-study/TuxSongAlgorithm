#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

bool compare(long long a,long long b){
	return a>b;
}
int main(){

	string line;

	cin>>line;
	
	long long size=line.length();

	vector<long long> arr;
	for(long long i=0;i<size;i++)
		arr.push_back((long long)line[i]-'0');

	sort(arr.begin(),arr.end(),compare);
	
	for(long long i=0;i<arr.size();i++){
		cout<<arr[i];
	}
}
