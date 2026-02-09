#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long  b[n];
        unordered_map<long long,long long >m;
        bool flag = false;
        for(int i=0;i<n;i++){
            cin>>b[i];
             m[b[i]]++;
            
           // a[i]=pow(2,b[i]);
           if(m[b[i]]>1){
            flag = true;
           }
          
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        // sort(a,a+n);
        // int start =0;
        // int end = n-1;
        // bool flag =false;
        // long long  ssum=a[start], esum=a[end];
        // while(start<end){
           
        //     if(ssum==esum  && end-start==1){
        //          flag = true;
        //          break;
        //     }
        //     else if(ssum<esum){
        //         start++;
        //        ssum+=a[start];

        //     }
        //     else {
        //         end--;
        //         esum+=a[end];
        //     }

        // }
        // if(flag) cout<<"YES"<<endl;
        // else
        //  cout<<"NO"<<endl;
        
        
    }
}