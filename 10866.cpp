#include <iostream>
#include <deque>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    deque<int> nums;
    
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        
        string input;
        cin>>input;
        
        if(input=="push_back"){
            int n;
            cin>>n;
            nums.push_back(n);
        }else if(input=="push_front"){
            int n;
            cin>>n;
            nums.push_front(n);
        }else if(input=="front"){
            if(nums.empty()){
                cout<<"-1\n";
            }else
                cout<<nums.front()<<'\n';
        }else if(input=="back"){
            if(nums.empty()){
                cout<<"-1\n";
            }else
                cout<<nums.back()<<'\n';
        }else if(input=="size"){
            cout<<nums.size()<<'\n';
        }else if(input=="empty"){
            cout<<nums.empty()<<'\n';
        }else if(input=="pop_front"){
            if(nums.empty()){
                cout<<"-1\n";
            }else{
                cout<<nums.front()<<'\n';
                nums.pop_front();
            }
        }else if(input=="pop_back"){
            if(nums.empty()){
                cout<<"-1\n";
            }else{
                cout<<nums.back()<<'\n';
                nums.pop_back();
            }
        }
    }
}

