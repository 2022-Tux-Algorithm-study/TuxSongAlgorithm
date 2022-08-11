#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int N;
    cin>>N;
    vector<int> finds;

    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        if(n==0){
            continue;
        }
        finds.push_back(n);
    }

    int M;
    cin>>M;
    vector<int> nums;

    for(int i=0;i<M;i++){
        int n;
        cin>>n;
        nums.push_back(n);
    }
    
    sort(finds.begin(),finds.end());

    for(int i=0;i<M;i++){
        cout<<binary_search(finds.begin(),finds.end(),nums[i])<<"\n";
    }

}
