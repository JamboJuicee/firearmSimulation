#include <iostream>
#include <string>
#include <vector>

enum class ECaliber {
    NineEighteen,
    NineNineteen,
    FiveFortyFive,
    FiveFiveSix,
    SevenSixTwo,
    TwelveGauge
};

enum class EFireModes {
    Safe = 0,
    Semi = 1,
    Burst = 2,
    FAuto = 3,
};

class Firearm {
private:
    std::string name;
    ECaliber caliber;
    int magCapacity;
    int maxCapacity;
    std::vector<EFireModes> fireModes;
    EFireModes currentFireMode;
    
public:
    Firearm(std::string _name, ECaliber _caliber, int _magCapacity, int _maxCapacity) {
        name = _name;
        caliber = _caliber;
        magCapacity = _magCapacity;
        maxCapacity = _maxCapacity;
        fireModes = { EFireModes::Safe, EFireModes::Semi };
    }

    std::string getName() { return name; }
    ECaliber    getCaliber() { return caliber; }
    int         getMagCapacity() { return magCapacity; }
    int         getMaxAmmoInChamber() const { return maxCapacity - magCapacity; }

    void setName(std::string _name) { name = _name; }
    void setCaliber(ECaliber _caliber) { caliber = _caliber; }
    void setMagCapacity(int _magCapacity) { magCapacity = _magCapacity; }

    void Reload() {}
    void Fire() {}
    void nextFiringMode() {}
};

int main() {

}