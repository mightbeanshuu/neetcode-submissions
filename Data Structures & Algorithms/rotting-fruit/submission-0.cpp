class Solution {
   public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> vis(row, vector<int>(col, 0));
        queue<pair<int, int>> q;
        int fr = 0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 2 && !vis[i][j]) {
                    vis[i][j] = 1;
                    q.push({i, j});
                }
                if (grid[i][j] == 1) {
                    fr++;
                }
            }
        }
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        int t = 0;
        while (!q.empty() && fr > 0) {
            int sz = q.size();
            while (sz--) {
                auto [r, c] = q.front();
                q.pop();
                for (int i = 0; i < 4; i++) {
                    int nr = dr[i] + r;
                    int nc = dc[i] + c;
                    if (nr >= 0 && nc >= 0 && nr < row && nc < col && grid[nr][nc] == 1 &&
                        !vis[nr][nc]) {
                        vis[nr][nc] = 1;
                        grid[nr][nc] = 2;
                        fr--;
                        q.push({nr, nc});
                    }
                }
            }
            t++;
        }
        return (fr == 0) ? t : -1;
    }
};
