class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int r=matrix.size();
        int c=matrix[0].size();
        int count=0;
        int total=r*c;
        int startr=0;
        int startc=0;
        int endrow=r-1;
        int endcol=c-1;
        
        while(count<total){
            //print starting row
            for(int index = startc ;count<total && index<=endcol ; index++){ 
            ans.push_back(matrix[startr][index]); 
                count++;
            }
            startr++;
            
             for(int index = startr ;count<total && index<=endrow ; index++){ 
            ans.push_back(matrix[index][endcol]); 
                 count++;
            }
            endcol--;
            
             for(int index = endcol ;count<total && index>=startc ; index--){ 
            ans.push_back(matrix[endrow][index]);  
                 count++;
            }
            endrow--;
            
             for(int index = endrow ;count<total && index>=startr ; index--){ 
            ans.push_back(matrix[index][startc]);
                 count++; 
            }
            startc++;            
        }
        return ans;
    }
};


