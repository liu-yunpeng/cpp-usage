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
#include <algorithm>
#include <unordered_map>
#include <sstream>
using namespace std;

typedef long long ll;

int main()
{
    vector<int> sum({1, 2, 5, 8, 9, 13, 140, 2, 4, 5, 15, 16, 17});
    int low = 0, mid = 7, high = 13; // high has to go over
    //Merges two consecutive sorted ranges [first, middle) and [middle, last) into one sorted range [first, last)

    inplace_merge(sum.begin() + low, sum.begin() + mid, sum.begin() + high);

    for (int i : sum) cout << i << endl;

    return 0;
}
