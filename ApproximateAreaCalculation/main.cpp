#include <iostream>

using namespace std;

int main()
{
    Function f = new Function();
    f.read();
    double a, b, n;
    cin >> a >> b >> n;
    if ( n == 0 )
        return -1;

    double h = (b - a) / n;
    double x = a + h; double sum = 0;
    for ( int i = 0; i < n-1; i++, x += h )
    {
        sum += 2.0 * f.valueAt(x);
    }
    sum += (f.valueAt(a) + f.valueAt(b))/2.0;

    cout << sum * h << endl;

    return 0;
}
