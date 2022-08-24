#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n,m;
    
    cin>>n;
    
    long long finds[500001];
    for(int i=0;i<n;i++){
        cin>>finds[i];
    }
    sort(finds,finds+n);
    
    cin>>m;
    
    for(int j=0;j<m;j++){
        long long tmp;
        cin>>tmp;
        
        cout<<upper_bound(finds,finds+n,tmp)-lower_bound(finds,finds+n,tmp)<<" ";
        //upper_bound 란, key값을 처음으로 초과하는 숫자가 배열 몇번째에 처음 등장하는지
        //정렬을 하게 되면 인덱스대로 나오게된다.
        //lower_bound 란, 처음부터 끝까지 tmp이상의 숫자가 처음으로 나오는 위치의 인덱스 반환
        //-10 -10 2 3 3 6 7 10 10 10
        //10
        //즉, 10번이 나옴 (10을 초과하는 숫자가 나오는 위치가 없음으로)
        //tmp가 처음나오는 위치 7번 즉 10-7 -> 3이게된다.
    }

    return 0;
}
