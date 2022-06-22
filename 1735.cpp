#include <iostream>
using namespace std;

int main(){
	
	int A1,B1,A2,B2;

	cin>>A1>>B1>>A2>>B2;

	int numer,denomi;

	denomi=B1*B2;
	int Tdenomi=denomi;
	numer=(A1*B2)+(A2*B1);
	int Tnumer=numer;
	
	while(Tnumer!=1){

		int tmp=Tdenomi%Tnumer;
		Tdenomi=Tnumer;
		Tnumer=tmp;
		if(Tnumer==0) break;
	}
	if(Tnumer==1)
		cout<<numer<<" "<<denomi<<'\n';
	else
		cout<<numer/Tdenomi<<" "<<denomi/Tdenomi<<'\n';

}
