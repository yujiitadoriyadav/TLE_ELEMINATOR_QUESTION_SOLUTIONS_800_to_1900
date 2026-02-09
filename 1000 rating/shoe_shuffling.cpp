#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;

    
      vector<long long>s(n),p(n);
      for(long long i=0;i<n;i++){
        cin>>s[i];
        
      }
       for(long long i=0;i<n;i++){
        p[i]=i+1;
      }
      long long l=0,r=0; 
      // range of same size shoes // 
      bool ans =true;
      while(r<n){
        while(r<n-1 && s[r]==s[r+1])
            r++;
        
        if(l==r) ans =false;

        else
         rotate(p.begin()+l,p.begin()+r ,p.begin() + r + 1);
        
         l =r+1;
         r++;
       

      }
     if(ans){
        for(auto&e:p){
            cout<<e<<" ";
        }
        cout<<endl;
     } 
     else cout<<-1<<endl;
    

    }
}
    // tle on 30 testcase
    //  unordered_map<long ,queue<long>>freq;
    //  vector<long>v(n),ans(n);
    //     for(long i=0;i<n;i++){
    //       cin>>v[i];
    //       freq[v[i]].push(i);
          
    //     }
    //     bool flag =true;
    //     for(long  i=0;i<n;i++){
    //         if(freq[v[i]].size()<2){
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if(!flag){
    //         cout<<-1<<endl;
    //         continue;
    //     }

    //     // ab same size walo ko shuffle kardo -- pehla wala akhir mein 
    //    for(auto e:freq){
    //     long  val = freq[e.first].front();
    //     freq[e.first].pop();
    //     freq[e.first].push(val);
    //    }
    //    for(long  i=0;i<n;i++){
    //     ans[i]=freq[v[i]].front();
    //     freq[v[i]].pop();

    //    }
    //    for(auto e:ans){
    //     cout<<(e+1)<<" ";
    //    }
    //    cout<<endl;
    //       p.begin() + l: This is the iterator pointing to the starting position of the range you want to rotate. If l is the index, then p.begin() + l points to the element at position l in the container p.

// p.begin() + r: This is the iterator pointing to the position that you want to rotate to the beginning of the range. After the rotation, the element at position r will be the first element of the subrange.

// p.begin() + r + 1: This is the iterator pointing just past the last element of the range you want to rotate. It signifies the end of the subrange to be rotated.
       