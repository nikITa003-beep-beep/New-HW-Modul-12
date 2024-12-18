#include <iostream>
#include "searchSubstring.h"
#include "offsetTable.h"

bool searchSubstring(const std::string& text, const std::string& pattern)
{
    int n = text.length();
    int m = pattern.length();
    int badChar[256];

    offsetTable(pattern, badChar);

    int s = 0;
    while (s <= n - m)
    {
        int j = m - 1;

        while (j >= 0 && pattern[j] == text[s + j])
        {
            j--;
        }

        if (j < 0)
        {
            return true;
        }
        else
        {
            s += std::max(1, j - badChar[(int)text[s + j]]);
        }
    }
    return false;
}
