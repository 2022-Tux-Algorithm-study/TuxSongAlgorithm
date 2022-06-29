#include <iostream>
#include <string>
#include <set>
#include <vector>
using namespace std;

int main(){

    set<string> a;
    set<string> b;

    int N,M;
    cin>>N>>M;

    for(int i=0;i<N;i++)
    {
        string name;
        cin>>name;
        a.insert(name);
    }

    for(int i=0;i<M;i++){
        string name;
        cin>>name;
        b.insert(name);
    }

    vector<string> names;
    for(auto k=a.begin();k!=a.end();k++){
        if(b.find(*k)!=b.end())
            names.push_back(*k);
    }

    cout<<names.size()<<'\n';
    for(int i=0;i<names.size();i++)
      cout<<names[i]<<'\n';
}
