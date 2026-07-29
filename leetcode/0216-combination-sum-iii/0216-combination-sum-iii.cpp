class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
     vector<vector<int>> result;
     vector<int>curr;
     backtrack(k,n,1,curr,result);
     return result;   
    }

private:
    void backtrack(int k, int remaining, int start, vector<int>& curr,
                   vector<vector<int>>& result) {
        if (curr.size() == k && remaining == 0) {
            result.push_back(curr);
            return;
        }
        if (curr.size() == k || remaining < 0){
            return;}
        for (int i = start; i <= 9; i++) {
            curr.push_back(i);
            backtrack(k, remaining - i, i + 1, curr, result);
            curr.pop_back();
        }
    }
};