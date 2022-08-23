#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    vector<long long> nums;
    
    long long n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        long long tmp;
        cin>>tmp;
        nums.push_back(tmp);
    }
    sort(nums.begin(),nums.end());
    
    for(auto it=nums.begin();it!=nums.end();it++){
        cout<<*it<<'\n';
    }
    return 0;
}
