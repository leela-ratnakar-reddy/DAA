#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minCoins(vector<int>& coins, int amount) {
    // dp[i] represents the minimum number
    // of coins required to make amount i
    vector<int> dp(amount + 1, INT_MAX);

    // Base case
    dp[0] = 0;

    // Calculate minimum coins for each amount
    for (int i = 1; i <= amount; i++) {
        for (int coin : coins) {
            if (coin <= i && dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[amount];
}

int main() {
    int n;

    cout << "Enter number of coin denominations: ";
    cin >> n;

    vector<int> coins(n);

    cout << "Enter coin denominations: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    int amount;
    cout << "Enter the target amount: ";
    cin >> amount;

    int result = minCoins(coins, amount);

    if (result == INT_MAX) {
        cout << "Change cannot be made with the given coins." << endl;
    } else {
        cout << "Minimum number of coins required: "
             << result << endl;
    }

    return 0;
}
