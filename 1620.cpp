#include <vector>
#include <algorithm>
#include <map>
#include <iostream>
using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N,k;
    cin>>N>>k;

    string *poket=new string[N];
    map<string,int> poketMon;
    for(int i=0;i<N;i++){
        cin>>poket[i];
        poketMon.insert(make_pair(poket[i],i+1));
    }

    for(int i=0;i<k;i++){
        string tmp;

        cin>>tmp;
        
        try{
		cout<<poket[stoi(tmp)-1]<<'\n';
	} catch(invalid_argument&){
	        cout<<poketMon[tmp]<<'\n';
	}
    }
    
}
