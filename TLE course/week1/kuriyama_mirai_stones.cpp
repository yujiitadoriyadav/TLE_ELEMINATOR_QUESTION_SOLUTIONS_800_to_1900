#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>v(n),s(n),pref1(n),pref2(n);
    for(int i=0;i<n;i++){
         cin>>v[i]; 
         s[i]=v[i];
    }

    sort(s.begin(),s.end());
    pref1[0]=v[0];
    pref2[0]=s[0];
    for(int i=1;i<n;i++){
        pref1[i]=pref1[i-1]+v[i];
        pref2[i]=pref2[i-1]+s[i];
    }
    
    int m ;
    cin>>m;
    while(m--){
        int type,l,r;
        cin>>type>>l>>r;
        long long ans;
        if(type==1){
          ans =pref1[r-1];
          if(l>1) ans-=pref1[l-2];
        }
        else{
            ans =pref2[r-1];
            if(l>1) ans-=pref2[l-2];
        }
        cout<<ans<<endl;

    }
}