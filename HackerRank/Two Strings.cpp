#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2) {
   
    map<char, int> hashmap;
    
    for (int i = 0; i < s1.length(); i++)
    {
        hashmap[s1[i]] = i;
    }

    for (int j = 0; j < s2.length(); j++)
    {
        if (hashmap.find(s2[j]) != hashmap.end())
        {
            return "YES";
        }
        else
        {
            continue;
        }
    }
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
