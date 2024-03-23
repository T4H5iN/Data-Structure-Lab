## Introduction

***Data Structure*** is the way of arranging data in computers main memory.

<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/16ed749f-71f4-4b90-9f7d-b0b29c9245ce"/></p>

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
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/0d9e9c73-e7b7-47dd-9792-97bed0e2bfca"/></p>

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
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/7e26a85d-4c3c-4b90-88c7-dc033af00160"/></p>

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
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/304e9cd6-2eb4-4f82-a872-c05c75b9618b" /></p>

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
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/7ecc819e-d9a2-497a-b08b-00dbbc89c707"/></p>

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
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/891485f3-fcf3-4f82-89a8-965226a600c3"/></p>

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
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/04de64ad-295f-4271-ab54-21a14b0f7656"/></p>

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
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/dd14990d-9f28-4bf6-84fa-22817fd15beb"/></p>

```cpp
    int fibonacci(int n) {
        if (n == 0)    return 0;
        if (n == 1)    return 1;
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
```

### Power
```cpp
    int Power(int a, int b) {
        if (b == 1){
            return a;
        }
        if (b % 2 == 0) {
            int pow = Power(a, b / 2);
            return pow * pow;
        } else if (b % 2 == 1) {
            return (a * Power(a, b - 1));
        }
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
```cpp
    struct student {
        i// declare variables
    
        void input() {
            // take input
        }
    
        void give_introduction() {
            // give output
        }
    };
```

## Linked List Data Structure

### 1. Traverse
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

### 2. Insert
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/a1189f46-a268-4b65-b71c-867aa2533a10"/></p>

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

### 3. Delete
<p align="center"><img src="https://github.com/T4H5iN/Data-Structures/assets/77932280/8c90c075-eaa7-48cf-8b60-207e6b38cde9"/></p>


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
