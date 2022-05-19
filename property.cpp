#include <iostream>
#include <cstring>
#include "property.h"


using namespace std;


//class implementation
property ::property()
{
  propertyID = 0;
  strcpy(propertyType,"");
  strcpy(propertyLocation,"");
  propertyPrice = 0 ;
}

property ::property(const int pID,const string pType,const string pLct,const pPrice):property(pID,pType,pLoc,pPrc)
  propertyID = pID;
  strcpy(propertyType,pType);
  strcpy(propertyLocation,pLct);
  propertyPrice = pPrc ;

//overiding function
void property::DisplayProperty()
{
  cout << "property ID: " << propertyID << endl;
  cout << "property type: " << propertyType << endl;
  cout << "property Location: " << propertyLocation << endl;
  cout << "property price: " << propertyPrice << endl;
}
property::~property()
{
	cout << "property deleted" << endl;
}
