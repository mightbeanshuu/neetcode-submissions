#include <vector>
using namespace std;

class DfsPatterns {
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

public:
    void componentDfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
        vis[node] = 1;

        for (int next : adj[node]) {
            if (!vis[next]) {
                componentDfs(next, adj, vis);
            }
        }
    }

    void boundaryCheck(int r, int c, vector<vector<char>>& board,
                       vector<vector<int>>& safe) {
        int m = board.size();
        int n = board[0].size();

        safe[r][c] = 1;

        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr >= 0 && nr < m && nc >= 0 && nc < n &&
                board[nr][nc] == 'O' && !safe[nr][nc]) {
                boundaryCheck(nr, nc, board, safe);
            }
        }
    }
};
