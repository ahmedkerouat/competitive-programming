#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define INF 1000000000
#define MOD 1000000007

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);
    int t;
    int counter = 0;
    cin >> t;
    while (t--) {
        counter++;
        int n;
        cin >> n;
        int a = 0, b = 0;
        int tmp = -1;
        int ans = 0, sum = 0;
        for(int i = 0; i < n-1; i++){
        	int x;
        	cin >> x;
            sum+= x;
            if(sum < 0){
                sum = 0;
                tmp = i;
            }
            if(sum > ans){
                a = tmp;
                b = i;
                ans = sum;
            }
            if(sum == ans && (i - tmp > b - a)){
                a = tmp;
                b = i;
            }
        }
        if(ans)
        cout << "The nicest part of route " << counter << " is between stops " << a+2 << " and " << b+2<< endl;
        else
        cout << "Route "<< counter <<" has no nice parts" << endl;
    }
    return 0;
}