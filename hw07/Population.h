
#ifndef POPULATION_H
#define POPULATION_H
class Population;
#include <iostream>

class Population{
	private: 
		Fish** fishes;
		int max_fishes;

	public: 
		Population(int max_fishes);

		virtual ~Population();

		void add(Fish& fish);
		// double remove();
		double size() const;
		// * get() const;
		friend std::ostream& operator<<(std::ostream& out, const Population& p);

	};

#endif
