class Solution {
public:
    string sortSentence(string s) {
        map<int,string>m;
        string ans="";
        string temp="";
        for(int i=0;i<s.length();i++){
            if(s[i]>='0'&&s[i]<='9'){
                int x=int(s[i]);
                m[x]=ans;
                ans.clear();
                i++;
            }
            else{
                ans+=s[i];
                // cout<<ans<<endl;
            }
        }
        for(auto itr:m)
        {
            temp+=itr.second;
            temp+=' ';
        }
        temp.erase(temp.begin()+temp.size()-1);
        return temp;      
    }
};



