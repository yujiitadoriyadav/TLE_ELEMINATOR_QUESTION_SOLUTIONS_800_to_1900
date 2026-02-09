#include<bits/stdc++.h>
using namespace  std;
bool check(int arr[] , int start ,int end,int toremove){
    bool final = true;
    while(start<=end){
        if(arr[start]!=arr[end]){
            if(arr[start]==toremove){
                start++;
            }
            else if(arr[end]==toremove){
                end--;
            }
            else{
                final = false;
                 break;
            }
        }
        else{
            start++;
            end--;
        }
    }
    return final;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int arr[n];
       
        for(int i=0;i<n;i++){
            cin>>arr[i];
          
        }
        int start=0,end=n-1;
        bool first=false,second=false;
         bool once = false;
        while(start<=end){
            if(arr[start]==arr[end]){
                start++;
                end--;
            }
            else{
                first = check(arr,start+1,end,arr[start]);// pahla delete kar diya
                second = check(arr,start,end-1,arr[end]); // akhri wala delete
                once = true;
                break;
            }
        }
        if(first || second || !once){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
       

    }
}

