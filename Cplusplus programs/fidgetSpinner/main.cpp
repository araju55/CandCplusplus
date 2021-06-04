#include <iostream>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;

class FidgetSpinner {
public:
    string colour;
    FidgetSpinner(const char *_colour);
    FidgetSpinner(const char *_colour, uint16_t _size);
    ~FidgetSpinner();
    void spin(uint8_t strength);
    void tick();
    bool isSpinning();
    static FidgetSpinner* allSpinners[];
protected:
    uint8_t size;
    uint16_t spins;
    uint8_t velocity;
    uint8_t angle;
private:
    void finishCreation();
    static uint8_t freeSpace;
};

FidgetSpinner* FidgetSpinner::allSpinners[5] = {nullptr, nullptr, nullptr, nullptr, nullptr};
uint8_t FidgetSpinner::freeSpace = 0;

void FidgetSpinner::finishCreation() {
    cout << "Created a " << colour << "FidgetSpinner." << endl;
    if (freeSpace <= 4) {
        allSpinners[freeSpace] = this;
        freeSpace++;
    }
}

FidgetSpinner::FidgetSpinner(const char *_colour) :
        colour(_colour), size(5), spins(0), velocity(0), angle(0)
{
    finishCreation();
}

FidgetSpinner::FidgetSpinner(const char *_colour, uint16_t _size) :
        colour(_colour), size(_size), spins(0), velocity(0), angle(0)
{
    finishCreation();
}

FidgetSpinner::~FidgetSpinner() {
    cout << "Destroyed a " << colour << " FidgetSpinner." << endl;
    for (uint8_t index = 0; index < 5; index++) {
        if (allSpinners[index]==this) {
            for (uint8_t x = index+1; x<5; x++){
                allSpinners[x-1] = allSpinners[x];
            }
            freeSpace--;
            break;
        }
    }
}

void FidgetSpinner::spin(uint8_t strength) {
    velocity += strength;
    cout << "A " << colour << " spinner has been spun with strength " << (uint16_t)strength << " ." << endl;
}

bool FidgetSpinner::isSpinning() {
    return (velocity > 0);
}
void FidgetSpinner::tick() {
    if (velocity == 0) return;
    angle += velocity;
    if (angle >= 10) {
    spins += (angle / 10);
    angle = (uint8_t)(angle % 10);
    cout << "A" << colour << " spinner has now spun " << spins << " times." << endl;
    }
    if (velocity>size) {
        velocity -= size;
    } else {
        velocity = 0;
        cout << "The spinner has stopped at angle " << (u_int16_t)angle << endl;
    }
}

int main() {
    new FidgetSpinner("Teal", 5);
    new FidgetSpinner("Orange", 5);
    new FidgetSpinner("Violet", 5);
    new FidgetSpinner("Grey", 5);
    new FidgetSpinner("Maroon", 5);

    for (uint8_t t=0; t<5; t++) {
        FidgetSpinner::allSpinners[t]->spin((t+1)*3);
    }

    FidgetSpinner **spinners = FidgetSpinner::allSpinners;

    uint8_t stopped = 0;
    while (stopped < 5) {
        for (uint8_t t = 0; t < 5; t++) {
            if (spinners[t]->isSpinning()) {
                spinners[t]->tick();
                if (!spinners[t]->isSpinning()) {
                    stopped++;
                }
            }
        }
    }
    for (uint8_t t = 0; t < 5; t++) {
        delete spinners[0];
    }
}