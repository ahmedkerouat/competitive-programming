#include <bits/stdc++.h>
using namespace std;

int main() {

    int N, M, Y;
    cin >> N >> M;
    set<pair<int, int>> docs;
    vector <string> v;

    for (int i = 0; i < M; i++) {
        int a, b;
        string title;

        cin >> a >> b;
        docs.insert({ a, b });

        cin.ignore();
        getline(cin, title);
        v.push_back(title);
    }
    cin >> Y;
    int k = 0;
    for (auto p : docs) {
        if (p.second == Y) {
            cout << v[k] << "\n";
        }
        k++;
    }
    return 0;
}