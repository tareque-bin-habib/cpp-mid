// Why do we need dynamic memory allocation?

// Dynamic memory allocation is necessary in programming for several reasons. Firstly, it allows for the creation of data structures with variable sizes, such as linked lists or resizable arrays, enabling efficient memory utilization. Secondly, it enables the allocation of memory for objects that need to persist beyond the scope of a function or block. Additionally, dynamic memory allocation facilitates the creation of dynamic data structures like trees or graphs. It also allows for the allocation of memory based on runtime conditions, providing flexibility in handling varying data requirements. Finally, dynamic memory allocation enables efficient memory management by allowing deallocation when objects are no longer needed, preventing memory leaks.

// examples

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int *dynamicInt = new int;

    *dynamicInt = 10;

    // Print the value
    cout << "Dynamic Integer Value: " << *dynamicInt << endl;

    // Deallocate the memory
    delete dynamicInt;

    return 0;
}