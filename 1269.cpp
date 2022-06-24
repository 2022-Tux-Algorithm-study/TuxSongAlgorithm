#include <iostream>
#include <set>
using namespace std;

int main(){
	int A,B;

	cin>>A>>B;
	set<int> As,Bs;

	for(int i=0;i<A;i++){
		int tmp;
		cin>>tmp;
		As.insert(tmp);
	}
	for(int i=0;i<B;i++){
		int tmp;
		cin>>tmp;
		Bs.insert(tmp);
	}

	int check=0;
	
	for(auto Ai=As.begin(); Ai!=As.end(); Ai++){
                if(Bs.find(*Ai)==Bs.end())
			check++;
        }
	for(auto Bi=Bs.begin(); Bi!=Bs.end(); Bi++){
                if(As.find(*Bi)==As.end())
			check++;
        }

	cout<<check<<endl;
}
