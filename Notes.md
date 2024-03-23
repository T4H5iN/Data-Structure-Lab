## Introduction

***Data Structure*** is the way of arranging data in computers main memory.

![image](https://github.com/T4H5iN/Data-Structures/assets/77932280/597d9674-ea84-4125-bf09-a279c17e27c8)

**Operations to be performed on Data Structure:**

1. Traverse
2. Insert
3. Delete
4. Search
5. Sort
6. Merge

## Array Data Structure

![image](https://github.com/T4H5iN/Data-Structures/assets/77932280/079b95de-c2c1-4f4f-892e-86572304ad8b)

> Address of _i<sup>th</sup>_ memory = Base address of the memory + (size of a memory ward x value of _i_)

![image](https://github.com/T4H5iN/Data-Structures/assets/77932280/e0c8b16d-ab34-40be-ada6-2f4325a0a55f)

> Address of _i<sup>th</sup>_ memory of **arr[_r_][_c_]** array in row major order = Base address of the memory + size of a memory ward x (_r_ x total number of columns + _c_)

> Address of _i<sup>th</sup>_ memory of **arr[_r_][_c_]** array in column major order = Base address of the memory + size of a memory ward x (_c_ x total number of rows + _r_)

### 1. Traverse
```cpp
    for (int i = 0 ; i < n ; i++) {
        //Traversing the array
    }
```
### 2. Insert
```cpp
    a[n+1];
    // Insert at the beginning
    for (i = n; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = k;

    // Insert in the middle
    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = k;

    // Insert at the end
     a[n] = k;
```
### 3. Delete
```cpp
    for (i = position; i < n - 1; i++) {
         a[i] = a[i + 1];
    }
    n--;
```
### 4. Search
#### Linear Search
```cpp
    for (int i = 0 ; i < n ; i++) {
        if (a[i] == key){
            // data found
        }
    }
```
#### Binary Search
```cpp
    while (start <= end) {
        mid = (start + end) / 2;
        if (k == arr[mid])        break;
        else if (k < arr[mid])    end = mid - 1;
        else if (k > arr[mid])    start = mid + 1;
    }
```
### 5. Sort
#### Selection Sort
```cpp
    for (step = 0; step < n - 1 ; step++) {
        firstPos = step;
        minValue = a[firstPos];
        minPos = firstPos;
        for (i = firstPos + 1; i < n; i++) {
            if (a[i] < minValue) {
                minValue = a[i];
                minPos = i;
            }
        }
        swap(a[firstPos], a[minPos]);
    }
```
#### Bubble Sort
```cpp
    for (step = 1; step < n ; step++) {
        for (i = 0; i < n - step; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
```
#### Insertion Sort
```cpp
    for (step = 1; step < n ; step++) {
        firstElement = a[step];
        i = step - 1;

        while (firstElement < a[i]) {
            a[i + 1] = a[i];
            i--;
        }

        a[i + 1] = firstElement;
    }
```

## Recursion

### Factorial
```cpp
    int factorial(int n) {
        if (n == 1)    return 1;
        return n * factorial(n - 1);
    }
```
### Sum of  _n<sup>th</sup>_ natural number
```cpp
    int factorial(int n) {
        if (n == 1)    return 1;
        return n + factorial(n - 1);
    }
```

### Fibonacci 
```cpp
    int fibonacci(int n) {
        if (n == 0)    return 0;
        if (n == 1)    return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
```

## Pointer
```cpp
    // 1 level integer pointer
    int *p;
    p = &x;
    *p = 20;
    x = 500;

    // 2 level integer pointer
    int **q;
    q = &p;

    // 3 level integer pointer
    int ***r;
    r = &q;
    ***r = 2000;
```

## Structure



## Linked List

### Traverse
```cpp
    head->data = x;
    prev_node = head;
    for (int j = 2; j <= n; j++) {
        cin >> x;
        new_node = new node;
        new_node->data = x;
        prev_node->next = new_node;
        prev_node = new_node;
    }
    for (i = head; i != NULL; i = i->next) {
        if (i->data == y) {
            // data found
        }
    }
```

### Insert
```cpp
    if (position == 1) {
        new_node->next = head;
        head = new_node;
    }
    if (position > 1) {
        i = head;
        for (int k = 1; k < position - 1; k++) {
            i = i->next;
        }
        new_node->next = i->next;
        i->next = new_node;
    }

    /*
        Standalone condition to insert data at the end of the linked list.

        for (i = head; i->next != NULL; i = i->next) {}
        i->next = new_node;
    */
```

### Delete
```cpp
    if (position == 1) {
        temp = head;
        head = head->next;
        delete temp;
    }
    if (position > 1) {
        i = head;
        for (int k = 1; k <= position - 1; k++) {
            prev_node = i;
            i = i->next;
        }
        next_node = i->next;
        prev_node->next = next_node;
        delete i;
    }

    /*
        Standalone condition to delete data from the end of the linked list.

        for (i = head; i->next != NULL; i = i->next) {
            prev_node = i;
        }
        prev_node->next = NULL;
        delete i;
    */
```