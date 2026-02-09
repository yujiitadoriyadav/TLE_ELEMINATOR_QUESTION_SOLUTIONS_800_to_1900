#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()

const int mod = 1000000007;   

/* -------------------- SIEVE -------------------- */
const int N = 1000000;
vector<int> primes;
bool isPrime[N+1];

void sieve(){
    fill(isPrime, isPrime + N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i * i <= N; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= N; j += i)
                isPrime[j] = false;
        }
    }

    for(int i = 2; i <= N; i++)
        if(isPrime[i]) primes.pb(i);
}

/* -------------------- MOD POWER -------------------- */
int modpow(int a, int b){
    int res = 1;
    while(b){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

/* -------------------- MOD INVERSE -------------------- */
int modinv(int a){
    return modpow(a, mod - 2); // Fermat
}

/* -------------------- nCr (COMBINATION) -------------------- */
const int MAXF = 1000000;
int fact[MAXF + 1], invfact[MAXF + 1];

void precompute_fact(){
    fact[0] = 1;
    for(int i = 1; i <= MAXF; i++)
        fact[i] = (fact[i-1] * i) % mod;

    invfact[MAXF] = modinv(fact[MAXF]);
    for(int i = MAXF - 1; i >= 0; i--)
        invfact[i] = (invfact[i+1] * (i+1)) % mod;
}

int nCr(int n, int r){
    if(r < 0 || r > n) return 0;
    return (((fact[n] * invfact[r]) % mod) * invfact[n-r]) % mod;
}

/* -------------------- DFS -------------------- */
vector<vector<int>> adj;
vector<bool> vis;

void dfs(int u){
    vis[u] = true;
    for(int v : adj[u]){
        if(!vis[v]){
            dfs(v);
        }
    }
}

int lcm(int a,int b){
    return a/__gcd(a,b)*b;
}
bool check(char a , char b){
    return (a==b || a=='?' || b=='?');
}
/* -------------------- SOLVE -------------------- */
void solve(){
    string s; 
    cin >> s;
    int n = s.size();

    int ans = 0;
   for(int d=n/2;d>=1;d--){
     int cnt =0;
     for(int i=0;i+d<n;i++){
        if(check(s[i],s[i+d])) cnt++;
        else cnt=0;

        if(cnt==d){
            ans = 2*d;
            break;
        }

     }
     
        if(ans) break;
   }
    cout<<ans<<endl;
}


/* -------------------- MAIN -------------------- */
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   /// sieve();
   // precompute_fact();

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
