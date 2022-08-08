#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int N,K;
    cin>>N>>K;
    
    queue<int> nums;
    for(int i=1;i<=N;i++){
        nums.push(i);
    }
    
    cout<<"<";
    int i=1;
    while(nums.size()!=1){
        if(i%(K)==0){
            int a=nums.front();
            nums.pop();
            cout<<a<<", ";
        }else{
            nums.push(nums.front());
            nums.pop();
        }
        i++;
    }
    cout<<nums.front()<<">";
    
    return 0;
}
