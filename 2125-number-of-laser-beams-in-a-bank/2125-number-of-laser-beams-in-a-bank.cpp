class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        if(bank.size()==1)return 0;
        vector<int> v;
        int cnt = 0;
        for(auto &i: bank){
            cnt=0;
            for(auto &j: i ){
               if(j=='1') cnt++; 
            }
            if(cnt) v.push_back(cnt);
        }
        if(v.size()<=1)return 0;
        int ans=0;
       for(int i = 0; i < v.size()-1; i++){
            ans += v[i]*v[i+1];
        }
        return ans;
    }
};




