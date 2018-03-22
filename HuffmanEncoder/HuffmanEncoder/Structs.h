#pragma once
#include <vector>

using namespace std;

struct EncoderEntry
{
	EncoderEntry(const vector<char>& sequence, int frequency)
	{
		this->sequence = sequence;
		this->frequency = frequency;
	}

	vector<char> sequence;
	int frequency;

};

struct HuffmanTreeNode
{
	EncoderEntry * entry;
	int frequency;
	HuffmanTreeNode* zeroBranch = nullptr;
	HuffmanTreeNode* oneBranch = nullptr;

	static bool compare (const HuffmanTreeNode * a,  const HuffmanTreeNode * b)
	{
			return a->frequency < b->frequency;
	}
};