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

enum class EFireResult {
    SafeMode,
    EmptyMag,
    Fired
};

enum class EReloadResult {
    Full,
    Reloaded
};

class Firearm {
private:
    std::string name;
    ECaliber caliber;
    int magCapacity;
    int ammoInMag;
    std::vector<EFireModes> fireModes;
    EFireModes currentFireMode;
    
public:
    Firearm(std::string _name, ECaliber _caliber, int _magCapacity, int _ammoInMag) {
        name = _name;
        caliber = _caliber;
        magCapacity = _magCapacity;
        ammoInMag = _ammoInMag;
        fireModes = { EFireModes::Safe, EFireModes::Semi };
    }

    std::string getName() { return name; }
    ECaliber    getCaliber() { return caliber; }
    int         getMagCapacity() { return magCapacity; }

    void setName(std::string _name) { name = _name; }
    void setCaliber(ECaliber _caliber) { caliber = _caliber; }
    void setMagCapacity(int _magCapacity) { magCapacity = _magCapacity; }

    EReloadResult Reload() {
        if (ammoInMag == magCapacity) {
            return EReloadResult::Full;
        }

        ammoInMag = magCapacity;
        return EReloadResult::Reloaded;
    }

    EFireResult Fire() {
        if (currentFireMode == EFireModes::Safe) {
            return EFireResult::SafeMode;
        }

        if (magCapacity == 0) {
            return EFireResult::EmptyMag;
        }

        magCapacity--;
        return EFireResult::Fired;
    }

    void nextFiringMode() {
        int fireMode = static_cast<int>(currentFireMode);
        fireMode = (fireMode + 1) % fireModes.size();
        currentFireMode = static_cast<EFireModes>(fireMode);
    }
};

int main() {

}