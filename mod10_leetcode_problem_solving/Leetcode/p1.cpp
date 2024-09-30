#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> ans;
        for (int i = 0; i < arr.size(); i++) {
            ans[arr[i]]++;
        }

        set<int> freq;
        for (auto it : ans) {
            // this condn check simply means, if *** is happenning means the
            // elemntary frequency is not found in the set freq, then only insert in the next line
            // *** if elemt is not found, freq.find(it.second) returns freq.end(). Then 
            // freq.find(it.second) != freq.end() => FALSE, so it inserts in the next line

            if (freq.find(it.second) != freq.end()) {
                return false;
            }
            
            freq.insert(it.second);
        }
        return true;
    }
};