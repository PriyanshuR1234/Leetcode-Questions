class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int closex=max(x1,min(xCenter,x2));
        int closey=max(y1,min(yCenter,y2));

        int disX=xCenter-closex;
        int disY=yCenter-closey;

        return (disX*disX+disY*disY)<=(radius*radius);
    }
};