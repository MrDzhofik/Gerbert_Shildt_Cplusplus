// Changed type char[] to type string

#include <iostream>
#include <cstring>

using namespace std;

void quicksort(string *, int);

void qs(string *, int, int);

int main()
{
    string *str = new string();
    int i;

    cout << "Введите массив: ";
    getline(cin, *str);
    cout << "Исходный массив: " << *str << endl;
    quicksort(str, (*str).length());

    cout << "Упорядоченный массив: " << *str << endl;

    return 0;
}

void quicksort(string *items, int len)
{
    return qs(items, 0, len - 1);
}

void qs(string *items, int left, int right)
{
    int i, j;
    char x, y;

    i = left;
    j = right;
    x = (*items).at((left + right) / 2);

    do
    {
        while (((*items).at(i) < x) && (i < right))
            i++;
        while ((x < (*items).at(j)) && (j > left))
            j--;

        if (i <= j)
        {
            y = (*items).at(i);
            (*items).at(i) = (*items).at(j);
            (*items).at(j) = y;
            i++;
            j--;
        }
    } while (i <= j);
    if (left < j)
        qs(items, left, j);
    if (i < right)
        qs(items, i, right);
}