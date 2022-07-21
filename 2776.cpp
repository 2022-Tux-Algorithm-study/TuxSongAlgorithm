#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    map<long long,bool> notes;
    
    int T;
    cin>>T;
    
    for(int i=0;i<T;i++){
        long long N;
        cin>>N;
        
        for(int j=0;j<N;j++){
            long long a;
            cin>>a;
            notes.insert(make_pair(a,false));
        }
        
        long long M;
        cin>>M;
        for(long long j=0;j<M;j++){
            long long a;
            cin>>a;
            if(notes.count(a)){
                cout<<"1"<<'\n';
            }else
                cout<<"0"<<'\n';
        }
        
        notes.clear();
    }

    return 0;
}
