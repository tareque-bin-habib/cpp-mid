// Yes, it is possible to return a static object from a function in C++.

#include <bits/stdc++.h>
using namespace std;
class myEx
{
public:
    int value;

    myEx(int v)
    {
        value = v;
    }
};

myEx &getStaticObject()
{
    static myEx staticObj(42);
    return staticObj;
}

int main()
{
    myEx &returnedObj = getStaticObject();

    cout << "Object Value: " << returnedObj.value << endl;

    return 0;
}