#include <cstring>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    bool *check=new bool[n+1];    
    memset(check,true,sizeof(bool)*n+1);
    int cnt=0;
    for(int i=2;i<=n;i++){
        if(check[i])
            for(int j=i*2;j<=n;j+=i){
                check[j]=false;
            }
    }
    
    for(int i=2;i<=n;i++)
        if(check[i])
            cnt++;

    return cnt;
}
