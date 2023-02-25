class Solution {
public:
    string interpret(string command) {
        
    string ans = "";
    for (int i = 0; i < command.size(); i++)
    {
        if (command[i] == 'G')
        {
            ans = ans + "G";
        }
        else if (command[i] == '(')
        {
            if (command[i + 1] == ')')
            {
                ans = ans + "o";
            }
            else if (command[i + 1] == 'a')
            {
                ans = ans + "al";
            }
        }
    }
    return ans;

    }
};