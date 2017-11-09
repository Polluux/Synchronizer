#ifndef SYNCHRONIZER_H
#define SYNCHRONIZER_H

#include "Interface.h"
#include <memory>

class Synchronizer {
	private:
		//Attributes
		std::shared_ptr<Interface> interface;

		//Methods

	public:
		//Attributes

		//Methods
		Synchronizer();
		void hello();
};

#endif