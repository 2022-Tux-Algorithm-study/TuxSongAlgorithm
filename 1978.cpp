#include <iostream>
#include <vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	
	int num;
	cin>>num;
	vector<int> nums;
	for(int i=0;i<num;i++){
		int tmp;
		cin>>tmp;
		nums.push_back(tmp);
	}
	bool check=false;
	int cnt=0;
	for(int i=0;i<num;i++){
		for(int k=2; k<nums[i];k++){
			if(!(nums[i]%k))
			{
				check=true;
				break;
			}
		}
		if(!check&&nums[i]!=1)
			cnt++;
		check=false;
	}
	cout<<cnt<<endl;
}
