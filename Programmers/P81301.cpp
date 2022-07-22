/*regex_replace을 사용한다면, 해당 패턴을 찾아 변경할 수 있다.
find의 경우 index를 반환하여 replace하는 방법보다는 훨씬더 수월하게 
진행 할 수 있으나, 패턴에 대해 공부해야한다.*/

#include <iostream>
#include <string>
#include <regex>
using namespace std;

int solution(string s) {
    int answer=0;
    string eng[]={"(zero)","(one)","(two)","(three)","(four)","(five)","(six)","(seven)","(eight)","(nine)"};
    for(int i=0;i<10;i++){
        s=regex_replace(s,regex(eng[i]),to_string(i));
    }

    answer=stoi(s);
    return answer;
}
