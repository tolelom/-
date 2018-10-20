#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class FriendScope {
public:
	int highestScore(vector <string> friends) {
		int ans = 0;
		int n = friends[0].length();
		for (int i = 0; i < n; i++) {  //각각의 수를 조사
			int c = 0;

			for (int j = 0; j < n; j++) {
				if (i == j)
					continue;

				if (friends[i][j] == 'Y') {
					c++;
				}
				else {
					for (int z = 0; j < n; z++) { //친친구
						if (friends[z][j] == 'Y' && friends[i][z] == 'Y') {
							c++;
							break;
						}
					}
				}

			}
			ans = max(ans, c);
		}

		return ans;
	}
};