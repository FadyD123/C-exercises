#include <iostream>
#include <math.h>

using namespace std;

int factioriel(int n)
{
    int i;
    int fact = 1;
    if (n == 0)
    {
        return fact;
    }
    else
    {
        int j = 1;
        for (j = 1; j <= n; j++)
        {
            fact = fact * j;
        }
        return fact;
    }

}

double combinaison(int n, int p)
{
    int factn = factioriel(n);
    int factp = factioriel(p);
    int fact_n_moins_p = factioriel(n - p);
    double c = factn / (factp * fact_n_moins_p);
    return c;
}

int main()
{
    cout << "n : ";
    int n;
    cin >> n;
    cout << "p : ";
    int p;
    cin >> p;
    cout << "nCp = " << combinaison(n, p) << endl;
    return 0;
}
