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

	const EncoderEntry * entry;
	int frequency;
	HuffmanTreeNode* zeroBranch = nullptr;
	HuffmanTreeNode* oneBranch = nullptr;

	bool operator<(const HuffmanTreeNode& b) const
	{
		return frequency < b.frequency;
	}
};