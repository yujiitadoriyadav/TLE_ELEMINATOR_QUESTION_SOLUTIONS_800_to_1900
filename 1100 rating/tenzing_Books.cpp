#include<bits/stdc++.h>
using namespace std;
int main(){
    int  t;
    cin>>t;
    while(t--){
    int n,x,a[100000];
    cin>>n>>x;
    int curr=0;
    // pahli baat 0 se 1 ban sakta hai lekin 1 se 0 nah 
    // (x|a[j])!=x use kar  raha hun ki x mein kahi 0 ho to wo 
    // 1 mein na badal jaye aur  >>>> hame bade ke saath | nahi lena hai bada ho to break kar do 
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++) cin>>a[j];
        for(int j=0;j<n;j++){
            if((x|a[j])!=x)  break;
            curr|=a[j];
        }
    }

    if(curr==x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
      
    }
}