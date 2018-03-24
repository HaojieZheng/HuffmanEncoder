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

TrieNode * generateTrie(HuffmanTreeNode* root)
{


	return nullptr;
}


vector<char> Encoder::encode(const vector<char>& str)
{
	auto tree = generateTree();
	return vector<char>();
}

vector<char> Encoder::decode(const vector<char>& encoding)
{
	return vector<char>();
}


HuffmanTreeNode* Encoder::generateTree()
{
	priority_queue<HuffmanTreeNode *, vector<HuffmanTreeNode*>, decltype(&HuffmanTreeNode::compare)> nodesHeap(HuffmanTreeNode::compare);
	for (auto iter = _nodes.begin(); iter != _nodes.end(); iter++)
	{
		nodesHeap.push(new HuffmanTreeNode(&(*iter)));
	}

	while (nodesHeap.size() > 1)
	{
		// pop smallest 2
		auto first = nodesHeap.top();
		nodesHeap.pop();
		auto second = nodesHeap.top();
		nodesHeap.pop();

		auto parentNode = new HuffmanTreeNode(first, second);
		nodesHeap.push(parentNode);
	}
	
	return nodesHeap.top();
}
