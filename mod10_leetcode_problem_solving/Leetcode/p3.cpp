/*
20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"

Output: true

Example 2:

Input: s = "()[]{}"

Output: true

Example 3:

Input: s = "(]"

Output: false

Example 4:

Input: s = "([])"

Output: true

 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.

*/

#include<iostream>
using namespace std;

class Solution {
    int firstBracketOpen, secondBracketOpen, thirdBracketOpen;

public:
    bool isValid(string s) {
        firstBracketOpen = secondBracketOpen = thirdBracketOpen = 0;
        string lastOpenBrackets = "";
        
        for (int i = 0; i < s.size(); i++) {
            if (!processChar(s[i], lastOpenBrackets)) {
                return false;
            }
        }

        return (firstBracketOpen == 0 && secondBracketOpen == 0 && thirdBracketOpen == 0);
    }

    bool processChar(char ch, string &lastOpenBrackets) {
        switch (ch) {
            case '(':
                firstBracketOpen++;
                lastOpenBrackets.push_back('(');
                break;

            case ')':
                if (firstBracketOpen == 0 || lastOpenBrackets.empty() || lastOpenBrackets.back() != '(') return false;
                firstBracketOpen--;
                lastOpenBrackets.pop_back();
                break;

            case '[': 
                secondBracketOpen++;
                lastOpenBrackets.push_back('[');
                break;

            case ']': 
                if (secondBracketOpen == 0 || lastOpenBrackets.empty() || lastOpenBrackets.back() != '[') return false;
                secondBracketOpen--;
                lastOpenBrackets.pop_back();
                break;

            case '{':
                thirdBracketOpen++;
                lastOpenBrackets.push_back('{');
                break;

            case '}':
                if (thirdBracketOpen == 0 || lastOpenBrackets.empty() || lastOpenBrackets.back() != '{') return false;
                thirdBracketOpen--;
                lastOpenBrackets.pop_back();
                break;

            default:
                return false;
        }
        return true;
    }
};
