#include <queue>
#include <iostream>
using namespace std;

int main(){
    
    int N;
    cin>>N;
    
    queue<int> q;
    
    for(int i=0;i<N;i++){
        string op;
        cin>>op;
        if(op=="push"){
            int n;
            cin>>n;
            q.push(n);
        }else if(op=="pop"){
            if(!q.empty()){
                cout<<q.front()<<'\n';
                q.pop();
            }else
                cout<<"-1"<<'\n';
        }else if(op=="size"){
            cout<<q.size()<<'\n';
        }else if(op=="empty"){
            cout<<q.empty()<<'\n';
        }else if(op=="front"){
            if(q.empty())
                cout<<"-1\n";
            else
                cout<<q.front()<<'\n';
        }else if(op=="back")
            if(q.empty())
                cout<<"-1\n";
            else
                cout<<q.back()<<'\n';
    }
}
