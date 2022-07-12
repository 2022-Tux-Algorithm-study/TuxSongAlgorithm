#include <iostream>
#include <string>
using namespace std;

int main(){

	string eigth[8]={"000","001","010","011","100","101","110","111"};
	string input;

	cin>>input;
	string output="";
	for(int i=0;i<input.length();i++){	
		int k=(int)input[i]-'0';
		output.append(eigth[k]);
	}

	
	int i=0;
	
	while(output[i]!='1'){
		if(i>=output.length()) break;
		i++;
	}

	output.erase(output.begin(),output.begin()+i);
	if(output.empty()) output.append("0");
	cout<<output<<endl;
}
