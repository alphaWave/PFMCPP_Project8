#pragma once

#include "Vehicle.h"

struct SemiTruck : Vehicle
{
    SemiTruck(const std::string& name);
    ~SemiTruck();
    SemiTruck(const SemiTruck&);
    SemiTruck& operator=(const SemiTruck&);

    void shiftGearUp();
    void pullOver();
};
