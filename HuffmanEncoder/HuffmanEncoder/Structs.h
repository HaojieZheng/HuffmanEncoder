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
	HuffmanTreeNode(const EncoderEntry * entry)
	{
		this->entry = entry;
		frequency = entry->frequency;
	}

	HuffmanTreeNode(HuffmanTreeNode * child1, HuffmanTreeNode * child2)
	{
		this->entry = nullptr;
		frequency = child1->frequency + child2->frequency;
		zeroBranch = child1;
		oneBranch = child2;
	}

	const EncoderEntry * entry;
	int frequency;
	HuffmanTreeNode* zeroBranch = nullptr;
	HuffmanTreeNode* oneBranch = nullptr;

	static bool compare(const HuffmanTreeNode * a, const HuffmanTreeNode * b)
	{
		return a->frequency > b->frequency;
	}
};