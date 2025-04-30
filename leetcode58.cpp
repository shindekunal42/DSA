LeetCode Logo
Problem List


0
DCC Badge
Solve today's Daily Challenge to refresh your streak!

avatar
Avatar
Kunal456
Access all features with our Premium subscription!
myLists
My Lists
notebook
Notebook
submissions
Submissions
progress
Progress
points
Points
Try New Features
Orders
My Playgrounds
Settings
Classic Mode
Appearance
Sign Out
Premium
Debugging...
Debugging...







Run
Description
Description
Accepted
Solutions
Solutions
Submissions
Submissions
Editorial
Editorial
Code


Testcase
Testcase
Test Result
C++
Auto





85673412
            // If we hit a space after counting, the last word has ended
            if (count > 0)
                return count;
        }
    }

    return count;
}

};
Saved
Accepted
Runtime: 0 ms
Case 1
Case 2
Case 3
Input
s =
"luffy is still joyboy"
Output
6
Expected
6
Contribute a testcase
All Submissions

Accepted
60 / 60 testcases passed
Kunal456
Kunal456
submitted at May 01, 2025 00:06

Editorial

Solution
Runtime
0
ms
Beats
100.00%
Analyze Complexity
Memory
8.95
MB
Beats
31.95%
Analyze Complexity
Code
C++
class Solution {
public:
    int lengthOfLastWord(string s) {
    int count = 0;

    for (int i = s.length() - 1; i >= 0; i--) {
        if (s[i] != ' ') {
            // Count the letters in the last word
            count++;
        } else {
            // If we hit a space after counting, the last word has ended
            if (count > 0)
                return count;
        }
    }

    return count;
}

};
View more
More challenges
3076. Shortest Uncommon Substring in an Array
266. Palindrome Permutation
2194. Cells in a Range on an Excel Sheet
Write your notes here
Select related tags
0/5
Search questions


