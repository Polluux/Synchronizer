#include "Synchronizer.h"
#include "Interface.h"
#include <stdio.h>
#include <memory>

using namespace std;

Synchronizer::Synchronizer(){
	printf("Creation\n");
	interface = shared_ptr<Interface>(new Interface());
}

void Synchronizer::hello(){
	printf("Hello World\n");
}