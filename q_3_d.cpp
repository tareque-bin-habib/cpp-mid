#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    // Constructor
    Person(string n, float h, int a)
    {
        name = n;
        height = h;
        age = a;
    }
};

int main()
{
    Person student1("Tareque", 2.75f, 24);
    Person student2("Karim Ullah", 3.45f, 26);

    Person highestAge = student1;

    if (student2.age > student1.age)
    {
        highestAge = student2;
    }

    cout << highestAge.name << endl;
    return 0;
}