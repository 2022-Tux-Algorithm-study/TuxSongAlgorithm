#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void hanoi(long N, int from, int tmp, int to) {
    if (N == 1) {
        cout << from << " " << to << '\n';
    }
    else {
        hanoi(N - 1, from, to, tmp);
        cout << from << " " << to << '\n';
        hanoi(N - 1, tmp, from, to);
    }
}
int main() {

    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    long long K;
    cin >> K;

    string count = to_string((pow(2, K)));

    int x = count.find('.');
    count = count.substr(0, x);
    count[count.length() - 1] -= 1;
    cout << count << "\n";

    if (K <= 20)
        hanoi(K, 1, 2, 3);
}
/*이 문제에서 중요한점.
첫번째, 하노이탑의 정리 (2의 n승 -1)의 개수가 하노이탑의 이동 수이다.
두번째, 2의 100일경우 long long으로도 못잡아낸다. string을 이용해야한다.
세번째, string의 함수인 find를 이용해 소수점의 인덱스를 찾고, 컴퓨터의 대다수가 문자열에서는 리틀인디언이기때문에
0번째가 가장 큰수를 담당한다. 즉 0부터 소수점 인덱스 x-1번째까지(x번째는 포함되지않는다) substr을 이용해 복사해버린다.
그리고 -1을 빼게된다면 아스키코드에서 -1값이 되면서 수 감소가 일어난다. 즉 결과값이 나오게된다는 점.
시간 초과는 ios::sync_with_stdio와 cin.tie,cout.tie를 이용해 c언어와 완전히 끊어 낸 후에 작성하게 되면 해결된다.*/
