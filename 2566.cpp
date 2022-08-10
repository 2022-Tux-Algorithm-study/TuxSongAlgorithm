#include <iostream>
using namespace std;

int main()
{
    int nums[9][9];
    
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++)
            cin>>nums[i][j];
    }
    
    int maxX=0;
    int maxY=0;
    int max=nums[0][0];
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(max<nums[i][j])
            {
                max=nums[i][j];
                maxX=i;
                maxY=j;
            }
        }
    }
    cout<<max<<'\n'<<maxX+1<<" "<<maxY+1<<'\n';
    return 0;
}

