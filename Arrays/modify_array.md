## Accessing and Modifying Array Elements

### Introduction

An array is a data structure that stores a collection of data items of the same type. The data items in an array are arranged in a sequence, and each data item has a unique index.

### Accessing Array Elements

To access an element in an array, you can use its index. An index is a number that indicates the position of the element in the array. For example, if you have an array of five elements, the index of the first element is 0, the index of the second element is 1, and so on.

You can access an element in an array using the bracket notation. The syntax for accessing an element in an array is:

```C++
array_name[index]
```

For example, the following code will access the first element in the array `my_array`:

```C++
my_array[0]
```

### Modifying Array Elements

You can modify an element in an array by assigning a new value to it. The syntax for assigning a new value to an element in an array is:

```C++
array_name[index] = new_value
```

For example, the following code will modify the first element in the array my_array to the value 10:

```C++
my_array[0] = 10
```

### Example

The following code shows how to access and modify array elements:

Create an array of five elements:

```C++
my_array[5] = {1, 2, 3, 4, 5}
```

Access the first element in the array

```C++
first_element = my_array[0]
```

Print the value of the first element

```C++
cout << first_element;
```

Modify the first element in the array

```C++
my_array[0] = 10
```

Print the value of the first element again

```C++
cout << my_array[0];
```

This code will print the following output:

```
1
10
```
