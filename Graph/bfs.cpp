#include<iostream>
using namespace std;
vector<vector<int>>gp;
vector<int>vis;
vector<int>bfs(int st){
    queue<int>q;
    q.push(st);
    vis[st]=1;
    vector<int>res;
    while(!q.empty()){
        int fr=q.front();
        res.push_back(fr);
        q.pop();
        for(auto i : gp){
            if(vis[i]==0) q.push(i);
            vis[i]=1;
        }
    }
    return res;
}
int main(){
    int n ;
    int m ;
   
    bfs(st)
}