#include<bits/stdc++.h>
using namespace std;
int bit(int n){
    int count =0;
    while(n!=1){
        count++;
        n=n/2;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int max_cost_bit=bit(n-1);
        int max_cost =pow(2,max_cost_bit);

        for(int i=n-1;i>=max_cost;i--) cout<<i<<" ";
        for(int i=0;i<max_cost;i++)  cout<<i<<" ";
        cout<<endl;
    }
}