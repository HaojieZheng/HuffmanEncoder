#include "stdafx.h"
#include "Encoder.h"

Encoder::Encoder()
{
}


Encoder::~Encoder()
{
}

void Encoder::add(const vector<char>& sequence, int frequency)
{
	_nodes.push(HuffmanNode(sequence, frequency));

}

vector<char> Encoder::encode(const vector<char>& str)
{
	return vector<char>();
}

vector<char> Encoder::decode(const vector<char>& encoding)
{
	return vector<char>();
}


void Encoder::generateTree()
{

}
