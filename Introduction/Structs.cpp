// Challenge name: Structs
// Subdomain: C++ (Introduction)
// Difficulty: Easy
// Concepts: Structs, User-Defined Data Types, Standard Input/Output, Data Members, Basic Data Types
// Platform: HackerRank

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct Student
{
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}