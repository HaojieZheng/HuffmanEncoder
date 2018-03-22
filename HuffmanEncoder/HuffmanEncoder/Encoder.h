#pragma once
#include <string>
#include <queue>

using namespace std;

struct HuffmanNode
{
	HuffmanNode(const string& sequence, int frequency)
	{
		this->sequence = sequence;
		this->frequency = frequency;
	}

	string sequence;
	int frequency;

	bool operator< (const HuffmanNode& b) const
	{
		if (frequency == b.frequency)
			return sequence.compare(b.sequence) > 0;
		else
			return frequency < b.frequency;
	}

};


class Encoder
{
public:
	Encoder();
	~Encoder();

	void add(const string& sequence, int frequency);
	vector<char> encode(const string& str);
	string decode(vector<char> encoding);

private:
	priority_queue<HuffmanNode, vector<HuffmanNode>> _nodes;

};

