class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int ans=0,low=0,high=letters.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(letters[mid]==target){
                low=mid+1;
            }
            else if(target>letters[mid]){
                low=mid+1;
            }
            else {
                ans=mid;
                high=mid-1;
            }
        }
        return letters[ans];
    }
};


