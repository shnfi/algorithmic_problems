int maxProfit(int* prices, int pricesSize) {
    int buy = prices[0], max_profit = 0;

    for (int i = 1; i < pricesSize; i++)
    {
        if (prices[i] < buy) buy = prices[i];
        if ((prices[i] - buy) > max_profit) max_profit = prices[i] - buy;
    }

    return max_profit;
}
