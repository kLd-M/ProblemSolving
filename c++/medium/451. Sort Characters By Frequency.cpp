#include <queue>
#include <string>
#include <utility>
using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        std::priority_queue<std::pair<int, char>> PQ;
        int freqArr[256] = {};
        string result;

        for(auto c : s) {
            freqArr[static_cast<unsigned char>(c)]++;
        }

        for(int i = 0; i < 256; i++) {
            if(freqArr[i] > 0) {
                PQ.push({freqArr[i], static_cast<char>(i)});
            }
        }

        while(!PQ.empty()) {
            auto p = PQ.top();
            PQ.pop();
            result.append(string(p.first, p.second));
        }

        return result;
    }
};