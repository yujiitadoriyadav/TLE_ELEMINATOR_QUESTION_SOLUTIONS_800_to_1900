#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        int sum=0;
        int neg=0,pos=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]<0){
                neg++;
            }
            else{
                pos++;
            }
        }

        int ans=0;
      
         if(sum<0){
            ans+=(-sum+1)/2;
            neg-=ans;
            pos+=ans;

        }
       if(neg%2==1){
        ans+=1;
       }

       
        cout<<ans<<endl;
         
    }
}