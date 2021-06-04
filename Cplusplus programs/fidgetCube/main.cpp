#include <iostream>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;

class CubeSide {
public:
    virtual const char *getName() const = 0 ;
    virtual void fidget() = 0;
};

class FidgetCube {
public:
    CubeSide *getSide(uint8_t sideNo) const;
    bool addSide(CubeSide *newSide);
protected:
    CubeSide *sides[6];
    uint8_t lastSide = 0;
};

bool FidgetCube::addSide(CubeSide *newSide) {
    if (lastSide < 6) {
        sides[lastSide] = newSide;
        lastSide++;
        return true;
    }
    return false;
}

CubeSide *FidgetCube::getSide(uint8_t sideNo) const {
    return sides[sideNo];
}

class DialSide : public CubeSide {
public:
    const char *getName() const override;
    void setDial(uint16_t value);
    void fidget() override;
protected:
    uint16_t dialValue = 0;
    static constexpr char const *dialSideName = "Dial";
};

const char *DialSide::getName() const {
    return DialSide::dialSideName;
}

void DialSide::setDial(uint16_t value) {
    if (dialValue <= 10) {
        dialValue = value;
        cout << "A dial was set to " << dialValue << "." << endl;
    }
}

void DialSide::fidget(){
    setDial((uint16_t)(rand() % 10));
}

class JoystickSide : public CubeSide {
public:
    void push(uint8_t direction) const;
    const char *getName() const ;
    void fidget();
};

void JoystickSide::push(uint8_t direction) const {
    cout << "Joystick was pushed in direction " << (uint16_t)direction << endl;
}

const char *JoystickSide::getName() const {
    return "Joystick";
}

void JoystickSide::fidget() {
    push((uint8_t)(rand() % 4)) ;
}

class DialCube : public FidgetCube {
public:
    DialCube();
};

DialCube::DialCube() : FidgetCube() {
    for (uint8_t x = 0; x<6; x++ ){
        addSide(new DialSide());
    }
}

class JoystickDialCube : public FidgetCube {
public:
    JoystickDialCube(uint8_t joysticks, uint8_t dials);
};

JoystickDialCube::JoystickDialCube(uint8_t joysticks, uint8_t dials) : FidgetCube() {
    for (uint8_t x = 0; x < joysticks; x++) {
        addSide(new JoystickSide());
    }
    for (uint8_t x = joysticks; x < joysticks+dials; x++) {
        addSide(new DialSide());
    }
    if (joysticks+dials < 6){
        for (uint8_t x = joysticks + dials; x < 6; x++) {
            addSide(nullptr);
        }
    }
}

void playWith(FidgetCube *cube){
    for (uint8_t x = 0; x < 6; x++){
        cube->getSide(x)->fidget();
    }
}

class ButtonSide : public CubeSide {
public:
    ButtonSide();
    const char *getName() const override;
    void fidget() override;
    void pushUp();
    void pushDown();
protected:
    void announce();
    uint16_t value;
};

ButtonSide::ButtonSide() : CubeSide(), value(5) {}

const char *ButtonSide::getName() const {
    return "Button";
}

void ButtonSide::announce() {
    cout << "Value is now " << value << endl;
}

void ButtonSide::pushUp() {
    value++;
    announce();
}

void ButtonSide::pushDown() {
    value--;
    announce();
}

void ButtonSide::fidget() {
    uint8_t action = (uint8_t)(rand() % 2);
    switch (action) {
        case 0:
            pushUp();
            break;
        case 1:
            pushDown();
            break;
    }
}

class RandomCube : public FidgetCube {
public:
    RandomCube();
};

RandomCube::RandomCube() : FidgetCube() {
    for (uint8_t x = 0; x < 6; x++){
        uint8_t sideType = (uint8_t)(rand() % 3);
        switch (sideType) {
            case 0:
                addSide(new DialSide());
                break;
            case 1:
                addSide(new JoystickSide());
                break;
            case 2:
                addSide(new ButtonSide());
                break;
            default:
                cout << "RandomCube broken" << endl;
        }
    }
}

int main() {
    RandomCube r;
    playWith(&r);
    playWith(&r);
}