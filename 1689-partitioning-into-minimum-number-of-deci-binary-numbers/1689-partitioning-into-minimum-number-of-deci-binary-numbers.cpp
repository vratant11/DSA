class Solution {
public:
    int minPartitions(string n) {
        int maxi=0;
        for(auto c:n){
            maxi=max(maxi,c-'0');
        }
        return maxi;
    }
};