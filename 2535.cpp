#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Country{
public:
	Country(int,int,int);
	int country;
	int num;
	int score;
};
Country::Country(int c,int n,int s){
	country=c;
	num=n;
	score=s;
	
}
bool compare(Country a,Country b){
	return a.score>b.score;
}
int main(){

	vector<Country> arr;

	int N;
	cin>>N;

	for(int i=0;i<N;i++){
		int c,n,s;
		cin>>c>>n>>s;
		arr.push_back(Country(c,n,s));
	}

	sort(arr.begin(),arr.end(),compare);

	int fir=arr[0].country;
	int sec=arr[1].country;
	for(int i=0;i<2;i++){
		cout<<arr[i].country<<" "<<arr[i].num<<'\n';
	}

	for(int i=2;i<arr.size();i++){
		if(arr[i].country!=fir||arr[i].country!=sec){
			cout<<arr[i].country<<" "<<arr[i].num<<'\n';
			break;
		}
	}
}
