 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n; cin>>n;
    vector<int>a(n),b(n);
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++) {
        cin>>a[i];
       
    }
   
    for(int i=0;i<n;i++) {
       int x; cin>>x;
       mp[x]=i;
    }
   int c=0;
   int maxi =-1;
   for(int i=0;i<n;i++){
    int idx = mp[a[i]];
    if(idx<maxi){
        c++;
    }
    maxi = max(maxi,idx);
   }
    cout<<c<<endl;


 }