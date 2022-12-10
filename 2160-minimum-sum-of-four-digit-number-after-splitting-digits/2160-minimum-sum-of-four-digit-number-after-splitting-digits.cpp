class Solution {
public:
    int minimumSum(int num) {
    vector<int> v;
    while(num>0){
   int ld=num%10;
  v.push_back(ld);
    num=num/10;}
    sort(v.begin(),v.end());
    int x=v[0]*10+v[2];
    int y=v[1]*10+v[3];
    return x+y;
}
};

