#include <string>

using namespace std;

class ThePalindrome {
public:
	int find(string s) {
		for (int i = s.size();; i++) {
			bool flag = true;
			for (int j = 0; j < s.size(); j++) {
				if ((i - j - 1) < s.size() && s[j] != s[s - j - 1]) {//ÀÌ°Å ÀÓ
					flag = false;
					break;
				}
			}

			if (flag) {
				return i;
			}

		}
	}
};