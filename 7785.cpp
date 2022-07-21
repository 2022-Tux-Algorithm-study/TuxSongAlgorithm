#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a,string b){
    return a>b;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    cin>>N;

    map<string,string> persons;
    vector<string> names;
    for(int i=0;i<N;i++){
        string name;
        string log;

        cin>>name>>log;
        if(log=="leave")
            persons.erase(name);
        else{
            persons.insert(make_pair(name,log));
        }
    }

    for(auto it:persons){
        names.push_back(it.first);
    }
   sort(names.begin(),names.end(),compare);
   
   for(int i=0;i<names.size();i++)
    cout<<names[i]<<'\n';

}
