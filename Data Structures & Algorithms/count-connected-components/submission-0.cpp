class Solution {
public:
    void bfs(int start,vector<vector<int>>&adj,vector<int>&vis,vector<int>&comp){
        queue<int>q;
        vis[start]=1;
        q.push(start);
        while(!q.empty()){
            int node=q.front();
            q.pop();
            comp.push_back(node);
            for(auto nei:adj[node]){
                if(!vis[nei]){
                    vis[nei]=1;
                    q.push(nei);
                }
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        vector<vector<int>>ans;
        for(auto e:edges){
            int u=e[0];
            int v=e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                vector<int>comp;
                bfs(i,adj,vis,comp);
                ans.push_back(comp);
            }
        }
        return ans.size();


    }
};
