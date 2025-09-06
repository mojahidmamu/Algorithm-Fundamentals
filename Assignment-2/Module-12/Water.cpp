#include <bits/stdc++.h>
using namespace std;

pair<int, int> maxWaterContainer(vector<int> &arr)
{
    int left = 0;
    int right = arr.size() - 1;
    int maxHeight = 0;
    pair<int, int> bestPair = {0, 0};

    while (left < right)
    {
        int height = min(arr[left], arr[right]);
        if (height > maxHeight)
        {
            maxHeight = height;
            bestPair = {left, right};
        }

        if (arr[left] < arr[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return bestPair;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        auto ans = maxWaterContainer(arr);
        cout << ans.first << " " << ans.second << endl;
    }
    return 0;
}
