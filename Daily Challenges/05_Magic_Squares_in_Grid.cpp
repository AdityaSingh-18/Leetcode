// Problem Link https://leetcode.com/problems/magic-squares-in-grid/

class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<vector<int>>> magics = {
            {{4,3,8},{9,5,1},{2,7,6}},
            {{2,7,6},{9,5,1},{4,3,8}},
            {{8,1,6},{3,5,7},{4,9,2}},
            {{6,7,2},{1,5,9},{8,3,4}},
            {{6,1,8},{7,5,3},{2,9,4}},
            {{8,3,4},{1,5,9},{6,7,2}},
            {{2,9,4},{7,5,3},{6,1,8}},
            {{4,9,2},{3,5,7},{8,1,6}}
        };
        for (int i = 0; i < n - 2; i++) {
            for (int j = 0; j < m - 2; j++) {
                for (auto &magic : magics) {
                    int flag = 1;
                    for (int r = 0; r < 3; r++) {
                        for (int c = 0; c < 3; c++) {
                            if (grid[i + r][j + c] != magic[r][c]) {
                                flag = 0;
                                break;
                            }
                        }
                    }
                    if (flag){
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }
};
