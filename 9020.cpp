#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool isCheck[100001];
    memset(isCheck,true,sizeof(bool)*100001);
    for(int i=2;i<=100001;i++){
        if(isCheck[i]){
            for(int j=i*2;j<10001;j+=i){
                isCheck[j]=false;
            }
        }
    }
    int n;
    cin>>n; //테스트 케이스
    for(int i=0;i<n;i++){
        
        int k;
        cin>>k; //입력된 짝수
        
        int p=k/2,q=k/2; 
        //입력된 짝수를 절반으로 나눴을때 가장 차이가 적은 덧셈의 큰수가된다.
        //그 수가 소수가 아닐때 한칸씩 이동하여 차이가 작은 덧셈을 찾는게 
        //골드바흐의 추측이다.
        while(true){
            if(isCheck[p]&&isCheck[q]){
                cout<<p<<' '<<q<<'\n';
                break;
            }
            p--; 
            q++;
        }
    }
    return 0;
}
