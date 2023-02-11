#include <iostream>

using namespace std;

int start = 0;

void byThrees(int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << (start += 3) << ' ';
    }
    cout << endl;
}

void reset()
{
    start = 0;
}

int main()
{
    int length;

    cout << "Enter a value: ";
    cin >> length;

    byThrees(length);
    byThrees(length);
    reset();

    cout << "Enter a value: ";
    cin >> length;
    byThrees(length);

    return 0;
}