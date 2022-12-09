// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int row=matrix.size();
//         int col=matrix[0].size();
//         int startrow=0;
//         int startcol=0;
//         int endrow=row-1;
//         int endcol=col-1;
//         int total element=row*col;
//         for(int i=0;int<row;i++){
//             if(target<=matrix[startrow][endcol]){
//                 int mid=martix[(startrow+endcol)/2];
//                 if(target==mid) return true;
//                 else if(target<mid) 
//             }
//             else{
//                 startrow++;
//             }
//         }
//     }
// };


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        int m = arr.size();
        int n = arr[0].size();
        for(int row = 0;row<m;row++){
            // binary search
            int i = 0,j = n-1;
            long int mid;
            if(t<=arr[row][n-1]){
                 while(i<=j){
                mid =  (j+i)/2;
                if(arr[row][mid] == t) return true;
                if(arr[row][mid] > t) j = mid - 1;
                else i = mid + 1;
            }
            }
           
           
        }
        return false;
    }
};