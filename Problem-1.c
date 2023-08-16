#include <stdio.h>
#include <stdlib.h>

typedef enum TypeTag {
    ADD,
    SUB,
    MUL,
    DIV,
    FIB
} TypeTag;

typedef struct Node {
    TypeTag type;
    int val;
} Node;

Node* makeFunc(TypeTag type) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->type = type;
    node->val = 0;
    return node;
}

void print(Node *node, int val) {
    if (node->type == ADD) {
        printf("add: %d\n", val);
    } else if (node->type == SUB) {
        printf("sub: %d\n", val);
    } else if (node->type == MUL) {
        printf("mul: %d\n",val);
    } else if (node->type == DIV) {
        printf("div: %d\n", val);
    }
    return;
}

int calculate(Node* node, int arg1, int arg2) {
    if (node->type == ADD) {
        return node->val = arg1 + arg2;
    } else if (node->type == SUB) {
        return node->val = arg1 - arg2;
    } else if (node->type == MUL) {
        return node->val = arg1 * arg2;
    } else if (node->type == DIV) {
        return node->val = arg1 / arg2;
    }
    return 0;
}

int FibFinder(int num) {
    int fib[num + 2];
    fib[0] = 0;
    fib[1] = 1;
    for (int idx = 2; idx <= num; idx++) {
        fib[idx] = fib[idx - 1] + fib[idx - 2];
    }
    return fib[num - 1];
}

int getNodeValue(Node* node) {
    if(node == NULL) {
        return 0;
    }
    return node->val;
}

void setNodeValue(Node* node, int value) {
    node->val = value;
}

int main() {
    Node* add = makeFunc(ADD);
    Node* mul = makeFunc(MUL);
    Node* sub = makeFunc(SUB);
    Node* fibo = makeFunc(SUB);

    print(add, calculate(add, 10, 6));
    print(mul, calculate(mul, 5, 4));
    print(sub, calculate(sub, getNodeValue(add), getNodeValue(mul)));
    int res = calculate(fibo, getNodeValue(sub), getNodeValue(NULL));
    int fibSeq = FibFinder(abs(getNodeValue(fibo)));
    printf("fibo : %d", fibSeq);
    free(add);
    free(mul);
    free(sub);
    free(fibo);
    return 0;
}