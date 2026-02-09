#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<long long ,long long >arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            arr[i].second = i;
        }
        sort(arr,arr+n);
        long long time=0;
        int ans[n];
        int index =1;
        for(int i=n-1;i>=0;i=i-2){
            long long temp = 2*index;
            time +=arr[i].first*temp;
            ans[arr[i].second]=index;

            index++;
        }
        index=-1;
        for(int i=n-2;i>=0;i-=2){
            int temp = 2*abs(index);
            time +=arr[i].first*temp;
            ans[arr[i].second]=index;
            index--;
        }
        cout<<time<<endl;
        cout<<0<<" ";
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}