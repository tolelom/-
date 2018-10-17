#include <iostream>
#include<vector>

using namespace std;

class KiwiJuiceEasy {
public:
	vector <int> thePouring(vector <int> capacities, vector <int> bottles, vector <int> fromId, vector <int> toId) {
		for (int i = 0; i < fromId.size; i++) {
			int f = fromId[i];
			int t = toId[i];
			int space = capacities[t] - bottles[t];
			if (space >= bottles[f]) { //�̻� ���� ��  
				bottles[t] += bottles[f];
				bottles[f] = 0;
			}
			else {//���� ���� �� (��ħ) �ؼ� �ذ��ϸ� �� �� 
				bottles[t] += space;
				bottles[f] -= space;
			}
		}
		return bottles;
	}
};