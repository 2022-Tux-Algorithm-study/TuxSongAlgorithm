#include <iostream>
#include <list>
using namespace std;
int main(){

    
    int N;
    cin>>N;
    
    list<int> stu;
    
    for(int i=1;i<=N;i++){
        list<int>::iterator it=stu.begin();
        int k;
        cin>>k;
        
        for(int i=0;i<k;i++)
            it++;
            
        stu.insert(it,i);
    }
    
    for(auto its=stu.rbegin();its!=stu.rend();its++){
        cout<<*its<<" ";
    }
}
