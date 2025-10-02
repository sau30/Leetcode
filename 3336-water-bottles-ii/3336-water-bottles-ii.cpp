class Solution {
public:
    int maxBottlesDrunk(int fullBottles, int exchangeCost) {
        int totalDrunk = fullBottles; // You drink all initial bottles

        // Now, 'fullBottles' means number of empty bottles you have after drinking
        while (fullBottles >= exchangeCost) {
            // You can exchange empty bottles for 1 new full bottle
            totalDrunk += 1;  // Drink that new bottle

            // Update the number of empty bottles you now have:
            // - you used 'exchangeCost' empty bottles for the trade
            // - but now you gain 1 empty bottle after drinking the new one
            fullBottles = (fullBottles - exchangeCost) + 1;

            // After each trade, the shop increases the required empty bottles by 1
            exchangeCost += 1;
        }

        return totalDrunk;
    }
};
