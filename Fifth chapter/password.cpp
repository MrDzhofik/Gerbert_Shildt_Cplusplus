#include <iostream>
#include "string.h"

using namespace std;

int main(int argc, char *argv[])
{
    char pass[] = "pass";
    if (!strcmp(pass, argv[2]))
    {
        cout << "Correct password" << endl;
        return 0;
    }
    cout << "Incorrect password" << endl;

    return 0;
}