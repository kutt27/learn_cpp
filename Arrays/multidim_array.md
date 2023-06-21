### Multi-Dimensional Array

A multidimensional array is an array of arrays. It can be two dimensional, three dimensional, or even more. A two-dimensional array is also known as a matrix.

To declare a multidimensional array in C++, you need to specify the variable type, the name of the array, and the number of elements in each dimension. For example, the following code declares a two-dimensional array of integers:

```C++
int numbers[3][4];
Use code with caution. Learn more
This array has 3 rows and 4 columns, for a total of 12 elements.
```

You can initialize a multidimensional array in the same way as a regular array. For example, the following code initializes the numbers array to all zeros:

```C++
int numbers[3][4] = {
  {0, 0, 0, 0},
  {0, 0, 0, 0},
  {0, 0, 0, 0}
};
```

To access an element of a multidimensional array, you need to specify the index number for each dimension. For example, the following code accesses the element in the first row and second column of the numbers array:

```C++
int number = numbers[0][1];
```

This will set the variable number to the value 0.

You can also use a nested for loop to access all the elements of a multidimensional array. For example, the following code prints all the elements of the numbers array:

```C++
for (int i = 0; i < 3; i++) {
  for (int j = 0; j < 4; j++) {
    cout << numbers[i][j] << " ";
  }
  cout << endl;
}
```

This code will print the following output:

```
0 0 0 0
0 0 0 0
0 0 0 0
```

Here are some additional things to keep in mind about multidimensional arrays in C++:

The size of a multidimensional array is the product of the sizes of the individual dimensions. For example, the numbers array has a size of 3 * 4 = 12.
Multidimensional arrays are stored in row-major order. This means that the elements in the first row are stored first, followed by the elements in the second row, and so on.

You can use the sizeof() operator to get the size of a multidimensional array.