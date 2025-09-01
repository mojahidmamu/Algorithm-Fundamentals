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
    }
    return time;
};

int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        string s;
        cin >> s;

        int best_time = -1;
        string best_string;

        for (int i = 0; i <= s.size(); i++)
        {
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                string temp = s;
                temp.insert(temp.begin() + i, ch);
                int t = calculate_time(temp);
                if (t > best_time)
                {
                    best_time = t;
                    best_string = temp;
                }
            }
        }
        cout << best_string << endl;
    }

    return 0;
}
