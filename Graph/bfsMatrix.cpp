#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int>>gp;
vector<int>vis;
vector<int> bfs(int st){
    int n =gp.size();
    queue<int>q;
    q.push(st);
    vis[st]=1;
    vector<int>ans;
    while(!q.empty()){
        int u=q.front();
        ans.push_back(u);
        q.pop();
        //minor change as compare to the adj list 
        //In that case we had list for the adjacent of that 
        //front node
        //But here we need to traverse from 1 to n node so that 
        //we can find that which [u][i]==1 that simply tells us that 
        //this is neighbour of that part 
        for(int i=0;i<n;i++){
            if(gp[u][i]==1 && vis[i]==0){
                vis[i]=1;
                q.push(i);
            }
        }
    }
    return ans;
    

 }
int main(){
    int n;
    cin>>n;
    gp.resize(n, vector<int>(n,0));
    vis.resize(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>gp[i][j];
        }
    }
    int st;
    cin>>st;
    vector<int> ans = bfs(st);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    
   
    
}