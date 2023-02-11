#include <iostream>
#include <cmath>

using namespace std;

double hypot(double first, double second)
{
    return sqrt((first * first) + (second * second));
}

int main()
{
    double a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;
    cout << "Hypot: " << hypot(a, b) << endl;
    return 0;
}