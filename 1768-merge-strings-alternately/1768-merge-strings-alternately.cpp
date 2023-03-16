// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
        
//         string str;

//         int i = 0, s1 = word1.length(), s2 = word2.length();

//         while(i < s1 && i < s2){
//             str.push_back(word1[i]);
//             str.push_back(word2[i]);
//             i++;
//         }

//         while(i < s1){
//             str.push_back(word1[i]);
//             i++;
//         }
        
//         while(i < s2){
//             str.push_back(word2[i]);
//             i++;
//         }

//         return str;
//     }
// };


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s;

     
        int i{0}, j{0};
        while (i<word1.length() && j<word2.length()) {
            s+=word1[i++];
            s+=word2[j++];
        }

       
        if (word1.length() > word2.length()) {
            s.append(word1, i);
        } else if (word1.length() < word2.length()) {
            s.append(word2, j);
        }

        return s;
    }
};