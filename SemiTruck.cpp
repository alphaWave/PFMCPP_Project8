#include "SemiTruck.h"
#include <iostream>

SemiTruck::SemiTruck(const std::string& name) : Vehicle(name) {}
SemiTruck::~SemiTruck() = default;
SemiTruck::SemiTruck(const SemiTruck&) = default;
SemiTruck& SemiTruck::operator=(const SemiTruck&) = default;

void SemiTruck::shiftGearUp()
{
    setSpeed(50);
    std::cout << name << ": Shifting gear up!" << std::endl;
}

void SemiTruck::pullOver()
{
    setSpeed(0);
    std::cout << name << ": Yes, officer?" << std::endl;
}
