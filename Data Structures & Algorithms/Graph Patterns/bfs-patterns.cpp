#include <queue>
#include <vector>
using namespace std;

class BfsPatterns {
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

public:
    void graphBfs(int src, vector<vector<int>>& adj, vector<int>& vis) {
        queue<int> q;
        vis[src] = 1;
        q.push(src);

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            for (int next : adj[node]) {
                if (!vis[next]) {
                    vis[next] = 1;
                    q.push(next);
                }
            }
        }
    }

    void boundaryConnectedBfs(vector<vector<char>>& board,
                              vector<vector<int>>& safe) {
        int m = board.size();
        int n = board[0].size();
        queue<pair<int, int>> q;

        auto add = [&](int r, int c) {
            if (board[r][c] == 'O' && !safe[r][c]) {
                safe[r][c] = 1;
                q.push({r, c});
            }
        };

        for (int i = 0; i < m; i++) {
            add(i, 0);
            add(i, n - 1);
        }
        for (int j = 0; j < n; j++) {
            add(0, j);
            add(m - 1, j);
        }

        while (!q.empty()) {
            auto [r, c] = q.front();
            q.pop();

            for (int k = 0; k < 4; k++) {
                int nr = r + dr[k];
                int nc = c + dc[k];

                if (nr >= 0 && nr < m && nc >= 0 && nc < n &&
                    board[nr][nc] == 'O' && !safe[nr][nc]) {
                    safe[nr][nc] = 1;
                    q.push({nr, nc});
                }
            }
        }
    }
};
