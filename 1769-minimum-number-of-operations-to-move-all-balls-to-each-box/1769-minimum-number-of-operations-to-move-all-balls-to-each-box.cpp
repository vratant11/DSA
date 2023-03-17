class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.length();
        vector<int>op(n);
        int suml=0,sumr=0;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                sumr+=1;
                op[0]+=i;    
            }
        }
        for(int i=1;i<n;i++){
            if(boxes[i-1]!='0'){
                suml+=1;
                sumr-=1;
            }
            op[i]=op[i-1]+suml-sumr; 
        }
        return op;
    }
};