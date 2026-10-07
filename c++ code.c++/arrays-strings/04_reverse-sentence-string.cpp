#include <bits/stdc++.h>
using namespace std;

void sentenceformation(string s)
{
    vector<string> words;
    stringstream ss(s);
    string word;

    while (ss >> word)
    {
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    for (auto w : words)
    {
        cout << w << " ";
    }
}

int main()
{
    string s;
    cout << "enter sentence:";
    getline(cin, s);

    sentenceformation(s);

    return 0;
}