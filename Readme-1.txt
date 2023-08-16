
# # Fibonacci Sequence Using Dynammic Programmings
This program calculates the Fibonacci sequence using approach: dynamic programming.
This code is written in C and can be compiled and run using a C compiler. 
The following instructions provide guidance on how to set up the development environment, compile the code, 
and run the resulting executable.

1) Development Environment
To compile and run the code, you'll need:
- C compiler (e.g., GCC)
- Standard C library (stdio.h, stdlib.h)
- Compilation Instructions

> Follow these steps to compile the code:
. Open a terminal or command prompt.
. Navigate to the directory containing the source code file (e.g., main.c).
. Run the following command to compile the code using GCC: 
  shell
  Copy code
  gcc program_1.c -o program_1
. If there are no compilation errors, an executable file named program (or whatever name you specified) will be generated in the current directory.

2) Compilation and Execution Instructions

> After successfully compiling the code, follow these steps to run the program:
. In the terminal or command prompt, ensure you are still in the directory containing the executable file.
. Run the following command to execute the program:
  shell
  Copy code
  ./program_1

The program will output the results of the calculations and display the Fibonacci sequence value.

3) Code Description
The provided code defines various functions and structures to perform arithmetic operations and calculate the Fibonacci sequence.

. The Node structure represents a node with a type (TypeTag) and a value (val).
. The makeFunc function dynamically allocates memory for a new Node structure and initializes its type and value.
. The print function prints the type of the node and the provided value.
. The calculate function performs arithmetic operations based on the node's type and the provided arguments.
. The FibFinder function calculates the Fibonacci sequence up to the given number.
. The getNodeValue function retrieves the value from a given node.
. The setNodeValue function sets the value of a given node.
. In the main function, various nodes are created, calculations are performed, and the results are printed.