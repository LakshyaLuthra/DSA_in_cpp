class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> v;
            long long val=1;
            for(int j=0;j<i+1;j++){
                v.push_back(val);
                val=val*(i-j)/(j+1);
            }
            ans.push_back(v);
        }
        return ans;
    }
};