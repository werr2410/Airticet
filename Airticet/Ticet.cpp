#include "Ticet.h"

Airline::Ticet::Ticet(string place, string fullane, string date) {
    id = static_id++;

    setPlace(place);
    setFullname(fullane);
    setDate(date);
}

Airline::Ticet::Ticet()
    : Ticet(nodata, nodata, nodata) {}

void Airline::Ticet::setPlace(string place) {
    this->place = place;
}

void Airline::Ticet::setFullname(string fullname) {
    this->fullname = fullname;
}

void Airline::Ticet::setDate(string date) {
    this->date = date;
}

std::string Airline::Ticet::getPlace() const {
    return place;
}

std::string Airline::Ticet::getFullname() const {
    return fullname;
}

std::string Airline::Ticet::getDate() const {
    return date;
}

int Airline::Ticet::getId() const {
    return this->id;
}

bool Airline::Ticet::operator>(const Ticet& right) const
{
    return date > right.date;
}

bool Airline::Ticet::operator<(const Ticet& right) const
{
    return date < right.date;
}
