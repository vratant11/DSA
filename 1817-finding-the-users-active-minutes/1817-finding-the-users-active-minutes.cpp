class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int,set<int>>m;
        vector<int>res(k,0);
        for(int i=0;i<logs.size();i++){
            m[logs[i][0]].insert(logs[i][1]);
        }
        for(auto it=m.begin();it!=m.end();it++){
            int index=it->second.size()-1;
            if(index<k){
                res[index]++;
            }
        }
        return res;
    }
};



