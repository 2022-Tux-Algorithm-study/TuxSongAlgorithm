#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	
	string n;
	cin>>n;

	vector<char> str;

	for(int i=0;i<n.length();i++)
		str.push_back(n[i]);

	sort(str.begin(),str.end());
	
	string strline="";
	for(int i=str.size()-1;i>=0;i--){
		strline+=str[i];
	}	
	cout<<strline<<endl;
}

/* 실제 제출 코드
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {

    vector<char> str;

    for(int i=0;i<s.length();i++)
            str.push_back(s[i]);

    sort(str.begin(),str.end());

    string strline="";
    
    for(int i=str.size()-1;i>=0;i--){
               strline+=str[i];
    }
    return strline;
}
*/
