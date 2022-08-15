#include <iostream>
#include <deque>
using namespace std;

int main()
{
    int N;
    cin>>N;
    
    deque<int> nums;
    int sum=0;
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        
        if(n==0){
            if(nums.size()==0){
                continue;
            }
            sum-=nums.front();
            nums.pop_front();
        }else{
            nums.push_front(n);
            sum+=n;
        }
    }
    cout<<sum<<'\n';
    return 0;
}
