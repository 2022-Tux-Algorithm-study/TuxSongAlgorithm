#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int N,M;
	cin>>N>>M;

	vector<int> packs;
	vector<int> pieces;
	
	for(int i=0;i<M;i++)
	{
		int pack,pie;
		cin>>pack>>pie;
		packs.push_back(pack);
		pieces.push_back(pie);
	}
	
	int cheapP=*min_element(packs.begin(),packs.end());
	int cheapPie=*min_element(pieces.begin(),pieces.end());
	int sum=0;
	
	if(cheapP>(cheapPie*6))
	{
		sum=N*cheapPie;
	}else{
		if(cheapP>(N%6)*cheapPie){
			sum=(N/6)*cheapP;
			sum+=(N%6)*cheapPie;
		}else{
			N/=6;
			sum=(N+1)*cheapP;
		}
	}
	cout<<sum<<endl;
}
