#include <iostream>
#include "da_algo.h"
#include "test.h"

int main(int argc, char** argv)
{
	if (argc > 1)
	{
		return test(argv[1]);
	}

	return 0;
}