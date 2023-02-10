/* Эта программа выводит таблицу преобразования футов в метры*/

#include <iostream>
using namespace std;

int main()
{
    double m, f;
    for (f = 1.0; f <= 100; f++)
    {
        m = f / 3.28;
        cout << f << " футов = " << m << " метров" << endl;
        if (!((int)f % 10))
        {
            cout << '\n';
        }
    }
}