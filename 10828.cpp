#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N;
    cin>>N;
    
    stack<int> st;
    string command;
    for(int i=0;i<N;i++){
        cin>>command;
        
        if(command=="push"){
                int n;
                cin>>n;
                st.push(n);
        }else if(command=="top"){
            if(st.empty()){
                cout<<-1<<'\n';
            }else{
                cout<<st.top()<<'\n';
            }
        }else if(command=="pop"){
            if(st.empty()){
                cout<<-1<<'\n';
            }else{
                cout<<st.top()<<'\n';
                st.pop();
            }
        }else if(command=="empty"){
            cout<<st.empty()<<'\n';
        }else if(command=="size"){
            cout<<st.size()<<'\n';
        }
    }

    return 0;
}
