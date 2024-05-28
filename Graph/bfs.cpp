#include <iostream>
#include <vector>
#include <queue>

using namespace std;
//Global declaration
vector<vector<int>> gp;
vector<int> vis;

vector<int> bfs(int st) {
    queue<int> q;
    q.push(st);
    vis[st] = 1;
    vector<int> res;

    while (!q.empty()) {
        int fr = q.front();
        q.pop();
        res.push_back(fr);

        for (auto i : gp[fr]) {
            //Dont forget to check before inserting into queue
            if (vis[i] == 0) {
                q.push(i);
                vis[i] = 1; 
            }
        }
    }

    return res;
}

int main() {
    int n, m;
    cin >> n >> m;
    //Resizing according to the number of nodes 
    //for each node -> there is empty vector vector<int>()
    //since its by default so no need to write this part 
    //as we required this thing 
    gp.resize(n);  
    vis.resize(n, 0); 

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        //As Discussed for undirected graph there is path 
        //from both the sides a - b and b - a
        gp[a].push_back(b);
        gp[b].push_back(a); 
    }
    //Take the input from where you want to insert 
    int st;
    cin >> st; 
    // since we are getting res in the form of vector so 
    //store this into vector
    vector<int> ans = bfs(st);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
