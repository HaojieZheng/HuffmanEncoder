#pragma once
#include "HuffmanNode.h"

#include <queue>






class Encoder
{
public:
	Encoder();
	~Encoder();

	void add(const vector<char>& sequence, int frequency);
	vector<char> encode(const vector<char>& str);
	vector<char> decode(const vector<char>& encoding);

private:
	priority_queue<HuffmanNode, vector<HuffmanNode>> _nodes;

	void generateTree();

};

