class Solution {
    private:
    bool check(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int count1 [26] ={0};
        //character count array
        for(int i=0;i<s1.size();i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        //traverse s2 in window of s1 and compare
        int i=0;
        int count2[26]={0};
        int windowsize=s1.length();
        //running for first window
        while(i<windowsize && i<s2.length() ){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }
        //comparing
        if(check(count1,count2)){
            return 1;
        }
        
        //aage window move karo
        while(i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            index=s2[i-windowsize]-'a';
            count2[index]--;
            i++;
            if(check(count1,count2))
                return 1;
            
        }
        return 0;
    }
};