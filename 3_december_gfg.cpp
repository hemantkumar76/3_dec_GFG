#include <iostream>
using namespace std;

class Solution
{
public:
    int solve(int n, int k, vector<int> &stalls)
    {

        // Write your code here
        sort(stalls.begin(), stalls.end());

        int l = 0, r = stalls[n - 1] - stalls[0];

        int ans = 0;

        while (l <= r)
        {

            int mid = (l + r) / 2;

            int cow = 1;

            int last = stalls[0];

            for (int i = 1; i < n; i++)
            {

                if (stalls[i] - last >= mid)
                {

                    cow++;

                    last = stalls[i];
                }
            }

            if (cow >= k)
            {

                ans = mid;

                l = mid + 1;
            }

            else
            {

                r = mid - 1;
            }
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> stalls(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }
        Solution ob;
        cout << ob.solve(n, k, stalls) << endl;
    }
    return 0;
}
