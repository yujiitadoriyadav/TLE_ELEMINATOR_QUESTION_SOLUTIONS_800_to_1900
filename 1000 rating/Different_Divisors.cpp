// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     int x;
//     cin>>x;
//     vector<int>p;
//     // for first no.
//     for(int i=x+1; ;i++){
//         bool flag = true;
//         for(int j=2;j*j<=i;j++){
//             if(i%j==0){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag) p.push_back(i);
//         break;
//     }

//     // for second 

//     for(int i = p[0]+x; ;i++){
//          bool flag = true;
//         for(int j=2;j*j<=i;j++){
//             if(i%j==0){
//                 flag = false;
//                 break;
//             }
//         }
//         if(flag) p.push_back(i);
//         break;
//     }

//     cout<<min(1ll * p[0] * p[1], 1ll * p[0] * p[0] * p[0])<<endl;
// }
// }
#include <iostream>
#include <vector>
 
using namespace std;
 
void solve()
{
    int x;
    cin >> x;
    vector<int> p;
    for (int i = x + 1; ; i++)
    {
        int t = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                t = 0;
                break;
            }
        }
        if (t)
        {
            p.push_back(i);
            break;
        }
    }
    for (int i = p.back() + x; ; i++)
    {
        int t = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                t = 0;
                break;
            }
        }
        if (t)
        {
            p.push_back(i);
            break;
        }
    }
    cout << min(1ll * p[0] * p[1], 1ll * p[0] * p[0] * p[0]) << "\n";
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}