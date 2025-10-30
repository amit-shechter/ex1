#include "Utils.h"
#include "Stack.h"
#include <iostream>

using namespace std;

void reverse(int* nums, int size)
{
    Stack s;
    initStack(&s);
    for (int i = 0; i < size; i++) {
        push(&s, nums[i]);
    }
    for (int i = 0; i < size; i++) {
        nums[i] = pop(&s);
    }
    cleanStack(&s);
}

int* reverse10()
{
    int* nums = new int[10];
    cout << "Please enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
    }
    reverse(nums, 10);
    return nums;
}
