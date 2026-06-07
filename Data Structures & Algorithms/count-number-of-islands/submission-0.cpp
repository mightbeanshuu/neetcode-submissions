class Solution {
   public:
    void bfs(int sr, int sc, vector<vector<char>>& grid, vector<vector<int>>& vis) {
        queue < pair<int, int>> q;
        int m=grid.size();
        int n=grid[0].size();
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        q.push({sr, sc});
        vis[sr][sc] = 1;
        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nr = dr[i] + r, nc = dc[i] + c;
                if (nr >= 0 && nc >= 0 && nr < m && nc < n && grid[nr][nc] == '1' && !vis[nr][nc]) {
                    vis[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    cnt++;
                    bfs(i,j,grid,vis);
                }
            }
        }
        return cnt;
    }
};
