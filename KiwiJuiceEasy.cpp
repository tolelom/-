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
			if (space >= bottles[f]) { //이상 없을 때  
				bottles[t] += bottles[f];
				bottles[f] = 0;
			}
			else {//문제 있을 때 (넘침) 해서 해결하면 될 듯 
				bottles[t] += space;
				bottles[f] -= space;
			}
		}
		return bottles;
	}
};