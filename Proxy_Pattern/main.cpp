#include <iostream>
#include "Propose.h"
using namespace std;

//代理模式
int main(int argc, char* argv[])
{
	SchoolGirl * pGirl = new SchoolGirl("娇娇");

	Proxy * pAnotherBoy = new Proxy(pGirl);

	cout << pAnotherBoy->GiveFlower() << endl;

	system("pause");
}