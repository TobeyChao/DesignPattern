#include <iostream>
#include "Person.h"
using namespace std;

int main(int argc, char* argv[])
{
	Person * pPerson = new Person("ут╩т");

	Tshirts * pTshirts = new Tshirts(pPerson);

	Bigtrouser * pBigtrouser = new Bigtrouser(pTshirts);

	cout << pBigtrouser->GetDescription() << endl;

	system("pause");
}