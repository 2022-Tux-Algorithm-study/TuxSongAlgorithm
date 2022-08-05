#include <queue>
#include <iostream>
using namespace std;
int main()
{
    
    int N,M;
    cin>>N>>M;
    
    queue<int> nums;
    for (int i=0;i<N;i++) {
        nums.push(i+1);
    }

    cout<<"<";

  for(int j=1;nums.size()!=1;j++){
      if(j%M==0){
        cout<<nums.front()<<", ";
        nums.pop();
      }else{
        nums.push(nums.front());
        nums.pop();
      }
  }
    cout<<nums.front()<<">";
    return 0;
}
