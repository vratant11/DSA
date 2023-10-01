class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
           
           
                mp[nums[i]]++;

        }
        int max=0,n=INT_MIN;
        
        for (auto& it : mp) {
         if(it.second>max){
              n=it.first;
             max=it.second;
            
         }
    }
        return n;
        
        
        
        
        // int n;
        // cin >> n;
        // for(int i=0;i<n;++i){
        //     int x;
        //     cin >> x;
        //     nums.push_back(x);
        // }
//         int max=0,index=0;
        
//         for (int i=0;i<nums.size();i++)
//         {
//             int c=0;
//             for(int j=0;j<nums.size();j++)
//             {
//                 if(nums[i]==nums[j])
//                 {
//                     c++;
                    
//                 }
                
                
//                if(c>max)
//                 { 
//                 max = c;
//                 index=i;
                  
//                 } 
//             }
//         }
        
//         int result ;
//         if(max>((int)nums.size()/2)){
//             result =  nums[index];
//         }  
        
//         return result;
        // int c =1 ,r=0;
        // for(int i=1;i<nums.size();i++)
        // {
        //     if(nums[r]==nums[i])
        //     {
        //         c++;
        //     }
        //     else 
        //     {
        //         c--;
        //     }
        //     if(c==0)
        //     {
        //         c=1;
        //         r=i;
        //     }
        // }
        // return nums[r];
    } 
};