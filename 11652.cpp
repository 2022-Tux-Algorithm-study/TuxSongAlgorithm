#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(const pair<long long,int>& a, const pair<long long,int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

int main(){

        int M;
        cin>>M;

        map<long long,int> nums;
        for(int i=0;i<M;i++){
            long long tmp;
            cin>>tmp;

            if(nums.count(tmp)){
                nums[tmp]++;
            }else{
                nums.insert(make_pair(tmp,1));
            }
        }
  vector<pair<long long,int>> vec(nums.begin(),nums.end());
  sort(vec.begin(),vec.end(),comp);

  cout<<vec[0].first<<'\n';
}
