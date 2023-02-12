
class Solution {
public:
    char findTheDifference(string s, string t) {
       int sum1=0;
        int sum2=0;
        // vector<int> v(26, 0);
        for(int i=0;i<t.length();i++){
            if(i<s.length()){
                int c=(int)s[i];
                sum1=sum1+c;
                cout<<sum1;
            }
            int c=(int)t[i];
            sum2=sum2+c;
        }
       int sum=sum2-sum1;
        cout<<sum;
        return (char)sum;
    }
};





