#include <iostream>

struct foo {};

constexpr foo x;

int main() {
    []{return x;}();
    return 0;
}
