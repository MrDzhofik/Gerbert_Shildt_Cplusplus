#include <iostream>

using namespace std;

void add_one(int num)
{
    if (num < 10)
    {
        add_one(num + 1);
    }
    cout << num << ' ';
}

int main()
{
    add_one(1);
    return 0;
}