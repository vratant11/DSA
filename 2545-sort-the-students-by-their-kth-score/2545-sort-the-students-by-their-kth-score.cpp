// class Solution {
// public:
//     vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
//         int m=score.size();
//         int n=score[0].size();
//         priority_queue<pair<int,int>>p;
//         for(int i=0;i<m;i++){
//             p.push({score[i][k],i});
//         }
//         vector<vector<int>> res;
//         while(!p.empty()){
//             int row =p.top().second();
//             p.pop();
//             res.push_back(score[row]);
//         }
//         return res;
//     }
// };






class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int m = score.size();
        int n = score[0].size();
        
        //store col value and index in max heap
        priority_queue<pair<int, int>> pq;
        for(int i=0; i<m; i++){
            pq.push({score[i][k], i});
        }

        
        //now place rows first which have higher col value
        vector<vector<int>> res;
        while(!pq.empty()){
            int row = pq.top().second;
            pq.pop();
            res.push_back(score[row]);
        }
        
        return res;
    }
};
