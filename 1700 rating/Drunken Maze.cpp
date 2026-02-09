#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define pb push_back
#define all(x) x.begin(), x.end()
#define endl '\n' 
#define F first
#define S second
#define sz(x) (int)x.size()
const int mod=1e9+7;

struct state{
    int x,y,dir,cnt,dist;
};
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void solve(){
  int n,m; cin>>n>>m;
  vector<string>grid(n);
  for(int i=0;i<n;i++) cin>>grid[i];

  int sx,sy,tx,ty;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
     if(grid[i][j]=='S') sx=i,sy=j;
     if(grid[i][j]=='T') tx=i,ty=j; 
    }
  }
    // visited[x][y][dir][cnt]
  bool visit[n][m][4][4];
  memset(visit,0,sizeof(visit));

  queue<state>q;

  for(int dir=0;dir<4;dir++){
    int nx=sx+ dx[dir],ny =sy+dy[dir];
     if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
    if(grid[nx][ny]!='#'){
        visit[nx][ny][dir][1]=true;
        q.push({nx,ny,dir,1,1});  
    }
  }
  
  int ans=-1;
  while(!q.empty()){
     auto [x,y,dir,cnt,dist]=q.front();
     q.pop();
     if(x==tx && y==ty){
        ans=dist;
        break;
     }

     for(int ndir=0;ndir<4;ndir++){
        int nx=x+dx[ndir];
        int ny =y+dy[ndir];
         
        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
        if(grid[nx][ny]=='#') continue;

        int ncnt = (ndir==dir)?cnt+1:1;
        if(ncnt>3) continue;
        
        if(!visit[nx][ny][ndir][ncnt]){
            visit[nx][ny][ndir][ncnt] =true;
            q.push({nx,ny,ndir,ncnt,dist+1});
        }

     }
  }
 cout<<ans<<endl;
  
}

int32_t main() {  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t = 1;
    //cin >> t;
    
    while (t--) {
        solve();
    }
    return 0;
}

