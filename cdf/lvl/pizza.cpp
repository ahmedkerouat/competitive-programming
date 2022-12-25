#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    set<pair<int, int>> forbidden;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        forbidden.insert({ a, b });
    }

    int count = (1 << N);
    for (int i = 0; i < (1 << N); i++) {
        for (auto p : forbidden) {
            if ((i & (1 << (p.first - 1))) && (i & (1 << (p.second - 1)))) {
                count--;
                break;
            }
        }
    }
    cout << count << endl;

    return 0;
}