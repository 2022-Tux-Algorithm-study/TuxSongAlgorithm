#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    int N;
    cin>>N;

    string tmp;
    getline(cin,tmp);
    for(int i=0;i<N;i++){

	string name;
	getline(cin,name);

	string tmp=name;
	transform(name.begin(),name.end(),name.begin(),::tolower);
	int g=0,b=0;

	int g_find=name.find('g');
	while(g_find!=string::npos){
	    g_find=name.find('g',g_find+1);
	    g++;    
	}

	int b_find=name.find('b');
	while(b_find!=string::npos){
	    b_find=name.find('b',b_find+1);
	    b++;
	}

	cout<<tmp<<" is ";
	if(b==g)
	    cout<<"NEUTRAL"<<'\n';
	else if(b>g)
	    cout<<"A BADDY"<<'\n';
	else
	    cout<<"GOOD"<<"\n";
    }
}
