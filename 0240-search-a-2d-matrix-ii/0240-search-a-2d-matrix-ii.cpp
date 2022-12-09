class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        int row = arr.size();
        int col = arr[0].size();
        int rowIndex =0;
        int colIndex=col-1;
        while(rowIndex<row && colIndex>=0){
            int element = arr[rowIndex][colIndex];
            if(element == t){
                return 1;
            }
            if(element<t){
                rowIndex++;
            }
            else{
                colIndex--;
            }
        }
        
        
        
         // int m = arr.size();
         // int n = arr[0].size();
//         for(int row = 0;row<m;row++){
//             // binary search
//             int i = 0,j = n-1;
//             long int mid;
//             if(t<=arr[row][n-1]){
//                  while(i<=j){
//                 mid =  (j+i)/2;
//                 if(arr[row][mid] == t) return true;
//                 if(arr[row][mid] > t) j = mid - 1;
//                 else i = mid + 1;
//             }
//             }
           
           
// }
// return false;
       return 0; 
    }
};

