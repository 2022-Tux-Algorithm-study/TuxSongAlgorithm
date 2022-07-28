#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main(){
    
    int N;
    cin>>N;
    
    vector<int> nums;
    
    for(int i=0;i<N;i++){
        nums.clear();
        for(int i=0;i<10;i++){
            int n;
            cin>>n;
            nums.push_back(n);
        }
        sort(nums.begin(),nums.end(),[](int a,int b){
            return a>b; 
        });
        
        cout<<nums[2]<<'\n';
    }
}
