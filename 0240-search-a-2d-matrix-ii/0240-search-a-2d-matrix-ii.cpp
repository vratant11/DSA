class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        int m = arr.size();
        int n = arr[0].size();
        for(int row = 0;row<m;row++){
            // binary search
            int i = 0,j = n-1;
            long int mid;
            
                 while(i<=j){
                mid =  (j+i)/2;
                if(arr[row][mid] == t) return true;
                if(arr[row][mid] > t) j = mid - 1;
                else i = mid + 1;
            }
           
           
           
        }
        return false;
    }
};