#include <iostream>
using namespace std;
using std::cout;
using std::endl;

void HelloUserName() {
    string name;
    cout << "What is your name?\n";
    cin >> name;
    cout << "Hello " << name << endl;
}

int main() {
    HelloUserName();
    return 0;
}
