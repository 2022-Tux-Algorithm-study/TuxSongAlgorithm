#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    map<string,int> books;
    
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        string name;
        cin>>name;
        
        if(books.count(name)){
            books[name]++;
        }else{
            books.insert(make_pair(name,0));
        }
    }
    
    auto best=max_element(books.begin(),books.end(),[](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
    cout<<best->first<<'\n';

    return 0;
}
