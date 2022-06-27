#include <iostream>
#include <string>
using namespace std;

int main(){
	long long N;
	
	cin>>N;
	long long fac=1;
	for(long long i=1;i<=N;i++){
		fac*=i;
		while(!(fac%10))
			fac/=10; //factorial 값의 맨 끝 0은 바로바로 제거.
		fac=fac%(long long)1e12;
	}
	
	printf("%05lld",fac%100000);
}
