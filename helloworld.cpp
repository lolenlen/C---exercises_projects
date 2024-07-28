#include <iostream>

int main() {
    // 'using' declarations to avoid prefixing 'std::' with cout and string
    using std::cout;
    using std::string;

    string name = "Finn";
    cout << "Hello " << name;

    return 0;
}
