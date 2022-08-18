#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    bool isCheck[1000000];
    memset(isCheck,true,sizeof(bool)*1000000);
    
    for(int i=2;i<=1000000;i++){
        if(isCheck[i])
            for(int j=i*2;j<1000000;j+=i)
                isCheck[j]=false;
    }
    
    while(true){
        int n;
        cin>>n;
        
        if(n==0) break;
        
        int q=3;
        //8 -> 2 3 5 7이지만, 문제에 따르면, 4보다 큰 모든 짝수는
        //홀수로 나타낼수 있다로, 이를 따르기 위해서 소수 2가 아닌 3이 시작점이다.
        //또한, 홀수를 표현하기 위해 n - (홀수) = 홀수 이기 때문에, n-q를 이용해서 값을
        //쉽게 구할 수 있다.
        while(q<=n){
            if(isCheck[q]&&isCheck[n-q]){
                cout<<n<<" = "<<q<<" + "<<n-q<<'\n';
                break;    
            }
            q+=2;
        }
        if(q>n){
            cout<<"Goldbach's conjecture is wrong."<<'\n';
        }
    }
    
    return 0;
}
