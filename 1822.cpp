#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main(){

	set<int> As,Bs;
	int A,B;

	cin>>A>>B;

	for(int i=0;i<A;i++){
		int tmp;
		cin>>tmp;
		As.insert(tmp);
	}
	
	for(int i=0;i<B;i++){
		int tmp;
		cin>>tmp;
		Bs.insert(tmp);
	}
	vector<int> nums;
	for(auto Ai=As.begin(); Ai!=As.end(); Ai++){
		if(Bs.find(*Ai)==Bs.end())
			nums.push_back(*Ai);
	}

	if(nums.empty())
		cout<<0<<endl;
	else{
		int i=0;
		cout<<nums.size()<<endl;
		for(i=0;i<nums.size()-1;i++)
			cout<<nums[i]<<' ';
		cout<<nums[i]<<'\n';
	}
}
