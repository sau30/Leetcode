class Solution {
public:
    
    // Function to count number of 1s in binary
    int countOnes(int num) {
        int count = 0;
        
        while (num > 0) {
            if (num % 2 == 1) {   // check last bit
                count++;
            }
            num = num / 2;       // remove last bit
        }
        
        return count;
    }
    
    
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> result;

        // hours: 0 to 11
        for (int hour = 0; hour < 12; hour++) {
            
            // minutes: 0 to 59
            for (int minute = 0; minute < 60; minute++) {

                // total LEDs ON
                int totalOn = countOnes(hour) + countOnes(minute);

                // check condition
                if (totalOn == turnedOn) {
                    
                    string time = to_string(hour) + ":";

                    // add leading zero for minutes
                    if (minute < 10) {
                        time += "0";
                    }

                    time += to_string(minute);

                    result.push_back(time);
                }
            }
        }

        return result;
    }
};
