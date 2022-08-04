#include <iostream>
using namespace std;

int main(){
    
    int K,N,M;
    
    cin>>K>>N>>M;
    
    int n=(K*N-M)<0? 0:K*N-M;
    cout<<n<<'\n';
}
