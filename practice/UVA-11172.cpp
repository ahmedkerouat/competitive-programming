#include <bits/stdc++.h>
using namespace std;


int solve() {
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a == b)
        printf("=\n");
    else if(a < b)
        printf("<\n");
    else
        printf(">\n");

    return 0;
}


int main() {
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t;
    scanf("%d",&t);
    while (t--) {
        solve();
    }
    return 0;
}