#include "stdafx.h"
#include "Encoder.h"
#include "Structs.h"
#include <vector>

using namespace std;


Encoder::Encoder()
{
}


Encoder::~Encoder()
{
}

void Encoder::add(const vector<char>& sequence, int frequency)
{
	_nodes.push_back(EncoderEntry(sequence, frequency));

}

vector<char> Encoder::encode(const vector<char>& str)
{
	generateTree();
	return vector<char>();
}

vector<char> Encoder::decode(const vector<char>& encoding)
{
	return vector<char>();
}


void Encoder::generateTree()
{
	priority_queue<HuffmanTreeNode, vector<HuffmanTreeNode>> nodesHeap;
	for (auto iter = _nodes.begin(); iter != _nodes.end(); iter++)
	{
		nodesHeap.push(HuffmanTreeNode(&(*iter)));
	}


	
}
