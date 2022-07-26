#include <iostream>
#include <map>
using namespace std;

int main()
{
    
    int N;
    cin>>N;
    
    map<string,int> names;
    for(int i=0;i<2*N-1;i++){
        string name;
        cin>>name;
        
        if(names.count(name)){
            names[name]++;
        }else{
            names.insert(make_pair(name,0));
        }
    }
    
    for(auto it=names.begin(); it!=names.end();it++)
    {
        if(!(it->second%2))
            cout<<it->first;
    }
    return 0;
}
