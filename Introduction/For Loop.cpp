// Challenge name: For Loop
// Subdomain: C++ (Introduction)
// Difficulty: Easy
// Concepts: For Loops, Conditional Statements (if/else), Iteration, Range, Modulo Operator
// Platform: HackerRank

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i = 0, a = 0, b = 0;
    
    cin >> a >> b;
    for(i = a; i <= b; i++)
    {
        if (i >= 1 && i <= 9)
        {
            string words[] ={"one","two","three","four","five","six","seven","eight","nine"};
            cout <<  words[i-1] << endl;
        }
        else if (i > 9 && i % 2 == 0)
        {
            cout << "even" << endl;
        }
        else if (i > 9 && i % 2 != 0)
        {
            cout << "odd" << endl;
        }
    }
    return 0;
}