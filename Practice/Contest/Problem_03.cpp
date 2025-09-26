#include <bits/stdc++.h>
using namespace std;
// The Price Puzzle
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int N;
    cin >> N;
    vector<int> arr(N);
    int sumTotal = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sumTotal += arr[i];
    }

    vector<bool> canSum(sumTotal + 1, false);
    canSum[0] = true;

    for (int price : arr)
    {

        for (int s = sumTotal; s >= price; s--)
        {
            if (canSum[s - price])
            {
                canSum[s] = true;
            }
        }
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        L = max(0, L);
        R = min(R, sumTotal);

        int count = 0;
        for (int s = L; s <= R; s++)
        {
            if (canSum[s])
            {
                count++;
            }
        }

        cout << count <<  "\n";
    }

    return 0;
}
