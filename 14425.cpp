#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    int N,M;
    
    cin>>N>>M;
    
    map<string,int> inputs;
    vector<string> Ns;
    for(int i=0;i<N;i++){
        string tmp;
        cin>>tmp;
        inputs.insert(make_pair(tmp,0));
    }
    
    for(int i=0;i<M;i++){
        string tmp;
        cin>>tmp;
        Ns.push_back(tmp);
    }

    int count=0;
    
    for(int i=0;i<M;i++)
        if(inputs.count(Ns[i]))
            count++;
    
    cout<<count<<'\n';
    return 0;
}
