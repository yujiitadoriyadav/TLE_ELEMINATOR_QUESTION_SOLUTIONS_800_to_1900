#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long x;
        vector<long long >pref;
        pref.push_back(0);
        long long sum=0,maxi=0;
        for(int i=0;i<n;i++){
          cin>>x;
          sum+=x;
          pref.push_back(sum);
        }

        for(int i=1;i<=n;i++){
            vector<long long>v;
            if(n%i==0){
                for(int j=i;j<=n;j+=i){
                    sum=pref[j]-pref[j-i];
                    v.push_back(sum);
                }
                sort(v.begin(),v.end());
                maxi = max(maxi,v[v.size()-1]-v[0]);
            }
        }
        cout<<maxi<<endl;
        
    }
}