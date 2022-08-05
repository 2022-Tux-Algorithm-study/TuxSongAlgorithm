#include <queue>
#include <iostream>
using namespace std;
int main()
{
    
    int N,M;
    cin>>N;
    
    queue<int> nums;
    for (int i=0;i<N;i++) {
        nums.push(i+1);
    }

  for(int i=0;nums.size()!=1;i++){

    nums.pop();
    nums.push(nums.front());
    nums.pop();
  }

  cout<<nums.front()<<'\n';

   
  return 0;
}
