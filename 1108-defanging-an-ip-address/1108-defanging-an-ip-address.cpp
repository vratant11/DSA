class Solution {
public:
    string defangIPaddr(string address) {
        string v="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                v=v+"[.]";
            }
            else{
                v=v+address[i];
            }
        }
        return v;
    }
};