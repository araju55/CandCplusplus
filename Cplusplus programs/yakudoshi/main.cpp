#include <iostream>
using namespace std;
using std::cout;
using std::endl;


void Yakudoshi() {
    char gender;
    int16_t age;
    cout << "What is your gender? (Male or Female)\n";
    cin >> gender;
    cout << "What is your age?\n";
    cin >> age;
    bool yakudoshi = false;

    switch(gender) {
        case 'F':
            if ((age==19) || (age=33) || (age==37)) {
                 yakudoshi = true;
            }
            break;
        case 'M':
            if ((age==25) || (age=42) || (age==61)) {
                 yakudoshi = true;
            }
            break;
    }

    if (yakudoshi) {
        std::cout << age << " is yakudoshi" << std::endl;
    } else {
        std::cout << age << " is not yakudoshi" << std::endl;
    }
}

int main() {
    Yakudoshi();
    return 0;
}
