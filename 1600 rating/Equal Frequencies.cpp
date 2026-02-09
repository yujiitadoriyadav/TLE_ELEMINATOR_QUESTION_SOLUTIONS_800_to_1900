#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
#define DEV_OP

int mp[26] , p[26],a[200005];

void solve() {
    int n; 
    cin >> n; 
    string s; cin>>s;      
    memset(mp,0,sizeof(mp));
    for(char c:s) mp[c-'a']++;
    for(int i=0;i<26;i++) p[i]=i;
    
    sort(p,p+26,[&](int x,int y){
           return mp[x]>mp[y];
        });
     
    int best_ans=0;
    int best_group =1;
    
    for(int g=1;g<=26;g++){
        if(n%g!=0) continue;
        int cnt = n/g;

        int sum=0;
        for(int i=0;i<g;i++){
            sum+=min(cnt,mp[p[i]]);
        }
        if(sum>best_ans){
            best_ans = sum;
            best_group=g;
        }

        
    }
    int cnt = n/best_group;

    vector<char>extra;
    for(int i=0;i<best_group;i++){
        if(mp[p[i]]>=cnt){
            mp[p[i]]=cnt;

        }
        else{
            for(int j=mp[p[i]];j<cnt;j++){
                extra.push_back(p[i]+'a');
            }
            mp[p[i]]=cnt;
        }
    }
    for(int i=best_group;i<26;i++){
        mp[p[i]]=0;
    }

    int extra_index =0;
    for(int i=0;i<n;i++){
        int u = s[i]-'a';
        if(mp[u]>0) mp[u]--;
        else{
            s[i]=extra[extra_index++];
        }
    }

    cout<<n-best_ans<<endl;
    cout<<s<<endl;
    
    
 

}

int32_t main() {  
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t=1;
    cin >> t;
    while (t--) solve();
    return 0;
}
