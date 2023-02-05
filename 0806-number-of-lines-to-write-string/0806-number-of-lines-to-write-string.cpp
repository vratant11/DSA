// class Solution {
// public:
//     vector<int> numberOfLines(vector<int>& widths, string s) {
//         int sum=0;
//         vector<int>v;
//         for(int i=0;i<widths.size();i++){
//            sum+=widths[i];
            
//         }
//         if(sum%100==0){
//             v.push_back((sum)/100);
//             v.push_back(sum-100*(((sum)/100)));
//         }
//         else{
//             v.push_back(((sum)/100)+1);
//             v.push_back(sum-100*(((sum)/100)));
//         }
//         return v;        
//     }
// };




class Solution {
public:
     vector<int> numberOfLines(vector<int>& widths, string s) {
        int c=0,a=1;
        for(int i=0;i<s.length();i++){
            int ch=s[i]-'a';
            if((c+widths[ch])>100){
                c=widths[ch];
                a++; 
            }
            else
            c+=widths[ch];
        }
        return {a,c};
    }
};