#ifndef POPULATION_H
#define POPULATION_H
class Population;
#include <iostream>
#include <stdexcept>

class Population{
	private: 
		Fish** fishes;
		int max_fishes;
		int n = 0;

	public: 
		Population(int max_fishes);

		virtual ~Population();

		void add(Fish* fish);
		void remove(Fish* fish);
		double size() const;
		Fish* get(int index) const;
		friend std::ostream& operator<<(std::ostream& out, const Population& p);

	};

#endif
