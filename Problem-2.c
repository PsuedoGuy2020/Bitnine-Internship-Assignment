#include <stdio.h>

/*Recursive approach*/
/*
ADVANTAGE & DISADVANTAGEAPPROACH-1
# Advantages:
Simple and straightforward implementation, reflecting the mathematical definition of the Fibonacci sequence.
Easy to understand and read, especially for small input values.
The base cases are explicitly handled, ensuring correct results for input values 0, 1, and 2.

#Disadvantages:

> Inefficiency: The recursive approach suffers from redundant calculations. Each recursive call results in additional function calls, leading to exponential time complexity.
> High time complexity: The time complexity of the recursive approach is approximately O(2^n), where n is the input value. This is due to the repeated calculations of Fibonacci numbers, resulting in a significant increase in the number of function calls.
> Potential for stack overflow: For large input values, the recursive approach may lead to stack overflow errors due to the accumulation of function calls on the call stack.
Time Complexity: The time complexity of the recursive approach is exponential, approximately O(2^n). This is because each recursive call branches into two additional calls until reaching the base cases. As a result, the number of function calls and calculations grows rapidly with increasing input values.
> Space Complexity: The space complexity of the recursive approach is O(n) due to the recursive calls placed on the call stack. Each function call requires stack space to store its variables and return address. Therefore, the space required grows linearly with the input value, n.
*/

int fibCalculator1(int num) {
    if (num <= 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else if (num == 2) {
        return 2;
    } else {
        return fibCalculator1(num - 3) + fibCalculator1(num - 2);
    }
}

/*Iterative approach*/
/*
ADVANTAGE & DISADVANTAGEAPPROACH-2
#Advantages:
> Efficient and avoids redundant calculations: The iterative approach calculates Fibonacci numbers in a bottom-up manner, avoiding redundant function calls or calculations.
> No risk of stack overflow: The iterative approach uses a loop instead of recursive function calls, making it suitable for handling large input values without the risk of stack overflow.
> Simple and concise implementation: The code uses a loop and a few variables to compute the Fibonacci sequence, making it easy to understand and implement.

#Disadvantages:
> Requires maintaining multiple variables: The iterative approach requires maintaining multiple variables (prev, curr1, and curr2) to keep track of the Fibonacci sequence's current and previous numbers.
> Time complexity: Although more efficient than the recursive approach, the time complexity is still O(n) due to the loop that iterates through the sequence.
> Time Complexity: The time complexity of the iterative approach is O(n), where n is the input value. The loop iterates from 3 to num, performing constant time calculations in each iteration. As a result, the time required to compute the Fibonacci number grows linearly with the input value.
> Space Complexity: The space complexity of the iterative approach is O(1) since it only requires a few variables (prev, curr1, and curr2) to store the current and previous Fibonacci numbers. The space required remains constant regardless of the input value.
*/


int fibCalculator2(int num) {
    if (num <= 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else if (num == 2) {
        return 2;
    }

    int prev = 0;
    int curr1 = 1;
    int curr2 = 2;

    for (int idx = 3; idx <= num; idx++) {
        int next = prev + curr1;
        prev = curr1;
        curr1 = curr2;
        curr2 = next;
    }
    return curr2;
}

/*Dynammic programming approach*/
/*
Advantages:
ADVANTAGE & DISADVANTAGEAPPROACH-3
> Efficient and avoids redundant calculations: The dynamic programming approach stores previously computed Fibonacci numbers in an array (fib) and reuses them to compute subsequent Fibonacci numbers. This avoids redundant calculations and improves efficiency.
> Linear time complexity: The dynamic programming approach has a time complexity of O(n) since it only requires a single loop to compute all Fibonacci numbers up to the given input value. Each Fibonacci number is calculated using the precomputed values stored in the array.
> No risk of stack overflow: The dynamic programming approach does not rely on recursive function calls and uses a fixed-size array, eliminating the risk of stack overflow even for large input values.

#Disadvantages:
> Space consumption: The dynamic programming approach requires an array (fib) to store previously computed Fibonacci numbers. The size of the array is equal to the input value num, which can consume significant memory for large input values.
> Time Complexity: The time complexity of the dynamic programming approach is O(n), where n is the input value. This is because the loop iterates from 3 to num, performing constant time calculations in each iteration. The precomputed Fibonacci numbers are reused to compute subsequent Fibonacci numbers, resulting in linear time complexity.
> Space Complexity: The space complexity of the dynamic programming approach is O(n) since it requires an array (fib) of size num+1 to store the previously computed Fibonacci numbers. The space required grows linearly with the input value.
*/
int fibCalculator3(int num) {
    if (num <= 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else if (num == 2) {
        return 2;
    }
    int size = num + 1;
    int fib[size];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;
    for (int idx = 3; idx <= num; idx++) {
        fib[idx] = fib[idx - 3] + fib[idx - 2];
    }
    return fib[num];
}

int main() {
    int num = 20;
    int ans1 = fibCalculator1(num);
    int ans2 = fibCalculator2(num);
    int ans3 = fibCalculator3(num);
    printf("F(%d) = %d\n", num, ans1);
    printf("F(%d) = %d\n", num, ans2);
    printf("F(%d) = %d\n", num, ans3);
    return 0;
}
