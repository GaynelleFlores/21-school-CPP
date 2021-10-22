#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
		{
		public:
			Cure();
			Cure(std::string const & type);
			Cure(const Cure &other);
			virtual ~Cure();
			Cure& operator=(const Cure &other);
			virtual AMateria* clone() const;
		};

#endif