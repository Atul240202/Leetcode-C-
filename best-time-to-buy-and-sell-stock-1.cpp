class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = prices[0];
        int sizee = prices.size();
        for (int i = 0; i<sizee; i++)
        {
            min = std::min(min, prices[i]);
            int profit = prices[i]-min;
            max= std::max(max, profit);
        }
        return max;
        
    }
};


///Question link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
/*Phle toh max ko 0 se aur min ko kisi bhi non zero number se initialise krdo phir array ke hisaab se min ko run karwao usse hoga kya ki apne pass array ka minimum number 
mil jayega & phir array ke number se min ko substract krne prr profit ka pata lgega aur phir apan max mai jaakr compare krke ki sbse maximun number kon hai apan
answer nikal lenge*/
