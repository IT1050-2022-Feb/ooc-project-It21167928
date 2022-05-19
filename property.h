#include <iostream>
#include<string.h>
#include "Admin.h"
#include "Buyer.h"

using namespace std;
class property : public admin
{
 
private:
int proprtyID;
string propertyType[50];
string propertyLocation[50];
double propertyPrice;
Buyer*buyer;
Admin*admin;

public:
Property();
Property(int pID,string pType,pLocation,double pPrice,Buyer*buyer,Admin*admin);
void displayproperty();
  ~property();
};
