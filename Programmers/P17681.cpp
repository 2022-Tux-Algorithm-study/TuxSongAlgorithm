//Programmers [1차] 비밀지도
#include <string>
#include <vector>
#include <bitset>
#include <algorithm>
using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0;i<n;i++){
        bitset<16> a1(arr1[i]);
        bitset<16> a2(arr2[i]);
        
        string tmp;
        for(int j=0;j<n;j++){
           tmp+=(a1[j]!=0? "#":a2[j]!=0? "#":" ");
        }
        reverse(tmp.begin(),tmp.end());
        answer.push_back(tmp);
    }
    return answer;
}
