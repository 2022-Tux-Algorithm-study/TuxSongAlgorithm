/*이 문제는 프로그래머스 K번째 수로, 프로그래머스의 경우 main부분을 작성하지 않지만, 
확인을 위해  직접 써서 결과를 확인하는데 사용했다.*/
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> tmp;
    for(int i=0;i<commands.size();i++){
         	tmp.clear();
		for(int j=commands[i][0]-1;j<=commands[i][1]-1;j++){
			tmp.push_back(array[j]);
		}
	 	sort(tmp.begin(),tmp.end());
            	answer.push_back(tmp[commands[i][2]-1]);
    }
    return answer;
}

int main(){

	vector<int> array={1,5,2,6,3,7,4};
	vector<vector<int>> commands={{2,5,3},{4,4,1},{1,7,3}};
	vector<int> answer=solution(array,commands);

	for(int i=0;i<answer.size();i++)
		cout<<answer[i]<<endl;
}
