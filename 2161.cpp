#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int N;
    cin>>N;
    
    queue<int> cards;
    
    for(int i=0;i<N;i++){
        cards.push(i+1);
    }
    
    for(int i=0;i<N;i++){
        int trash=cards.front();
        cards.pop();
        cards.push(cards.front());
        cards.pop();
        cout<<trash<<" ";
    }
    
    return 0;
}
