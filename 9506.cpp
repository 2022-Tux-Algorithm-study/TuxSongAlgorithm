#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    while(true){
        int N;
        cin>>N;
        
        if(N==-1) break;
        vector<int> divisors;
        int sum=0;
        for(int i=1;i<N;i++){
            if(N%i==0){
                sum+=i;
                divisors.push_back(i);
            }
        }
        
        if(sum!=N)
        {
            cout<<N<<" is NOT perfect."<<'\n';
        }else{
            cout<<N<<" = ";
            int i=0;
            for(;i<divisors.size()-1;i++){
                cout<<divisors[i]<<" + ";
            }
            cout<<divisors[i]<<'\n';
        }
    }
}
