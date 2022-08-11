#include <iostream>
#include <stack>
using namespace std;

int main()
{
    
    
    int N;
    cin>>N;
    
    for(int i=0;i<N;i++){
        stack<char> parenth;
        bool isCheck=false;
        string input;
        cin>>input;
        
        for(int j=0;j<input.length();j++){
            if(input[j]=='(')
                parenth.push(input[j]);
            else if(input[j]==')'){
                if(parenth.empty()){
                    cout<<"NO"<<'\n';
                    isCheck=true;
                    break;
                }
                parenth.pop();
            }
        }
        if(!parenth.empty()&&!isCheck){
            cout<<"NO"<<'\n';    
        }else if(parenth.empty()&&!isCheck){
            cout<<"YES"<<'\n';
        }
    }

    return 0;
}
