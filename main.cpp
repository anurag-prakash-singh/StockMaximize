#include <iostream>
#include <vector>

using namespace std;

static unsigned int maximizeReturn(const vector<unsigned int> &prices) {
    unsigned int profit = 0;
    unsigned int maxPrice = prices[prices.size() - 1];

    for (int i = prices.size() - 2; i >= 0; i--) {
        if (maxPrice < prices[i]) {
            maxPrice = prices[i];
        } else {
            profit += maxPrice - prices[i];
        }
    }

    return profit;
}

int main() {
    int T, N;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;

        vector<unsigned int> prices;

        for (int j = 0; j < N; j++) {
            unsigned int price;

            cin >> price;

            prices.push_back(price);
        }

        unsigned int profit = maximizeReturn(prices);

        cout << profit << endl;
    }


    return 0;
}