#include "Synchronizer.h"
#include <stdio.h>
#include <memory>

using namespace std;

int main(){
	shared_ptr<Synchronizer> sync = shared_ptr<Synchronizer>(new Synchronizer());
	sync->hello();
}