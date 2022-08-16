#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool check[300000]; //M+1 만큼 생성
    memset(check,true,sizeof(bool)*(300000));
    for(int i=2;i<=(123456*2)+1; i++){
	if(check[i])
	    for(int j=i*2;j<(123456*2)+1;j+=i)
		check[j]=false;
    }
    check[1]=false;
    while(true){
        int n;
        cin>>n;
        if(n==0) break;
		int count=0;
		for(int i=n+1;i<=2*n;i++){
			if(check[i])
			   count++;
		}
		cout<<count<<'\n';
    }

    return 0;
}
