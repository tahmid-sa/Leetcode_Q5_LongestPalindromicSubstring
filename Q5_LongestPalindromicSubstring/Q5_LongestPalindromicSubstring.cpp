#include <iostream>
#include <vector>

using namespace std;

string longestPalindrome(string s) {
    string sub = "", currSub = "";

    if (sub.size() == 1) {
        return s;
    }


    for (int i = 0; i < s.size(); i++) {
        currSub = "";
        int k = i, tmpJ, startJ;

        for (int j = s.size() - 1, startJ = j; j >= k; j--) {
            if (s[k] == s[j]) {
                if (k == i) {
                    tmpJ = j - i + 1;
                    startJ = j;
                }

                k++;
                currSub = s.substr(i, tmpJ);
            }
            else if (s[k] != s[j]) {
                if (k > i) {
                    j = startJ;
                }
                k = i;

                currSub = "";
                tmpJ = 0;
            }
        }

        if (sub.size() < currSub.size()) {
            sub = currSub;
        }
    }

    return sub;
}

int main()
{
    string s = "dddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd";

    cout << longestPalindrome(s);

    return 0;
}