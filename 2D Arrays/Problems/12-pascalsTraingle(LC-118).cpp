/* Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:
 */

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> v;
            for(int j=0;j<=i;j++){
                if(j == 0 || j == i) v.push_back(1);
                else{
                    int x = ans[i-1][j-1] + ans[i-1][j];
                    v.push_back(x);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};