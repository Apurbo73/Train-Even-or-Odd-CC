#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        int A[N];

        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int sum_odd_days = 0;
        int sum_even_days = 0;

        for (int i = 0; i < N; ++i)
        {
            if (i % 2 == 0)
            {
                sum_odd_days += A[i];
            }
            else
            {
                sum_even_days += A[i];
            }
        }

        cout << max(sum_odd_days, sum_even_days) << endl;
    }

    return 0;
}