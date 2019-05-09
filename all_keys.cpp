#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <unordered_map>

int main()
{
    std::string s;
    int x;
    std::cin >> x >> s;
    std::unordered_map<std::string, int> subs;
    for (int i = 0; i < s.length(); i++)
    {
        std::string sub = s.substr(i, x);
        if (sub.length() < x)
        {
            break;
        }
        subs[sub] += 1;
    }

    std::string most;
    int maks = 0;
    for (auto it = subs.begin(); it != subs.end(); ++it)
    {
        if (it->second > maks || it->second == maks && (it->first.compare(most) < 0 || it == subs.begin()))
        {
            most = it->first;
            maks = it->second;
        }
    }

    std::cout << most << std::endl;

    return 0;
}