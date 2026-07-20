class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        vector<vector<int>> temp = grid;

        int m = grid.size();
        int n = grid[0].size();

        k = k % (m * n);

        while (k--) {

            int last = temp[m - 1][n - 1];

            for (int i = m - 1; i >= 0; i--) {

                for (int j = n - 1; j >= 0; j--) {

                    if (i == 0 && j == 0)
                        continue;

                    if (j == 0) {
                        temp[i][j] = temp[i - 1][n - 1];
                    } else {
                        temp[i][j] = temp[i][j - 1];
                    }
                }
            }

            temp[0][0] = last;
        }

        return temp;
    }
};