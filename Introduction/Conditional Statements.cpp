// Challenge name: Conditional Statements
// Subdomain: C++ (Control Flow / Introduction)
// Difficulty: Easy
// Concepts: if-else statements, conditional logic, array mapping, Standard Streams (<iostream>)
// Platform: HackerRank

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if(n >= 1 && n <= 9)
    {
        string words[] ={"one","two","three","four","five","six","seven","eight","nine"};
        cout << words[n-1] << endl;
    }
    else if (n > 9)
    {
        cout << "Greater than 9" << endl;
    }
        return 0;
        
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
