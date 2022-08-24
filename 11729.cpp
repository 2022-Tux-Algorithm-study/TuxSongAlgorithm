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
