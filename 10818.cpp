#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int N;
    cin>>N;
    
    long long max= -1000000;
    long long min= 1000000;
    
    for(int i=0;i<N;i++){
        long long tmp;
        
        cin>>tmp;
        if(max<tmp){
            max=tmp;
        }
        
        if(min>tmp){
            min=tmp;
        }
        
    }

    cout<<min<<" "<<max<<'\n';
    return 0;
}
