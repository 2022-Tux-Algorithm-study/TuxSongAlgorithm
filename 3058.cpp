#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    vector<int> nums;
    
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        nums.clear();
        int sum=0;
        for(int i=0;i<7;i++){
            int num;
            cin>>num;
            
            if(!(num%2)){
               sum+=num;
               nums.push_back(num); 
            }
        }
        cout<<sum<<" "<<*min_element(nums.begin(),nums.end())<<'\n';
    }    
    return 0;
}
