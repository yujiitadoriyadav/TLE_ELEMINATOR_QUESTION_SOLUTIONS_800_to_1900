#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini =INT_MAX;
        vector<long long >min2;
        while(n--){
            int m;
            cin>>m;
            vector<int>v(m);
            for(auto &it:v) cin>>it;

            int minele = *min_element(v.begin(),v.end());
           mini = min(mini,minele);
           v.erase(find(v.begin(),v.end() ,minele));
           min2.push_back(*min_element(v.begin(),v.end()));


        }
        long long ans =mini;
        int mini2 = *min_element(min2.begin(), min2.end());
       for (long long val : min2) {
            ans += val;  
        }
        cout<<ans-mini2<<endl;
    }
}