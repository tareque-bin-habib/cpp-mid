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

    Person *person1 = new Person("Habib", 1.75f, 30);

    cout << "Name: " << person1->name << endl;
    cout << "Height: " << person1->height << endl;
    cout << "Age: " << person1->age << endl;

    delete person1;
    return 0;
}