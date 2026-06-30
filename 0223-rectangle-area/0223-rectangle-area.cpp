class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int height = max(0, min(ay2, by2) - max(ay1, by1));
        int width  = max(0, min(ax2, bx2) - max(ax1, bx1));
        int a1=(ay2-ay1)*(ax2-ax1);
        int a2=(by2-by1)*(bx2-bx1);
        return a1+a2-height*width;
        
    }
};