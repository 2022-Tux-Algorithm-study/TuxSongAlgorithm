#include <map>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector<string> names={"Re","Pt","Cc","Ea","Tb","Cm","Ex"};
    map<string,int> bees={{"Re",0},{"Pt",0},{"Cc",0},{"Ea",0},{"Tb",0},{"Cm",0},{"Ex",0}};
    
    int count=0;
    string bee;
    while(cin>>bee){
        bees[bee]++;
        count++;
    }
    cout<<fixed;
    cout.precision(2);
    
    
    for(int i=0;i<names.size();i++){
        double tmp=round((bees[names[i]]/(double)count)*100)/100;
        cout<<names[i]<<" "<<bees[names[i]]<<" "<<tmp<<'\n';   
    }
    
    cout<<"Total "<<count<<" 1.00"<<'\n';
    
}
