#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> grid(10, vector<char>(10));
        int sum =0;
         int score[10][10]={
     {1,1,1,1,1,1,1,1,1,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,5,5,4,3,2,1},
	{1,2,3,4,4,4,4,3,2,1},
	{1,2,3,3,3,3,3,3,2,1},
	{1,2,2,2,2,2,2,2,2,1},
	{1,1,1,1,1,1,1,1,1,1}
         };
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
                if(grid[i][j]=='X'){
                       sum+=score[i][j];
                }
            }
        }

     
        cout << sum << endl;
    }
    return 0;
}
