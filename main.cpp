#include <iostream>
#include <cassert>

// Include your function
int add(int a, int b){  // forward declaration
  return a+b;
}


void test_add() {
    assert(add(1, 2) == 3);
    assert(add(-5, 5) == 0);
    assert(add(10, -3) == 7);
    assert(add(10, 10) == 20);
}

int main() {
    test_add();
    std::cout << "All tests passed!\n";
    return 0;
}
