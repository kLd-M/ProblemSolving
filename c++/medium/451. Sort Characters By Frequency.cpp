//Approach: Use a priority queue of type Pair to sort characters by frequency.
// use a frequency array to count occurrences of each character
// loop around the string to populate the frequency array
// push each character and its frequency into the priority queue
// pop elements from the priority queue to build the result string
// Time Complexity: O(n log n) where n is the length of the string

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