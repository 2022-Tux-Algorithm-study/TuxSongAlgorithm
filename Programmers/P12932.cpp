#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    string input=to_string(n);
    
    for(int i=input.length()-1;i>=0;i--){
        answer.push_back(input[i]-'0');
    }
    return answer;
}
