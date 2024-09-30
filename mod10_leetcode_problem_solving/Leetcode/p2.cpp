
/*
14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/ 


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string shrinkedString = strs[0];
        for (int i = 1; i<strs.size(); i++){
            shrinkedString = commonInTwo(strs[i], shrinkedString);
        }
        return shrinkedString;
    }

    string commonInTwo(string a, string b){
        if (a==b) return a;
        int smallerLength = (sizeof(a) > sizeof(b))? sizeof(a) : sizeof(b);
        string res = "";
        for (int i = 0; i < smallerLength; i++){
            if (a[i] != b[i]) return res;
            res += a[i];

        }
        return res;
    }
};

// OR 

class Solution2 {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        string prefix = strs[0];
        
        for (int i = 1; i < strs.size(); i++) {
            prefix = commonPrefix(prefix, strs[i]);
            if (prefix.empty()) break; 
        }
        return prefix;
    }

private:
    string commonPrefix(const string& a, const string& b) {
        int minLength = min(a.size(), b.size());
        int i = 0;
        
        while (i < minLength && a[i] == b[i]) {
            i++;
        }
        return a.substr(0, i);
    }
};
