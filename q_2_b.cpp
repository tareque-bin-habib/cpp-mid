// What is a constructor and why do we need this?

// A constructor in C++ is a special member function of a class that is called automatically when an object of that class is created.It is used to initialize the object's data members and perform any necessary setup operations.We need constructors for the following reasons:
// 1.Object Initialization: Constructors ensure that objects are properly initialized with valid values for their data members, avoiding the use of uninitialized variables.
// 2.Encapsulation: Constructors help enforce encapsulation by providing a way to initialize private data members of a class.
// 3.Default Values: Constructors can set default values for the object's data members, allowing flexibility when creating objects.
// 4.Object Creation: Constructors provide a convenient way to create objects by specifying the required initialization parameters in a single line of code
// 5.Overloading: Constructors can be overloaded, enabling the creation of objects with different initialization options or parameter combinations.

// Example
#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;

    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

int main()
{
    Person person1("Tareque", 25);

    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    return 0;
}