#pragma once 

#include "Vehicle.h"

struct Highway;

struct HighwayPatrol : Vehicle 
{
    HighwayPatrol();
    ~HighwayPatrol();
    HighwayPatrol(const HighwayPatrol&);
    HighwayPatrol& operator=(const HighwayPatrol&);

    void scanHighway(Highway* h);

    void pullOver( Vehicle* v, bool willArrest, Highway* h );
};
