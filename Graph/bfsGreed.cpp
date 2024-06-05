#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<vector<int>>greed;
vector<vector<int>>vis;
vector<vector<int>>dir{{-1,0} , {0,1} , {1,0},{ 0,-1} };
vector<vector<int>>bfs(int x, int y){
    queue<pair<int, int>>q;
    q.push({x,y}); //yaha pe pair jo hai usko {} is tarah se likha jata hai
    vis[x][y]=1;
    while(!q.empty()){
        pair<int, int> p=q.front();
        int xn=p.first();
        int yn=q.second();
        //kidhar jana hai bhai wo bhi bata do 
        //ye bolta hai tere pass xn and yn hai hi isse tu char direction 
        //me ja sakta hai ab waha se decide kar usme add kar le wo to tere
        //ko pata chal jayega 
        for(auto i : dir){
            int x1=xn+i[0];
            int y1=yn+i[1];
            if(x1>=0 && x1<greed.size() && y1>=0 && y1<greed.size() && vis[x1][y1]==0){
                vis[x1][y1]=1;
                q.push({x1,y1});
                
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    greed.resize(n, vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>greed[i][j];
        }
    }
}