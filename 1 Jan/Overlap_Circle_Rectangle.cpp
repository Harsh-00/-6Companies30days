class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int nearest_x= max(x1,min(x2,xCenter));
        int nearest_y= max(y1,min(y2,yCenter));

        //apply distance formula
        int sq_dist=(nearest_x-xCenter)*(nearest_x-xCenter) + (nearest_y-yCenter)*(nearest_y-yCenter);

        if(radius*radius>=sq_dist)
            return true;

        return false;
    }
};