#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <list>
using namespace std;

typedef long long ll;

#define vi vector<int>
#define vvi vector<vector<int>>



int main(int argc, char const *argv[])
{
    list<int> lst;
    lst.push_back(1);
    lst.push_back(2);
    lst.push_back(3);
    lst.push_back(4);

    lst.splice(lst.begin(), lst, prev(prev(lst.end())), prev(lst.end()));

    for (auto i : lst) cout << i << endl;
    return 0;
}