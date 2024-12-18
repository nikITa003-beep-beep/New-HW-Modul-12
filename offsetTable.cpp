#include "offsetTable.h"

void offsetTable(const std::string& pattern, int badChar[256])
{
    int m = pattern.length();

    for (int i = 0; i < 256; i++)
    {
        badChar[i] = -1;
    }

    for (int i = 0; i < m; i++)
    {
        badChar[(int)pattern[i]] = i;
    }
}
