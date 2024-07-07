class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int s=numBottles;
        while(numBottles>=numExchange){
        int a=numBottles/numExchange;
        s+=a;
        int d=numBottles-(a*numExchange);
        numBottles=d+a;
        }
        return s;
    }
};