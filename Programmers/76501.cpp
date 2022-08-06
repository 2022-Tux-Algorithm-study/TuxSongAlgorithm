//음양 더하기 문제로, 음수일때 빼기를 양수일때 덧셈을 해줌.
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer =0;
    
    for(int i=0;i<signs.size();i++){
        if(signs[i]){
            answer+=absolutes[i];
        }else{
            answer-=absolutes[i];
        }
    }
    return answer;
}
