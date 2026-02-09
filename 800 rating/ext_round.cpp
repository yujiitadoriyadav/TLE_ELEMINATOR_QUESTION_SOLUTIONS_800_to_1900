#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x<=10){
            cout<<x<<endl;
        }

        else if(x<=100 && x>10){
              cout<<9+x/10<<endl;
        }
        else if(x<=1000 &&x>100){
            cout<<18+x/100<<endl;
        }
    else if(x<=10000 && x>1000)
    cout<<27+x/1000<<endl;

    else if(x<=100000 && x>10000){
        cout<<36 +x/10000<<endl;
    }
    else if(x<=1000000 && x>100000){
        cout<<45+x/100000<<endl;
    }
    }
}