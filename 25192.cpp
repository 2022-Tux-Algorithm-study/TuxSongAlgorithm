#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,int> person;
    
    int N;
    cin>>N;
    int count=0;
    string name;
    for(int i=0;i<N;i++){
        cin>>name;
        
        if(name!="ENTER"){
            if(!person.count(name)){
                person.insert(make_pair(name,0));
                count++;
            }
        }
        else
        {
            person.clear();
        }
    }
    cout<<count<<'\n';
    return 0;
}
