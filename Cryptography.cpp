#include <vector>
#include <algorithm>
using namespace std;

class Cryptography {
public:
	long long encrypt(vector <int> numbers) {
		long long ans = 1;

		sort(numbers.begin(), numbers.end());
		numbers[0]++;

		for (int i = 0; i < numbers.size(); I++) {
			ans *= numbers[i];
		}

		return ans;
	}
};