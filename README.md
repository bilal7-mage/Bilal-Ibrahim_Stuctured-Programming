1. A normal variable stores an actual value (such as an integer or character) directly in a memory location. The value is accessed and modified directly using the variable name.
A pointer stores the memory address of another variable rather than the value itself. To read or modify the value stored at that address, the pointer must be dereferenced.
Key differences:
A normal variable stores data directly.
A pointer stores a memory address.
Normal variables are accessed directly.
Pointers access data indirectly through dereferencing.
Modifying a pointer’s dereferenced value changes the original variable.

2. A variable declaration and definition allocates memory to store a value of a specific type.
A pointer declaration and definition allocates memory to store the address of another variable.
The & operator is used to obtain the address of a variable.
The * operator is used:
In declarations to define a pointer.
In usage to dereference a pointer and access the value at an address.
In summary, variables store values directly, while pointers store addresses obtained using the & operator and accessed using the * operator.

3. Dereferencing a pointer means accessing the value stored at the memory address held by the pointer.
When a pointer is dereferenced, it allows reading or modifying the value of the variable it points to. Any change made through dereferencing directly affects the original variable in memory.
This makes pointers powerful but also potentially risky if misused.

4. Pointers are preferred when:
Efficient memory usage is required.
Large data structures need to be handled.
Data must be modified inside functions.
Dynamic memory allocation is involved.
Practical examples:
Passing large arrays or structures to functions without copying them.
Managing memory allocated dynamically at runtime.
In these cases, pointers improve performance and flexibility.

5. While powerful, pointers have several risks:
Dereferencing uninitialized or null pointers can cause program crashes.
Dangling pointers may reference freed memory.
Memory leaks can occur if allocated memory is not released.
Pointer-heavy code is harder to read and debug.
Normal variables are safer and easier to manage because they are accessed directly and managed automatically.

6. In call by value, a copy of the variable is passed to the function. Changes made inside the function do not affect the original variable.
In call by reference, the address of the variable is passed using a pointer. This allows the function to directly modify the original data.
The key difference is whether the function works on a copy of the data or on the actual data in memory.

7. a. Call by value is preferred when:
The original data must remain unchanged.
The data being passed is small.
Program safety and simplicity are important.
b. Call by reference is preferred when:
The function needs to modify the original data.
Large data structures are involved.
Efficiency and memory usage are important.
