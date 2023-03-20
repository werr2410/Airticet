#include "System.h"

namespace Airline {

    Airline::System::System() {

    }

    void Airline::System::pushTicet(Ticet ticet) {
        this->ticet.insert(ticet);
    }

    void Airline::System::eraseTicet(Ticet ticet) {
        auto it = find(this->ticet.begin(), this->ticet.end(), ticet);

        if (it != this->ticet.end())
            this->ticet.erase(it);
    }

    vTicet Airline::System::getTicetsByPlace(string place) const
    {
        vTicet t;

        for (Ticet x : this->ticet) {
            if (x.getPlace() == place) {
                t.push_back(x);
            }
        }

        return t;
    }

    vTicet Airline::System::getAllTicet() const {
        vTicet t;

        for (Ticet x : this->ticet) {
            t.push_back(x);
        }

        return t;
    }


}