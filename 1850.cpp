#include <iostream>

using namespace std;

long long gcd(long long a,long long b){
    
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    
    long long a,b;
    cin>>a>>b;
    
    long long result=gcd(a,b);
    
    for(long long i=0;i<result;i++){
        cout<<"1";
    }
    return 0;
}
