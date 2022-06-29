#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> a, pair<int, string> b) {
    return a.second < b.second;
}
int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string words[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

    int N, M;
    cin >> N >> M;

    map<int,string> sorts;

    for (int i = N; i <= M; i++) {
        if (!(i / 10))
            sorts.insert({ i, words[i] });
        else {
            string num = to_string(i);
            sorts.insert({ i, words[num[0]-'0'] + words[num[1]-'0']});
        }
    }
    
    //map의 요소를 vector로 옮겨 정렬
    vector <pair<int, string>> v(sorts.begin(), sorts.end());
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++) {
         if (!(i % 10)&&i!=0)
            cout << '\n';
        cout << v[i].first << " ";
       
    }
}
