#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    long long N;
    cin>>N;
    
    vector<long long> tickets;
    for(long long i=0;i<N;i++){
        long long n;
        cin>>n;
        tickets.push_back(n);
    }
    
    sort(tickets.begin(),tickets.end());
    long long i;
    for(i=1;i<=tickets[tickets.size()-1];i++)
        if(!binary_search(tickets.begin(),tickets.end(),i)){
            cout<<i;
            return 0;
        }
        cout<<i;
            
    return 0;
}
