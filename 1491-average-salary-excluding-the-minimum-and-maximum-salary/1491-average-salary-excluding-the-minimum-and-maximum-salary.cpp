class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        int sum=0;
        double avg=0.0;
        for(int i=1;i<salary.size()-1;i++){
            sum+=salary[i];
        }
        return((double)(sum)/(salary.size()-2));
    }
};