class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;

        for(auto ch:s)
        {
           
            if(st.empty())
            {
                if(ch=='(' || ch==')')
                {
                    st.push(ch);
                }
            }
            else 
            {
                if(ch=='(' || st.top()!='(' && ch==')')
                {
                    st.push(ch);
                }
                else if(st.top()=='(' && ch==')')
                {
                    st.pop();
                }
                
            }


        }
        int count=0;
        while(!st.empty())
        {
            if(st.top()=='(' ||st.top()==')')
            {
                count++;
            }
            st.pop();
        }
        return count;
        
    }
};