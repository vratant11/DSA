class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<string> v;
        for(int i=0;i<words.size();i++)
        {
            set<char> s;
            for(int j=0;j<words[i].size();j++)
            {
                if(s.count(words[i][j])==0)
                    s.insert(words[i][j]);
            }
            string temp="";
            for(auto& i:s)
            {
                temp.push_back(i);
            }
            sort(temp.begin(),temp.end());
            cout<<temp<<" ";
            v.push_back(temp);
        }
        map<string,int> mp;
        for(int i=0;i<words.size();i++)
        {
            mp[v[i]]++;
        }
        int c=0;
        for(auto i:mp)
        {
            if(i.second>1)
                c=c+(i.second*(i.second-1))/2;
        }
        return c;
    }
};