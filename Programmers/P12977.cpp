#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    bool isCheck[10000]={false,};
    
    for(int i=2;i<=10000;i++){
        if(!isCheck[i]){
            for(int j=i*2;j<10000;j+=i){
                isCheck[j]=true;
            }
        }
    }
    int sum=0;
    int count=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
              sum=nums[i]+nums[j]+nums[k];
              if(!isCheck[sum]){
                  count++;
              }
            }
        }
    }
    return count;
}
