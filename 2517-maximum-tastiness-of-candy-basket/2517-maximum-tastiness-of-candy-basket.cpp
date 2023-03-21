class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(),price.end());
        vector<int>diff;
        diff.resize(price.size());
        for(int i=price.size()-1;i>0;i--){
            diff.push_back(price[i]-price[i-1]);
        }
        int start=0,end=price.back()-price[0];
        while(start<=end){
            int mid=start + (end-start)/2;
            int curr=0,nums=0;
            for(auto &i:diff){
                curr+=i;
                if(curr>=mid){
                    curr=0;
                    nums++;
                }
            }
            if(nums>=k-1)
                start=mid+1;
            else
                end=mid-1;
        }
        return end;
    }
};