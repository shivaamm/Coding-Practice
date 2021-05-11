class Solution {
public:
    double angleClock(int hour, int minutes) {
        
//         ** Hour angle takes 12 hours to complete 360 degrees meaning for every hour it takes 360/12 = 30 degrees.Also let's say when time is 2:20
// the hour angle would move away from 2 and would be in the middle of 2 and 3 and it is proportional to minute hand.
// ** Minute hand travels 360 in 60 mins so 6 degrees per minute. Calculate and subtract to get the absolute solution
        
        double hrAngle = (hour * 60 + minutes) * 0.5;
        double minsAngle = minutes * 6;
        return min(360-(abs(hrAngle-minsAngle)),abs(hrAngle-minsAngle));
        
        
      
      **************************************************************************************************
        
        
        // double h, m;
        // m = minutes*6.0;
        // h = hour*30.0;
        // h += minutes/2.0;
        // double ans = abs(h-m);
        // return min(ans, 360-ans);
    }
};
