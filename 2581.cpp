#include <iostream>
using namespace std;

int main(){

	int M,N;
	int sum=0,least=0;

	cin>>M>>N;
	bool check=false;
	
	for(int i=M;i<=N;i++){
		for(int j=2; j<i; j++){
			if(!(i%j))
			{
				check=true;
				break;
			}
		}
		if(!check&&i!=1){
			if(sum==0) least=i;
			sum+=i;
		}
		check=false;
	}
	
	if(sum==0)
		cout<<-1<<endl;
	else
		cout<<sum<<endl<<least<<endl;

}
