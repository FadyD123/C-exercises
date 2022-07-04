#include <iostream>
#include <cmath>

using namespace std;

int factoriel(int n)
{
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
    if (n < 0 || p < 0)
    {
        return 0;
    }
    else
    {
        int factn = factoriel(n);
        int factp = factoriel(p);
        int fact_n_moins_p = factoriel(n - p);
        double c = factn / (factp * fact_n_moins_p);
        return c;
    }
}

int solution_number_second_degree_eq(double a, double b, double c, double &delta)
{
    delta = b * b - 4 * a * c;
    if (delta < 0)
        return 0;
    else
        if (delta == 0)
            return 1;
        else
            return 2;
}

void solutions_second_degree_eq(double a, double b,double c)
{
    double delta;
    int nb_sol = solution_number_second_degree_eq(a, b, c, delta);
    double x, x1, x2;

    switch (nb_sol)
    {
      case 0: cout << "no solution";
         break;
      case 1: 
          x = -b / (2 * a);
          cout << "we have one solution : " << x << endl;
          break;
      case 2: 
          x1 = (-b + sqrt(delta)) / (2 * a);
          x2 = (-b - sqrt(delta)) / (2 * a);
          cout << "First solution : " << x1 << endl;
          cout << "Second Solution : " << x2 << endl;
    }

}

int main()
{
    cout << "a : ";
    int a;
    cin >> a;
    cout << "b : ";
    int b;
    cin >> b;
    cout << "c : ";
    int c;
    cin >> c;
    solutions_second_degree_eq(a, b, c);
    return 0;
}
