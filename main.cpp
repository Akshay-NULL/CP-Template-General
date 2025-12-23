#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define endl '\n'
#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define ROF(i,a,b) for(int i = (a); i >= (b); --i)

const int INF = 1e9+7;
const ll LINF = 1e18;
const int MOD = 1e9+7;
const ld PI = acos(-1.0);


#ifdef LOCAL
    #define debug(x) cerr << #x <<" = "; _print(x); cerr << endl;
#else
    #define debug(x)
#endif

void _print(int x){cerr << x;}
void _print(ll x){cerr << x;}
void _print(ld x){cerr << x;}
void _print(string x){cerr << x;}
void _print(char x){cerr << x;}
template<typename T, typename V> void _print(pair<T,V> p){cerr<<"{";_print(p.ff);cerr<<",";_print(p.ss);cerr<<"}";}
template<typename T> void _print(vector<T> v){cerr<<"[";for(auto i:v){_print(i);cerr<<" ";}cerr<<"]";}
template<typename T> void _print(set<T> s){cerr<<"[";for(auto i:s){_print(i);cerr<<" ";}cerr<<"]";}
template<typename T, typename V> void _print(map<T,V> m){cerr<<"[";for(auto i:m){_print(i);cerr<<" ";}cerr<<"]";}

ll mod_mul(ll a, ll b, ll m = MOD){ return (a*b)%m; }
ll mod_add(ll a, ll b, ll m = MOD){ return (a+b)%m; }
ll mod_sub(ll a, ll b, ll m = MOD){ return ((a-b)%m + m) % m; }

void solve(){
   //ans here
}

int main(){
    fastio();
    int t = 1;
    // cin >> t; // uncomment if multiple test cases
    while(t--){
    solve();
    }
    return 0;
}
