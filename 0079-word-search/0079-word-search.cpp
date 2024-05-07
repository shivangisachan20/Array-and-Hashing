class Solution {
public:
  int m, n;
  vector<vector<int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

  bool find(vector<vector<char>>& board, vector<vector<bool>>& visited, int i, int j, int idx, string& word) {
    if (idx >= word.length()) {
      return true; // Word found
    }

    if (i < 0 || i >= m || j < 0 || j >= n || visited[i][j] || board[i][j] != word[idx]) {
      return false; // Invalid cell or visited or mismatch
    }

    visited[i][j] = true; // Mark cell as visited

    for (auto& dir : directions) {
      int i_ = i + dir[0];
      int j_ = j + dir[1];

      if (find(board, visited, i_, j_, idx + 1, word)) {
        return true; // Found word in a direction
      }
    }

    visited[i][j] = false; // Unmark cell after backtracking

    return false; // Word not found starting from current cell
  }

  bool exist(vector<vector<char>>& board, string word) {
    m = board.size();
    n = board[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n, false)); // Initialize visited set

    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        if (board[i][j] == word[0] && find(board, visited, i, j, 0, word)) {
          return true; // Word found starting from a cell
        }
      }
    }

    return false; // Word not found in the entire board
  }
};