#pragma once
class Operation
{
public:
	void SetNumberA(double number)
	{
		numberA = number;
	}
	void SetNumberB(double number)
	{
		numberB = number;
	}
	virtual double GetResult() = 0;
protected:
	double numberA;
	double numberB;
};

class OperationAdd : public Operation
{
public:
	virtual double GetResult()
	{
		return numberA + numberB;
	}
};

class OperationSub : public Operation
{
public:
	virtual double GetResult()
	{
		return numberA - numberB;
	}
};

class OperationMul : public Operation
{
public:
	virtual double GetResult()
	{
		return numberA * numberB;
	}
};

class OperationDiv : public Operation
{
public:
	virtual double GetResult()
	{
		return numberA / numberB;
	}
};

class OperateFactory
{
public:
	Operation * GetOperation(const char op)
	{
		switch (op)
		{
		case '+':
			return new OperationAdd();
			break;
		case '-':
			return new OperationSub();
			break;
		case '*':
			return new OperationMul();
			break;
		case '/':
			return new OperationDiv();
			break;
		default:
			return nullptr;
			break;
		}
	}
};