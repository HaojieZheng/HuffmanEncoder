// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "encoder.h"

int main()
{
	vector<char> source = { 'a', 'b', 'c' };
	Encoder encoder;
	encoder.add(source, 1);
	encoder.add(source, 1);

	encoder.encode(source);

    return 0;
}

