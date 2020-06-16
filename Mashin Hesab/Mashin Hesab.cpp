#include <iostream>
using namespace std;
int main()
{

    int m, n, k, d = 2, h = 0, j = 0, l;
    char x;
    cin >> m >> x >> n;
    l = m;

    if (x == '+')
    {
        cout << m + n;
    }

    else if (x == '-')
    {
        cout << m - n;
    }

    else if (x == '*')
    {
        cout << m * n;
    }

    else if (x == '/')
    {
        cout << m / n;
    }

    else if (x == 'G')
    {
        for (int i = 1; m >= i; i++)
        {
            if (m % i == 0 && n % i == 0)
            {
                k = i;
            }
        }
        cout << k;
    }

    else if (x == 'L')
    {
        for (int i = 1; m >= i; i++)
        {
            if (m % i == 0 && n % i == 0)
            {
                k = i;
            }
        }
        cout << (m * n) / k;
    }

    else if (x == 'D')
    {
        while (m % d != 0)
        {
            d++;
        }
        while (m % d == 0)
        {
            m /= d;
            h++;
        }
        cout << d << " ^ " << h;
        while (m != 1)

        {
            d++;
            h = j;
            while (m % d == 0)
            {
                m /= d;
                h++;
            }
            if (h > 0)
                cout << " * " << d << " ^ " << h;
        }
    }
    else if (x == 'P')
    {
        if (n != 0)
        {
            for (int i = 1; n > i; i++)
            {
                m *= l;
            }
            cout << m;
        }
        else
            cout << 1;
    }
    else
    {
        if (m >= 0)
        {
            cout << m;
        }
        else
        {
            cout << -m;
        }
    }


}