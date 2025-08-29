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

class Firearm {
private:
    std::string name;
    ECaliber caliber;
    int magCapacity;
    int maxCapacity;
    std::vector<std::string> fireModes;
    
public:
    Firearm(std::string _name,
            ECaliber _caliber,
            int _magCapacity,
            int _maxCapacity,
            std::vector<std::string> _fireModes
    ) {
        name = _name;
        caliber = _caliber;
        magCapacity = _magCapacity;
        maxCapacity = _maxCapacity;
        fireModes = _fireModes;
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
    void changeFiringMode() {}
};

int main() {

}