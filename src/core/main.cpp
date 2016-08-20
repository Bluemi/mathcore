#include <iostream>

enum Operator
{
ADDITION,
MULTIPLIKATION,
POTENCY,
TOWER
};

int evaluate(int op, int a, int b)
{
	/*
	if (op == -1)
	{
		if (a != b)
		{
			std::cout << "Für \"a ast0 b\" mit a != b wurde noch keine sinnvolle Definition gefunden" << std::endl;
			return 0;
		}
		return a + 2; // Hehe Definition of ast0
	}
	else if (op < -1)
	{
		if (a == b && a == 2)
		{
			return 4; // Bestimmt richtig
		}
		std::cout << "op < -1: Definiert die Kacke doch selber" << std::endl;
		return 0;
	}
	*/

	if (op == ADDITION)
	{
		return a + b;
	}

	int tmp = b;

	for (int i = 0; i < a-1; i++)
	{
		tmp = evaluate(op-1, tmp, b);
	}
	return tmp;
}


int main()
{
	int op = MULTIPLIKATION;
	int a = 1;
	int b = 2;
	for (int i = 0; i < 10; i++)
	{
		std::cout << "evaluate(" << op << ", " << a << ", " << b << ") = " << evaluate(op, a, b) << std::endl;
		a++;
	}
	return 0;
}
