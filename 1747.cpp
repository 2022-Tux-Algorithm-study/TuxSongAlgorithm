#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    bool isCheck[1004000];
    memset(isCheck,true,sizeof(bool)*1004000);

    for(long long i=2;i<=1004000;i++){
        if(isCheck[i])
            for(long long j=i*2;j<=1004000;j+=i)
                isCheck[j]=false;
    }
    
    int n;
    cin>>n;
    isCheck[1]=false;
    for(int i=n;i<=1004000;i++){
        
        if(isCheck[i]){
            string tmp = to_string(i);
            int size=tmp.length()-1;
            int len_count=0;
            for(int j=0;j<=size/2;j++){
                if(tmp[j]==tmp[size-j]){
                    len_count++;
                }
            }
            
            if((size/2)==len_count-1)
            {
                cout<<i<<'\n';
                break;
            }
        }
    }
}
