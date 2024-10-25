#include <iostream>
#include <vector>
#include "benchmark.h"
using namespace std;

vector<long long> divisors(long long number) {
	vector<long long> result;
	for (long long i = 1; i <= number; i++) {
		if (number % i == 0) {
			result.push_back(i);
		}
	}
	return result;
}
int main() {
	cout << "Enter an integer number:";
	long long number;
	cin >> number;
	Benchmark <std::chrono::nanoseconds> t;
	vector<long long> div = divisors(number);
	int duration = t.elapsed();
	cout << "Divisors of " << number << " are: ";
	for (int i = 0; i < div.size(); ++i) {
		cout << div[i] << " ";
	}
	cout << "Execution time: " << duration << " nanoseconds" << endl;
	return 0;
}