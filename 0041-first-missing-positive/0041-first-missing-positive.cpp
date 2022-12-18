class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set <int> s(nums.begin(), nums.end());
  //       for(auto& str:s)
  // {
  //   cout << str << ' ';
  // }
        for(int i=1;;++i){
            if(!s.count(i))return i;
        }
    }
};