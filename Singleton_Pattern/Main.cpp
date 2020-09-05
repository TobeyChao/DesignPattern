#include "Singleton.h"
int main(int argc, char* argv[])
{
	Singleton* instance = Singleton::GetInstance();
	instance->Print();

	SingletonStarve* instance2 = SingletonStarve::GetInstance();
	return 0;
}