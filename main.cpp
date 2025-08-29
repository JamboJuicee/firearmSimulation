#include <iostream>
#include <string>

enum class ECaliber {
    NineMM,
    FiveFortyFive,
    FiveFiveSix,
    SevenSixTwo,
    TwelveGauge
};

class Firearm {
private:
    std::string name;
    ECaliber caliber;
    int magCapacity;
public:
    Firearm(std::string _name, ECaliber _caliber, int _magCapacity) {
        name = _name;
        caliber = _caliber;
        magCapacity = _magCapacity;
    }

    std::string getName() { return name; }
    ECaliber    getCaliber() { return caliber; }
    int         getMagCapacity() { return magCapacity; }

    void setName(std::string _name) { name = _name; }
    void setCaliber(ECaliber _caliber) { caliber = _caliber; }
    void setMagCapacity(int _magCapacity) { magCapacity = _magCapacity; }
};

int main() {

}