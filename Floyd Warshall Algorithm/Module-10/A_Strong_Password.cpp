#include <bits/stdc++.h>
using namespace std;

int calculate_time(string s)
{
    int time = 2;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            time += 1;
        }
        else
        {
            time += 2;
        }
        return time;
    }
}
int main()
{
    int TestCase;
    cin >> TestCase;
    cin.ignore();
    while (TestCase--)
    {
        string s;
        cin >> s;

        int best_time = -1;
        string best_string;
    }

    return 0;
}
