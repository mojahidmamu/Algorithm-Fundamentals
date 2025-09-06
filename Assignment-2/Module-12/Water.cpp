#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int left = 0;
        int right = arr.size() - 1;
        int maxArea = 0;
        pair<int, int> bestPair = {0, 0}; // best-pair;

        while (left < right)
        {
            int h = 
            int w = right - left;
            int area = h * w;

            if (area > maxArea)
            {
                maxArea = area;
                bestPair = {left, right};
            }
            
        }
        
    }

    return 0;
}
