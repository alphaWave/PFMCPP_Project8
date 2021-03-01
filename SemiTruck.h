#pragma once

#include "Vehicle.h"

struct SemiTruck : public Vehicle
{
    SemiTruck(const std::string& name);
    void shiftGearUp();
    void pullOver();
};
