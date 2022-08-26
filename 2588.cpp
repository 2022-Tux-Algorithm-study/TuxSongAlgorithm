#include <iostream>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int mul=0;
    for(int i=2;i>=0;i--){
        int tmp=0;
        int mul10=1;
        for(int j=2;j>=0;j--){
            tmp+=(a[j]-'0')*(b[i]-'0')*mul10;
            mul10*=10;
        }
        cout<<tmp<<'\n';
        for(int j=2;j>i;j--)
            tmp*=10;
        mul+=tmp;
    }
    cout<<mul<<'\n';
    return 0;
}
