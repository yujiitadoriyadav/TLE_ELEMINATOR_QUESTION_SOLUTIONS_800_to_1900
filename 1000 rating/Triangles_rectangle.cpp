#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long w,h;
        cin>>w>>h;

        int k1;
        cin>>k1;
        vector<long>x1(k1);
        for(int i=0;i<k1;i++){
            cin>>x1[i];
        }
        int k2;
        cin>>k2;
         vector<long>x2(k2);
        for(int i=0;i<k2;i++){
            cin>>x2[i];
        }
        int k3;
        cin>>k3;
         vector<long>y1(k3);
        for(int i=0;i<k3;i++){
            cin>>y1[i];
        }
        int k4;
        cin>>k4;
         vector<long>y2(k4);
        for(int i=0;i<k4;i++){
            cin>>y2[i];
        }
         long long diff1=x1[k1-1]-x1[0];
         long long diff2=x2[k2-1]-x2[0];
         long long diff3=y1[k3-1]-y1[0];
         long long diff4=y2[k4-1]-y2[0];


        


       long long maxi = 0;
        maxi = max(maxi, diff1 * h);
        maxi = max(maxi, diff2 * h);
        maxi = max(maxi, diff3 * w);
        maxi = max(maxi, diff4 * w);
       cout<<maxi<<endl;
    }
}