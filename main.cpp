#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using ull = unsigned long long;
using ld  = long double;
//Pairs
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using psi = pair<string,int>;
using pis = pair<int,string>;
//Vectors
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
#define ppb pop_back
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define ROF(i,a,b) for(int i = (a); i >= (b); --i)

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#ifdef LOCAL
    #define debug(x) cerr << #x << " = " << x << '\n'
#else
    #define debug(x)
#endif

// Helper functions for convenience
ll mod_mul(ll a, ll b, ll m = MOD){ return (a*b)%m; }
ll mod_add(ll a, ll b, ll m = MOD){ return (a+b)%m; }
ll mod_sub(ll a, ll b, ll m = MOD){ return ((a-b)%m + m) % m; }

void _print(int x){cerr << x;}
void _print(ll x){cerr << x;}
void _print(ld x){cerr << x;}
void _print(string x){cerr << x;}
void _print(char x){cerr << x;}

ll gcd(ll a, ll b){while(b){a %= b;swap(a, b);}return a;}
ll lcm(ll a, ll b){return (a / gcd(a, b)) * b;}
ll mod_pow(ll a, ll b){ll res = 1;a %= MOD;while(b){if(b & 1) res = (res * a) % MOD;a = (a * a) % MOD;b >>= 1;}return res;}
ll mod_inv(ll a){return mod_pow(a, MOD - 2);}

bool chmax(ll &a, ll b){if(b > a){a = b; return true;}return false;}
bool chmin(ll &a, ll b){if(b < a){a = b; return true;}return false;}
void read_vec(vi &v, int n){v.resize(n);for(int i = 0; i < n; i++) cin >> v[i];}


void solve(){
    //Actual Solution here
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





