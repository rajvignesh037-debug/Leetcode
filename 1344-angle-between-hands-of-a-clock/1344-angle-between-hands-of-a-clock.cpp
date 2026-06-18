class Solution {
public:
    double angleClock(int hour, int minutes) {
        double Hour=(hour%12)*30+minutes*0.5;
        double Minutes=minutes*6;
        double angle =abs(Hour-Minutes);
        return min(angle,360-angle);
    }
};