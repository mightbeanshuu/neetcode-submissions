#define INF 2147483647
class Solution {
   public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        queue<pair<int, int>> q;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0 && !vis[i][j]) {
                    vis[i][j] = 1;
                    q.push({i, j});
                }
            }
        }
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                auto [r, c] = q.front();
                q.pop();
                for (int i = 0; i < 4; i++) {
                    int nr = dr[i] + r;
                    int nc = dc[i] + c;
                    if (nr >= 0 && nc >= 0 && nr < m && nc < n && grid[nr][nc] == INF && !vis[nr][nc]) {
                        vis[nr][nc] = 1;
                        grid[nr][nc] = grid[r][c] + 1;

                        q.push({nr, nc});
                    }
                }
            }
        }
    }
};
