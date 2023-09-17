#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Rectangle {
    int width;
    int height;
    char x;
};

int main() {
    struct Rectangle r1={105, 202, 'x'};
    r1.width = 10;
    r1.height = 20;
    r1.x = 'x';
    cout << r1.width << endl;
    cout << r1.height << endl;
    cout << r1.x << endl;
    return 0;
};