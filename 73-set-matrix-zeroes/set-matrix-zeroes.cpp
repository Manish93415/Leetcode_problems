class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        int m=matrix.size();
        vector<pair<int,int>>findzero;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    findzero.push_back({i,j});
                }
            }
        }

        for (auto p : findzero) {
            int row = p.first;
            int col = p.second;

            for (int j = 0; j < n; j++)
                matrix[row][j] = 0;

            for (int i = 0; i < m; i++)
                matrix[i][col] = 0;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j];
            }
        }
    }
};