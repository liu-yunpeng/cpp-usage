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
using namespace std;

typedef long long ll;

/*
try not to pass a statically allocated array by reference
need template to catch array size at compile time
array does not significantly outperform vector, according to
https://github.com/isocpp/CppCoreGuidelines/issues/493
*/

int function_name(vector<int>& arr) {
	for (auto i : arr	)
	{
		cout << i << endl;
	}
	arr[0] = 8;

	return 0;
}

int function_name2(vector<int> arr) {
	for (auto i : arr	)
	{
		cout << i << endl;
	}
	arr[0] = 8;

	return 0;
}



void pass_param(int * x);
void pass_param(int x[]);

void pass_param3(int x[100]) {
	// ridicously, this still accepts array of any size
	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[2] << endl;
}

int main(int argc, char const *argv[])
{
	cout << "pass by ref" << endl;
	vector<int> arr = {1, 2, 3, 4};
	function_name(arr);
	cout << "after func proc" << endl;
	for (auto i : arr	)
	{
		cout << i << endl;
	}

	cout << "pass by value" << endl;	// pass by value
	vector<int> arr2 = {1, 2, 3, 4};
	function_name2(arr2);
	cout << "after func2 proc" << endl;
	for (auto i : arr2	)
	{
		cout << i << endl;
	}

	cout << "" << endl;
	int a[3] = {1, 2, 3};
	pass_param3(a);

	cout << __cplusplus << endl;
	return 0;
}