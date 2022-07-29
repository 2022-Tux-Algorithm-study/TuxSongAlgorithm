#include <map>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
map<long long,long long> check;
int main()
{
    long long N,k;
    cin>>N>>k;
    
    map<long long,long long> nums;

    for(int i=0;i<N;i++){
        long long n;
        cin>>n;
        if(nums.count(n)){
            nums[n]++;
        }else{
            check.insert(make_pair(n,i));
            nums.insert(make_pair(n,0));
        }
    }
    
    vector<pair<long long,long long>> v(nums.begin(),nums.end());
    stable_sort(v.begin(),v.end(),[](pair<long long,long long> a, pair<long long,long long> b){
        if(a.second==b.second)
            return check[a.first] < check[b.first];
        else
            return a.second>b.second;
    });
    
    for(auto it=v.begin();it!=v.end();it++){
        
        for(int i=0;i<=it->second;i++){
            cout<<it->first<<' ';
        }
    }
    return 0;
}
