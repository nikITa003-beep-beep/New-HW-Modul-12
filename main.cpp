#include <iostream>
#include <string>
#include "IsKPeriodic.h"

using namespace std;

int main()
{
    system("chcp 1251");
    string string1 = "abcabcabcabc";
    int K1 = 3;

    string string2 = "kfckfckfckfc";
    int K2 = 3;

    string string3 = "kfckfckfckfc";
    int K3 = 5;

    if (IsKPeriodic(string1, K1))
    {
        cout << "������ �������� ������� " << K1 << endl;
    }
    else 
    {
        cout << "������ �� �������� ������� " << K1 << endl;
    }

    if(IsKPeriodic(string2, K2))
    {
        cout << "������ �������� ������� " << K2 << endl;
    }
    else
    {
        cout << "������ �� �������� ������� " << K2 << endl;
    }


    if(IsKPeriodic(string3, K3))
    {
        cout << "������ �������� ������� " << K3 << endl;
    }
    else
    {
        cout << "������ �� �������� ������� " << K3 << endl;
    }

    return 0;
}
