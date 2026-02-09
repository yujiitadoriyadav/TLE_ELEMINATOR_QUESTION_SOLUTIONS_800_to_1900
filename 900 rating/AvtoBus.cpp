#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long n;
       cin>>n;
    if(n%2!=0 || n<4){
        cout<<-1<<endl;
        continue;
    }
    long long min_buses = n / 6;
        if (n % 6 != 0) {
            min_buses++;
        }
     long long max =n/4;
        cout << min_buses << " " << max << endl;
    
    

    }
}