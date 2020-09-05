#include <iostream>
#include "Operation.h"
using namespace std;

int main(int argc, char* argv[])
{
	//calculator
	double numberA;
	double numberB;
	char operate;

	cout << "Input number A." << endl;
	cin >> numberA;
	cout << "Input number B." << endl;
	cin >> numberB;

	cout << "Input Operation." << endl;
	cin >> operate;

	Operation * op = OperateFactory::GetOperation(operate);

	if (op)
	{
		op->SetNumberA(numberA);
		op->SetNumberB(numberB);

		cout << "Result:" << op->GetResult() << endl;
	}
	else
	{
		cout << "Error:" << endl;
	}
	delete op;
	system("pause");
	return 0;
}