#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int N,M;
    cin>>N;
    vector<long long> a;
    for(int i=0;i<N;i++){
        long long tmp;
        cin>>tmp;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end());
    cin>>M;
    vector<long long> b;
    for(int i=0;i<M;i++){
        long long tmp;
        cin>>tmp;
        b.push_back(tmp);
    }
    
    for(int i=0;i<b.size();i++){
        cout<<binary_search(a.begin(),a.end(),b[i])<<" ";
    }
    return 0;
}
