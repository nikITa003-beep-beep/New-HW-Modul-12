#include "IsKPeriodic.h"
#include "searchSubstring.h"

bool IsKPeriodic(const std::string& str, int K)
{
    if (K <= 0 || str.length() % K != 0)
    {
        return false;
    }

    std::string pattern = str.substr(0, K);
    int times = str.length() / K;

    for (int i = 1; i < times; i++)
    {
        if (!searchSubstring(str.substr(i * K, K), pattern))
        {
            return false;
        }
    }

    return true;
}
