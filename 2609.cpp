#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    
    int A=a;
    int B=b;
    while(B!=0){
        int tmp=A;
        A=B;
        B=tmp%B;
    }
    cout<<A<<'\n';
    cout<<(a*b)/A<<'\n';
    
    return 0;
}
