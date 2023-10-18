#include <iostream>
using namespace std;

class Solution
{
public:
    int solve(int n, int k, vector<int> &stalls)
    {

        // Write your code here
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
