#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    vector<int> level;
    for(int i=0;i<4;i++){
        int N;
        cin>>N;
        level.push_back(N);
    }
    
    sort(level.begin(),level.end());
    
    int a=level[0]+level[3];
    int b=level[1]+level[2];
    
    cout<<abs(a-b)<<"\n";
}
