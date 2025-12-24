#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;

using pii = pair<int,int>;
using pll = pair<ll,ll>;
using psi = pair<string,int>;
using pis = pair<int,string>;

using vi  = vector<int>;
using vll = vector<ll>;
using vb  = vector<bool>;
using vs  = vector<string>;

using vpii = vector<pii>;
using vpll = vector<pll>;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define ff first
#define ss second

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n'
#else
    #define debug(x)
#endif

ll gcd(ll a, ll b){
    while(b){
        a %= b;
        swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}

ll mod_pow(ll a, ll b){
    ll res = 1;
    a %= MOD;
    while(b){
        if(b & 1) res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

ll mod_inv(ll a){
    return mod_pow(a, MOD - 2);
}

bool chmax(ll &a, ll b){
    if(b > a){ a = b; return true; }
    return false;
}

bool chmin(ll &a, ll b){
    if(b < a){ a = b; return true; }
    return false;
}

void read_vec(vi &v, int n){
    v.resize(n);
    for(int i = 0; i < n; i++) cin >> v[i];
}

void read_vec(vll &v, int n){
    v.resize(n);
    for(int i = 0; i < n; i++) cin >> v[i];
}

void solve(){
}

int main(){
    fastio();
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}


