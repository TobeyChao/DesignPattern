#include "Factory.h"
int main()
{
	Factory* tclFactory = new TCLFactory();
	tclFactory->CreateAirConditioning();
	tclFactory->CreateFridge();
	tclFactory->CreateTelevision();
	Factory* haierFactory = new HaierFactory();
	haierFactory->CreateAirConditioning();
	haierFactory->CreateFridge();
	haierFactory->CreateTelevision();
	delete tclFactory;
	delete haierFactory;
	return 0;
}