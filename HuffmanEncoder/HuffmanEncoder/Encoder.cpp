#include "stdafx.h"
#include "Encoder.h"

Encoder::Encoder()
{
}


Encoder::~Encoder()
{
}

void Encoder::add(const string & sequence, int frequency)
{
	_nodes.push(HuffmanNode(sequence, frequency));

}

vector<char> Encoder::encode(const string & str)
{
	return vector<char>();
}

string Encoder::decode(vector<char> encoding)
{
	return string();
}
