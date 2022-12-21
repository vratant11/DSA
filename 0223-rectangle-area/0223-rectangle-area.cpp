class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int length1=abs(ax2-ax1);
        int length2=abs(bx2-bx1);
        int width1=abs(ay2-ay1);
        int width2=abs(by2-by1);
       
        int area = (length1*width1)+(length2*width2);
         int ox1 = max(ax1,bx1);   
         int oy1 = max(ay1,by1);   
         int ox2 = min(ax2,bx2);   
         int oy2 = min(ay2,by2);   
      
      if(ox2>ox1 && oy2>oy1){
          area -= ((ox1-ox2)*(oy1-oy2));
      }
        return area;
    }
};







    