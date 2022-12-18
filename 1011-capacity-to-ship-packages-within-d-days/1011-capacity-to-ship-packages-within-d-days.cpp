class Solution {
public:
    
    bool allow(vector<int>wts,int mid,int days){
        int d=1,sum=0;
        for(int i=0;i<wts.size();i++){
            sum+=wts[i];
            if(sum>mid){
                d++;
                sum=wts[i];
            }
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight=0,sum=0;
        for(int weight: weights){
             sum += weight; maxWeight = max(maxWeight, weight);
        }
         
        if(weights.size()==days)return maxWeight;
        int start = maxWeight,end = sum,capacity =0;
        while(start<=end){
            int mid = start +(end-start)/2;
            if(allow(weights,mid,days)){
                capacity= mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return capacity;
    }
};