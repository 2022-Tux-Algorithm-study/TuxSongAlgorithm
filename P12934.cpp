#include <iostream>
#include <math.h>
using namespace std;

long long solution(long long n) {
    
    long long answer=-1;
   
    double check=sqrt(n);
    
    if((check-(int)check)!=0)
        answer=-1;
    else
        answer=pow((check+1),2);
    
    return answer;
}

int main(){
	long long n;
	cin>>n;
	long long answer=solution(n);
	cout<<answer<<endl;
}

