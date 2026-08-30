

# Complete DSA Notes in C — From 

## 0. Prerequisites

Before DSA, you should be comfortable with:

1. Variables and data types
2. Operators
3. `if`, `else`, `switch`
4. Loops
5. Functions
6. Arrays
7. Strings
8. Pointers
9. Structures
10. Dynamic memory allocation


---




# PART A — C PROGRAMMING

## 1. Basic C Structure

```c
#include <stdio.h>

int main() {
    printf("Hello World");
    return 0;
}
```


### Important parts





| Component            | Purpose                       |
| -------------------- | ----------------------------- |
| `#include <stdio.h>` | Includes standard I/O library |
| `main()`             | Program execution starts here |
| `printf()`           | Output                        |
| `return 0`           | Successful termination        |

---


# 2. Variables and Data Types


### Basic data types

```c
int age = 20;
char grade = 'A';
float price = 10.5;
double pi = 3.141592;
```

### Typical sizes

| Type     | Typical size |
| -------- | -----------: |
| `char`   |       1 byte |
| `int`    |      4 bytes |
| `float`  |      4 bytes |
| `double` |      8 bytes |


> Exact sizes are implementation-dependent; use `sizeof()` when you need certainty.

```c
printf("%zu", sizeof(int));
```

---

# 3. Input and Output

```c
int n;
scanf("%d", &n);

printf("%d", n);
```

### Format specifiers

| Data     | Specifier        |
| -------- | ---------------- |
| `int`    | `%d`             |
| `char`   | `%c`             |
| `float`  | `%f`             |
| `double` | `%lf` in `scanf` |
| string   | `%s`             |

---

# 4. Operators


### Arithmetic


```text
+  -  *  /  %
```

### Relational

```text
<  >  <=  >=  ==  !=
```

### Logical

```text
&&   ||   !
```

### Increment/decrement

```c
i++;
i--;
++i;
--i;
```

### Bitwise

```text
&   AND
|   OR
^   XOR
~   NOT
<<  left shift
>>  right shift
```

---

# 5. Conditional Statements

```c
if (condition) {
    // statements
}
else {
    // statements
}
```

### Example

```c
if (n % 2 == 0)
    printf("Even");
else
    printf("Odd");
```

---

# 6. Loops

## `for`

```c
for(int i = 0; i < n; i++) {
    printf("%d ", i);
}
```

## `while`

```c
while(n > 0) {
    printf("%d", n);
    n--;
}
```

## `do-while`

```c
do {
    printf("%d", n);
    n--;
} while(n > 0);
```

### `break`

Terminates loop.

### `continue`

Skips current iteration.

---

# 7. Functions

```c
int add(int a, int b) {
    return a + b;
}
```

Calling:

```c
int result = add(5, 3);
```

### Function components

```text
return_type
function_name
parameters
return value
```

---

# 8. Recursion

A function calling itself is **recursion**.

```c
int factorial(int n) {
    if(n == 0)
        return 1;

    return n * factorial(n - 1);
}
```

### Two essential parts

1. Base condition
2. Recursive call

Without a base case → infinite recursion → stack overflow.

---

# 9. Arrays

An array stores elements of the same type in contiguous memory.

```c
int arr[5] = {10, 20, 30, 40, 50};
```

Index:

```text
0  1  2  3  4
```

Access:

```c
printf("%d", arr[2]);
```

Output:

```text
30
```

---

# 10. 2D Arrays

```c
int matrix[3][3];
```

Example:

```c
int a[2][3] = {
    {1,2,3},
    {4,5,6}
};
```

Access:

```c
a[1][2]
```

→ `6`

---

# 11. Strings

C doesn't have a dedicated built-in string type.

A string is a character array terminated by `'\0'`.

```c
char name[] = "Ayush";
```

Internally:

```text
A y u s h \0
```

Useful functions:

```c
strlen()
strcpy()
strcmp()
strcat()
```

Header:

```c
#include <string.h>
```

---

# 12. Pointers ⭐

Pointers are extremely important for DSA in C.

A pointer stores the **address** of another variable.

```c
int x = 10;
int *p = &x;
```

Meaning:

```text
x  = 10
&p = address of x
*p = value stored at that address
```

Example:

```c
printf("%d", *p);
```

Output:

```text
10
```

---

# 13. Pointer Arithmetic

If:

```c
int arr[5];
int *p = arr;
```

Then:

```c
p++;
```

moves to the next integer element.

Conceptually:

```text
p       → arr[0]
p + 1   → arr[1]
p + 2   → arr[2]
```

The actual byte movement depends on `sizeof(*p)`.

---

# 14. Arrays and Pointers

```c
int arr[] = {10,20,30};
```

Generally:

```text
arr == &arr[0]
```

And:

```c
*(arr + i)
```

is equivalent to:

```c
arr[i]
```

---

# 15. Call by Value vs Pointer-Based Modification

C passes arguments by value.

```c
void change(int x) {
    x = 100;
}
```

Original variable doesn't change.

To modify the caller's variable:

```c
void change(int *x) {
    *x = 100;
}
```

Call:

```c
change(&a);
```

---

# 16. Structures

Structures group different data types.

```c
struct Student {
    int age;
    float marks;
    char grade;
};
```

Create:

```c
struct Student s;
```

Access:

```c
s.age = 20;
```

---

# 17. Dynamic Memory Allocation ⭐

Header:

```c
#include <stdlib.h>
```

### `malloc`

```c
int *arr = malloc(n * sizeof *arr);
```

### `calloc`

```c
int *arr = calloc(n, sizeof *arr);
```

### `realloc`

```c
arr = realloc(arr, new_size);
```

### `free`

```c
free(arr);
```

### Difference

| Function  | Main purpose                      |
| --------- | --------------------------------- |
| `malloc`  | Allocates uninitialized memory    |
| `calloc`  | Allocates zero-initialized memory |
| `realloc` | Resizes allocated memory          |
| `free`    | Releases memory                   |

Always check allocation success in robust programs.

---

# PART B — DATA STRUCTURES

# 18. What is a Data Structure?

A **data structure** is a way of organizing and storing data so that operations can be performed efficiently.

Examples:

```text
Array
Linked List
Stack
Queue
Tree
Heap
Hash Table
Graph
```

---

# 19. Abstract Data Type (ADT)

An ADT specifies:

* What data represents
* What operations are allowed

without necessarily specifying implementation.

Example:

### Stack ADT

Operations:

```text
push()
pop()
peek()
isEmpty()
```

A stack can be implemented using an array or linked list.

---

# 20. Time Complexity ⭐⭐⭐

Time complexity measures how running time grows with input size.

### Common complexities

```text
O(1)       Constant
O(log n)   Logarithmic
O(n)       Linear
O(n log n)
O(n²)      Quadratic
O(n³)
O(2ⁿ)      Exponential
O(n!)      Factorial
```

### Growth

```text
O(1)
 ↓
O(log n)
 ↓
O(n)
 ↓
O(n log n)
 ↓
O(n²)
 ↓
O(2ⁿ)
 ↓
O(n!)
```

---

# 21. Space Complexity

Measures additional memory required as input size increases.

Example:

```c
int x;
```

→ `O(1)` auxiliary space.

Creating:

```c
int arr[n];
```

→ `O(n)` space.

---

# 22. Big-O, Big-Ω and Big-Θ

### Big-O

Upper asymptotic bound.

### Big-Ω

Lower asymptotic bound.

### Big-Θ

Tight asymptotic bound.

For:

```text
3n² + 5n + 10
```

dominant term:

```text
n²
```

Therefore:

```text
Θ(n²)
```

---

# PART C — ARRAY

## 23. Array Operations

For an array:

```text
Access       O(1)
Search       O(n)
Insertion    O(n)
Deletion     O(n)
```

If the array is sorted:

```text
Binary search → O(log n)
```

---

# 24. Linear Search

```c
int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }

    return -1;
}
```

Complexity:

```text
Best:  O(1)
Worst: O(n)
```

---

# 25. Binary Search ⭐

Works on a **sorted** array.

```c
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(arr[mid] == key)
            return mid;

        if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
```

Complexity:

```text
O(log n)
```

---

# PART D — LINKED LIST

# 26. Linked List

A linked list consists of nodes.

```text
[data | next] → [data | next] → [data | NULL]
```

Node:

```c
struct Node {
    int data;
    struct Node *next;
};
```

---

# 27. Creating a Node

```c
struct Node *newNode(int data) {
    struct Node *node =
        malloc(sizeof *node);

    node->data = data;
    node->next = NULL;

    return node;
}
```

---

# 28. Traversing Linked List

```c
void display(struct Node *head) {
    struct Node *temp = head;

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
```

---

# 29. Insert at Beginning

```c
newNode->next = head;
head = newNode;
```

Complexity:

```text
O(1)
```

---

# 30. Insert at End

Traverse to last node and connect new node.

Complexity:

```text
O(n)
```

With a tail pointer:

```text
O(1)
```

---

# 31. Delete from Beginning

```c
temp = head;
head = head->next;
free(temp);
```

Complexity:

```text
O(1)
```

---

# 32. Types of Linked Lists

### Singly

```text
A → B → C → NULL
```

### Doubly

```text
NULL ← A ↔ B ↔ C → NULL
```

### Circular

```text
A → B → C
↑       ↓
└───────┘
```

---

# PART E — STACK

# 33. Stack

Stack follows:

**LIFO — Last In, First Out**

Example:

```text
     30 ← TOP
     20
     10
```

Operations:

```text
push
pop
peek
```

---

# 34. Stack Using Array

```c
#define MAX 100

int stack[MAX];
int top = -1;
```

### Push

```c
void push(int x) {
    if(top == MAX - 1)
        return;

    stack[++top] = x;
}
```

### Pop

```c
int pop() {
    if(top == -1)
        return -1;

    return stack[top--];
}
```

Both:

```text
O(1)
```

---

# 35. Applications of Stack

Very important:

* Function calls
* Recursion
* Parentheses matching
* Expression conversion
* Expression evaluation
* Undo operations
* DFS
* Backtracking

---

# 36. Infix, Prefix, Postfix

Example:

```text
A + B
```

### Infix

```text
A+B
```

### Prefix

```text
+AB
```

### Postfix

```text
AB+
```

Postfix is particularly useful for stack-based evaluation.

---

# PART F — QUEUE

# 37. Queue

Queue follows:

**FIFO — First In, First Out**

```text
Front → [10][20][30] ← Rear
```

Operations:

```text
enqueue
dequeue
front/peek
```

---

# 38. Queue Applications

* CPU scheduling
* Printer scheduling
* BFS
* Buffers
* Networking
* Task scheduling

---

# 39. Circular Queue

Normal array queue can waste space after deletions.

Circular queue connects the end back to the beginning.

Typical update:

```c
rear = (rear + 1) % MAX;
```

This gives efficient reuse of array positions.

---

# 40. Deque

**Double-ended queue**

Insertion and deletion are possible at both ends.

```text
Front ↔ [ elements ] ↔ Rear
```

---

# PART G — TREES

# 41. Tree

A hierarchical data structure.

Important terms:

```text
Root
Parent
Child
Leaf
Sibling
Depth
Height
Subtree
```

Example:

```text
        A
       / \
      B   C
     / \
    D   E
```

---

# 42. Binary Tree

Every node has at most **2 children**.

```c
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};
```

---

# 43. Tree Traversals ⭐⭐⭐

## Preorder

```text
Root → Left → Right
```

For:

```text
    A
   / \
  B   C
```

Result:

```text
A B C
```

---

## Inorder

```text
Left → Root → Right
```

Result:

```text
B A C
```

---

## Postorder

```text
Left → Right → Root
```

Result:

```text
B C A
```

---

# 44. Recursive Inorder

```c
void inorder(struct Node *root) {
    if(root == NULL)
        return;

    inorder(root->left);

    printf("%d ", root->data);

    inorder(root->right);
}
```

---

# 45. Level Order Traversal

Uses a **queue**.

```text
Root
 ↓
Level 1
 ↓
Level 2
```

For:

```text
        1
       / \
      2   3
     / \
    4   5
```

Output:

```text
1 2 3 4 5
```

Complexity:

```text
O(n)
```

---

# 46. Binary Search Tree — BST ⭐⭐⭐

For every node:

```text
Left subtree < Node < Right subtree
```

Example:

```text
       50
      /  \
    30    70
   / \    / \
 20 40  60 80
```

Searching average case:

```text
O(log n)
```

Worst case:

```text
O(n)
```

A skewed BST can behave like a linked list.

---

# 47. Important BST Property

**Inorder traversal of a BST gives sorted order.**

Example:

```text
20 30 40 50 60 70 80
```

---

# PART H — HEAP

# 48. Heap

A heap is a **complete binary tree** satisfying the heap property.

### Max Heap

Parent ≥ children.

```text
       50
      /  \
    30    40
```

### Min Heap

Parent ≤ children.

```text
       10
      /  \
    20    30
```

---

# 49. Array Representation of Heap

For **0-based indexing**:

```text
Parent(i) = (i - 1) / 2
Left(i)   = 2i + 1
Right(i)  = 2i + 2
```

For **1-based indexing**:

```text
Parent(i) = i / 2
Left(i)   = 2i
Right(i)  = 2i + 1
```

---

# 50. Heap Operations

| Operation   | Complexity |
| ----------- | ---------: |
| Peek        |       O(1) |
| Insert      |   O(log n) |
| Delete root |   O(log n) |
| Build heap  |       O(n) |

---

# PART I — HASHING

# 51. Hash Table

Stores data using a **hash function**.

```text
Key → Hash function → Index
```

Example:

```text
h(key) = key % table_size
```

---

# 52. Collision

When two keys map to the same index.

Example:

```text
h(10) = 0
h(20) = 0
```

Collision handling:

1. Chaining
2. Open addressing

---

# 53. Open Addressing

Common methods:

### Linear probing

```text
h(k), h(k)+1, h(k)+2...
```

### Quadratic probing

```text
h(k)+1²
h(k)+2²
h(k)+3²
```

### Double hashing

Uses a second hash function.

---

# PART J — GRAPHS

# 54. Graph

A graph consists of:

```text
Vertices + Edges
```

Example:

```text
A —— B
|    |
C —— D
```

---

# 55. Types of Graphs

### Directed

```text
A → B
```

### Undirected

```text
A — B
```

### Weighted

```text
A --5-- B
```

### Unweighted

Edges have no associated weight.

---

# 56. Graph Representation

## Adjacency Matrix

```c
int graph[V][V];
```

Space:

```text
O(V²)
```

Good for dense graphs.

---

## Adjacency List

Each vertex stores its neighbors.

Space:

```text
O(V + E)
```

Usually better for sparse graphs.

---

# 57. BFS ⭐⭐⭐

**Breadth First Search**

Uses:

**Queue**

Example:

```text
        A
       / \
      B   C
     / \
    D   E
```

BFS:

```text
A B C D E
```

Complexity with adjacency lists:

```text
O(V + E)
```

---

# 58. DFS ⭐⭐⭐

**Depth First Search**

Uses:

* Recursion, or
* Explicit stack

Example:

```text
A B D E C
```

Possible DFS ordering depends on neighbor ordering.

Complexity:

```text
O(V + E)
```

---

# 59. BFS vs DFS

| BFS                                  | DFS                                                |
| ------------------------------------ | -------------------------------------------------- |
| Queue                                | Stack/recursion                                    |
| Level-wise                           | Depth-wise                                         |
| Shortest path in unweighted graph    | Useful for connectivity/cycles/topological methods |
| Uses more memory on some wide graphs | Often uses less memory on wide graphs              |

---

# PART K — SORTING

# 60. Bubble Sort

Repeatedly swaps adjacent elements if they are in the wrong order.

```text
5 3 2
↓
3 5 2
↓
3 2 5
```

Typical worst case:

```text
O(n²)
```

---

# 61. Selection Sort

Find minimum and place it at correct position.

```text
[5 3 4 1]

minimum = 1

[1 3 4 5]
```

Complexity:

```text
O(n²)
```

---

# 62. Insertion Sort

Builds sorted portion one element at a time.

```text
5 | 3 4 1
```

Insert `3`:

```text
3 5 | 4 1
```

Insert `4`:

```text
3 4 5 | 1
```

Worst case:

```text
O(n²)
```

Best case:

```text
O(n)
```

Excellent for small or nearly sorted arrays.

---

# 63. Merge Sort ⭐⭐⭐

Divide array into halves.

```text
        [8 4 2 6]
          /   \
      [8 4] [2 6]
       / \    / \
      8  4   2  6
```

Then merge sorted pieces.

Complexity:

```text
Best    O(n log n)
Average O(n log n)
Worst   O(n log n)
```

Typical auxiliary space:

```text
O(n)
```

---

# 64. Quick Sort ⭐⭐⭐

Choose a pivot and partition the array.

```text
elements < pivot | pivot | elements > pivot
```

Average:

```text
O(n log n)
```

Worst:

```text
O(n²)
```

Worst-case recursion space can also become `O(n)` depending on partitioning.

---

# 65. Heap Sort

Uses a heap.

Complexity:

```text
Best    O(n log n)
Average O(n log n)
Worst   O(n log n)
```

---

# 66. Sorting Comparison

| Algorithm |                     Best |    Average |      Worst |
| --------- | -----------------------: | ---------: | ---------: |
| Bubble    | O(n) *with optimization* |      O(n²) |      O(n²) |
| Selection |                    O(n²) |      O(n²) |      O(n²) |
| Insertion |                     O(n) |      O(n²) |      O(n²) |
| Merge     |               O(n log n) | O(n log n) | O(n log n) |
| Quick     |               O(n log n) | O(n log n) |      O(n²) |
| Heap      |               O(n log n) | O(n log n) | O(n log n) |

---

# PART L — ALGORITHMIC TECHNIQUES

## 67. Divide and Conquer

Break problem into smaller subproblems.

```text
Problem
   ↓
Divide
   ↓
Solve
   ↓
Combine
```

Examples:

* Merge Sort
* Quick Sort
* Binary Search

---

# 68. Greedy Algorithm

Make the locally best choice at each step.

Examples:

* Activity selection
* Fractional knapsack
* Huffman coding
* Prim's algorithm
* Kruskal's algorithm
* Dijkstra's algorithm under its standard non-negative-edge condition

---

# 69. Dynamic Programming ⭐⭐⭐

Used when a problem has:

1. Overlapping subproblems
2. Optimal substructure

Two major approaches:

### Memoization

Top-down.

```text
Recursion + cache
```

### Tabulation

Bottom-up.

```text
Table → build from smaller cases
```

Example Fibonacci:

```text
F(n) = F(n-1) + F(n-2)
```

Naive recursion:

```text
O(2^n)
```

DP:

```text
O(n)
```

---

# 70. Backtracking

Build solution step-by-step and undo choices when they fail.

Examples:

* N-Queens
* Sudoku
* Permutations
* Subsets
* Maze problems

General structure:

```text
Choose
 ↓
Explore
 ↓
Undo
```

---

# PART M — IMPORTANT PROBLEM PATTERNS

For coding practice, master these patterns:

### Arrays

* Two pointers
* Sliding window
* Prefix sum
* Difference array
* Kadane's algorithm
* Binary search
* Sorting + scanning

### Strings

* Frequency counting
* Two pointers
* Sliding window
* Palindrome
* Pattern matching

### Linked Lists

* Fast/slow pointers
* Reverse linked list
* Detect cycle
* Merge two lists
* Find middle

### Stack

* Balanced parentheses
* Next greater element
* Previous greater element
* Monotonic stack
* Infix/postfix

### Trees

* Recursive traversal
* Iterative traversal
* Height
* Diameter
* Lowest common ancestor
* BST operations

### Graphs

* BFS
* DFS
* Connected components
* Cycle detection
* Topological sort
* Shortest paths
* MST

---

# PART N — ADVANCED DSA

After mastering the above, move to:

## 71. Trie

Used for prefix-based searching.

Applications:

```text
Autocomplete
Dictionary
Prefix search
Word problems
```

---

## 72. Disjoint Set Union — DSU

Also called **Union-Find**.

Operations:

```text
find()
union()
```

Optimizations:

```text
Path compression
Union by rank/size
```

Used heavily in:

**Kruskal's MST algorithm**

---

# 73. Minimum Spanning Tree

A spanning tree with minimum total edge weight.

Major algorithms:

### Prim's

Usually grows one tree.

### Kruskal's

Sort edges and use DSU.

Typical complexity:

```text
Kruskal → O(E log E)
```

---

# 74. Shortest Path Algorithms

| Algorithm      | Main use                  |
| -------------- | ------------------------- |
| BFS            | Unweighted graph          |
| Dijkstra       | Non-negative edge weights |
| Bellman-Ford   | Handles negative edges    |
| Floyd-Warshall | All-pairs shortest paths  |

Important:

**Dijkstra does not correctly handle graphs with negative-weight edges in its standard form.**

---

# 75. Topological Sort

Applicable to:

**Directed Acyclic Graph — DAG**

Methods:

1. DFS
2. Kahn's algorithm using indegrees + queue

Applications:

* Course scheduling
* Dependency resolution
* Build systems

---

# 76. Complexity Cheat Sheet ⭐⭐⭐

| Data Structure / Algorithm    |            Average |
| ----------------------------- | -----------------: |
| Array access                  |               O(1) |
| Array search                  |               O(n) |
| Binary search                 |           O(log n) |
| Linked-list search            |               O(n) |
| Linked-list insertion at head |               O(1) |
| Stack push/pop                |               O(1) |
| Queue enqueue/dequeue         |               O(1) |
| BST search                    |   O(log n) average |
| Hash table search             |       O(1) average |
| Heap insertion                |           O(log n) |
| Heap deletion                 |           O(log n) |
| BFS                           |             O(V+E) |
| DFS                           |             O(V+E) |
| Merge sort                    |         O(n log n) |
| Quick sort                    | O(n log n) average |
| Heap sort                     |         O(n log n) |

---

# PART O — C POINTERS YOU MUST MASTER FOR DSA

These are particularly important in C:

```c
int *p;
int **p;
```

Understand:

```text
*p
&p
p+1
*(p+i)
```

Also master:

```c
struct Node *next;
```

and:

```c
node->data
node->next
```

Remember:

```text
node->data
```

is shorthand for:

```c
(*node).data
```

---

# PART P — RECURSION MUST-KNOW PROBLEMS

Practice these in order:

1. Factorial
2. Fibonacci
3. Sum of numbers
4. Sum of digits
5. Power
6. GCD
7. Reverse string
8. Reverse array
9. Binary search
10. Tower of Hanoi
11. Generate subsets
12. Generate permutations
13. N-Queens

---

# PART Q — DSA LEARNING ORDER

For learning from **absolute zero**, follow this sequence:

```text
C Basics
   ↓
Functions
   ↓
Recursion
   ↓
Arrays
   ↓
Strings
   ↓
Pointers
   ↓
Structures
   ↓
Dynamic Memory
   ↓
Time & Space Complexity
   ↓
Searching
   ↓
Sorting
   ↓
Linked List
   ↓
Stack
   ↓
Queue
   ↓
Trees
   ↓
BST
   ↓
Heap
   ↓
Hashing
   ↓
Graphs
   ↓
Greedy
   ↓
Divide & Conquer
   ↓
Backtracking
   ↓
Dynamic Programming
   ↓
Trie / DSU / Advanced Graphs
```

## 🎯 For GATE CSE

Since you're
**Pointers → Arrays → Recursion → Linked Lists → Stack/Queue → Trees/BST → Heap → Hashing → Graphs → Sorting → Algorithms.**

And don't just memorize complexities. For GATE, you should be able to **trace C code, determine output, analyze loops/recursion, understand pointer 
