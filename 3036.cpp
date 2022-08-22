#include <iostream>

using namespace std;

int gcd(int a,int b){
    
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    
    cin>>T;
    
    int *nums=new int[T];
    for(int i=0;i<T;i++){
        cin>>nums[i];
    }
    int divisor;
    for(int i=0;i<1;i++){
        for(int j=i+1;j<T;j++){
            divisor=gcd(nums[i],nums[j]);
            cout<<nums[i]/divisor<<"/"<<nums[j]/divisor<<'\n';
        }
    }
    
    return 0;
}
