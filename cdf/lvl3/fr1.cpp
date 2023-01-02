#include <bits/stdc++.h>
using namespace std;

#define ll long long

int solve() {
    int nbrLivres;int nbJours;
    cin >> nbrLivres >> nbJours;
    int livres[nbrLivres];
    int livresPris[nbrLivres];
    for (int i = 0; i < nbJours; i++) {
        int daily;
        cin >> daily;
        for (int j = 0; j < daily; j++) {
            int index; int time;
            cin >> index >> time;
            if (livresPris[index] == 1 && livres[index] >= i + 1) {
                cout << "0 \n";
            }
            else {
                livres[index] = time + i;
                livresPris[index] = 1;
                cout << "1 \n";
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}