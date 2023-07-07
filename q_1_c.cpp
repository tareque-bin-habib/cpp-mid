// How to create a dynamic array

// To create a dynamic array in C++, you can use the new keyword along with the desired data type and size;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size = 5;
    int *dynamicArray = new int[size];
    return 0;
}

// Benefits of dynamic array

// There are so many benefits of dynamic array. firstly Variable Size: Dynamic arrays allow for the allocation of memory based on runtime needs, providing flexibility in handling varying data sizes, secondly Efficient Memory Usage: Dynamic arrays utilize memory efficiently by allocating only the necessary amount of memory, optimizing resource usage,thirdly Dynamic Resizing: Dynamic arrays can be resized during runtime, allowing for the addition or removal of elements as needed, providing flexibility in managing data.
