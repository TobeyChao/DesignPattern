#include <iostream>
#include "Propose.h"
using namespace std;

//����ģʽ
int main(int argc, char* argv[])
{
	SchoolGirl * pGirl = new SchoolGirl("����");

	Proxy * pAnotherBoy = new Proxy(pGirl);

	cout << pAnotherBoy->GiveFlower() << endl;

	system("pause");
}