class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourAngle = minutes * 0.5;
        double minuteHand1 = minutes * 6;
        double hourHand1 = hour * 30;
        double calculation1 = abs(minuteHand1 - (hourHand1 + hourAngle)); 
        double calculation2 = 360 - calculation1;

        return calculation1>calculation2? calculation2 : calculation1;

        
    }
};