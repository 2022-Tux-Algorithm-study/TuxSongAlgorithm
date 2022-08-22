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
    
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        int *nums=new int[n];
        for(int j=0;j<n;j++){
            cin>>nums[j];
        }
        long long sum=0;
        for(int j=0;j<n-1;j++){
            
            for(int k=j+1;k<n;k++){
                sum+=gcd(nums[j],nums[k]);
            }
        }
        cout<<sum<<'\n';
        delete(nums);
    }
    return 0;
}
