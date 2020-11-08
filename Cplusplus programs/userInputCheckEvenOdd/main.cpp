#include <iostream>
using namespace std;
using std::cout;
using std::endl;

bool evenCheck(int16_t Inputnumber) {
    bool isEven;
    isEven = Inputnumber % 2 == 0 ? true : false;
    return isEven;
}

void evenOddUserInput() {
    int16_t userNumber;
    cout << "Please enter a number?\n";
    cin >> userNumber;
    bool even = evenCheck(userNumber);
    if (even) {
        std::cout << "The number is even" << std::endl;
    } else {
        std::cout << "The number is odd" << std::endl;
    }
}

int main() {
    evenOddUserInput();
    return 0;
}
