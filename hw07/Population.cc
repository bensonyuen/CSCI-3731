#include "Fish.h"
#include "Angle.h"
#include "Population.h"
#include <cmath>
#include <string>
#include <cstdlib>

Population::Population(int max_fishes) { 
    this->max_fishes = max_fishes;
    fishes = new Fish*[max_fishes];
} //end of constructor

Population::~Population() {
}

void Population::add(Fish* fish){ 
    fishes [size] = fish;
    size++;
}

void Population::remove(Fish* fish) {
	int index = -1;
	for (int i = 0; i < size; i++){
		if (fishes[i] == fish) {
			index = i;
			break;
		}
	}

	for (int j = index; j < size - 1; j++){
		fishes[j] = fishes[j + 1];
	}
	size--;
}

double Population::getSize() const { 
    return size;
}

Fish* Population::get(int index) const { 
    return fishes[index];
}

std::ostream& operator<<(std::ostream &out, const Population& p) { 
    // out << p.max_fishes;
    return out;
}
