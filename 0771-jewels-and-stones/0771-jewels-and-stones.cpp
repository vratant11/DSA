// class Solution {
// public:
//     int numJewelsInStones(string jewels, string stones) {
//         int c=0;
//         for(int i=0;i<jewels.length();i++){
//             for(int j=0;j<stones.length();j++){
//                 if(jewels[i]==stones[j]){
//                     c++;
//                 }
//             }
//         }
//         return c;
//     }
// };


class Solution{
    public:
    int numJewelsInStones(string jewels, string stones) {
    int num = 0;
    for (int i = 0; i < jewels.size(); i++){
        num += count(stones.begin(), stones.end(), jewels[i]);
    }
    return num;
}
};
