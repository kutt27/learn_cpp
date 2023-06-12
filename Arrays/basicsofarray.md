## Array

An array is a data structure that allows you to store multiple values of the same type in a contiguous block of memory. In C++, arrays are declared using the following syntax:

```C++
array_data_type array_name[size];
```

For example we are declaring an array of integers with size 10:

```C++
int arr[10];
```

**Direct Initialization**
```C++
string names[] = { "John", "Mary", "Peter", "Susan", "David" };
```

[Learn More About Declarations]()

Once an array has been declared, you can access its elements using the following syntax:

```C++
arr[index];
```

For example, the following code prints the value of the first element in the `numbers` array:

```C++
cout << arr[10];
```

The size of an array cannot be changed once it has been declared. If you need to store more data than the array can hold, you can create a new array with a larger size.

Arrays are a powerful tool that can be used to store and manipulate large amounts of data. However, they are also a complex data structure, and it is important to understand how they work before using them.

Here are some additional things to keep in mind about arrays in C++:

- Arrays are zero-indexed, which means that the first element in the array is at index 0.
- Arrays can be passed to functions as arguments.
- Arrays can be returned from functions.
- Arrays can be used to create dynamic data structures, such as linked lists and trees.