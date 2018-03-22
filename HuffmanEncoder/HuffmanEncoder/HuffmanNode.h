#pragma once
#include <vector>

using namespace std;

struct HuffmanNode
{
	HuffmanNode(const vector<char>& sequence, int frequency)
	{
		this->sequence = sequence;
		this->frequency = frequency;
	}

	vector<char> sequence;
	int frequency;

	bool operator< (const HuffmanNode& b) const
	{
		if (frequency == b.frequency)
			return sequence[0] < (b.sequence[0]);
		else
			return frequency < b.frequency;
	}

};