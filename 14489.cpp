#include <iostream>
using namespace std;

int main(){
    
    long long A,B;
    long long C;
    
    cin>>A>>B>>C;
    
    long long sum=(A+B)>=C*2? (A+B)-C*2:A+B;
    cout<<sum<<'\n';
}
