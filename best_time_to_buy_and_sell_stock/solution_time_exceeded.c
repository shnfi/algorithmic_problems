int maxProfit(int* prices, int pricesSize) {
    int max_profit;

    for (int i = 0; i < pricesSize - 1; i++)
    {
        for (int j = i; j < pricesSize; j++)
        {
            if ((prices[j] - prices[i]) > max_profit)
            {
                max_profit = prices[j] - prices[i];
            }
        }
    }

    if (max_profit < 0) max_profit = 0;

    return max_profit;
}
