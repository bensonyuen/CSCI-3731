#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include <cmath>
#include <string>
#include <cstdlib>

Population::Population(int max_fishes) { 
    this->max_fishes = max_fishes;
    Fish** fishes;
    fishes = new Fish*[max_fishes];
} //end of constructor

Population::~Population() {
}

void Population::add(Fish& fish){ 
    int size = 0;
    fishes [size] = &fish;
}

// void Population::remove(Fish f) const { 
//     
// }

double Population::size() const { 
    return sizeof(fishes);
}

// Angle* Fish::get() const { 
//     
// }

std::ostream& operator<<(std::ostream &out, const Population& p) { 
    // out << p.max_fishes;
    return out;
}
