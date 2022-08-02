#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin>>N;
    string n;
    vector<string> inputs;
    getline(cin,n);
    for(int i=0;i<N;i++){
        inputs.clear();
        vector<string>().swap(inputs);
        
        getline(cin,n);
        
        int cur_position=0;
        int position;
        while ((position = n.find(" ", cur_position)) != string::npos) {
            int len = position - cur_position;
            inputs.push_back(n.substr(cur_position, len));
            cur_position = position + 1;
        }
        inputs.push_back(n.substr(cur_position));
        
        cout<<"Case #"<<i+1<<": ";
        
        for(int j=inputs.size()-1;j>=0;j--)
            cout<<inputs[j]<<" ";
        cout<<"\n";
    }
    return 0;
}
