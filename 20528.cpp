#include <iostream>
#include <string>


#include <vector>
using namespace std;

int main(){

	int N;
	cin>>N;

	vector<string> inputs;

	for(int i=0;i<N;i++){
	    string tmp;
	    cin>>tmp;
	    inputs.push_back(tmp);
	}

	char fir=inputs[0][0];
	int i=1;
	for(;i<N;i++){	 
	    if(fir!=inputs[i][0])
		break;
	}

	if(i>=N) 
	    cout<<"1"<<'\n';
	else
	    cout<<"0"<<'\n';
}
