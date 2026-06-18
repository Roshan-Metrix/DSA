class Solution {
public:
    double angleClock(int hour, int minutes) {
        double minuteAngle = minutes * 6;
        double hourAngle = hour * 30 + minutes * 0.5;
        double diff = abs(hourAngle - minuteAngle);
        return min(diff, 360 - diff); 
        
    }
};