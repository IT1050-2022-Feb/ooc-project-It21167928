#include "Admin.h"
#include "buyer.h"
#include "property.h"

#include <iostream>

using namespace std;

int main()
{
	property*pty = new Property();// property class
	
	
	//Method Calling
	
	property->displayProperty();
	
	
	
	//--------Deleting Dynamic object--------
	
	delete property;
	
	return 0;
}
