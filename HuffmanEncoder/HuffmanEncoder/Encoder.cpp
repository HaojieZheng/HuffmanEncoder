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
	return vector<char>();
}

vector<char> Encoder::decode(const vector<char>& encoding)
{
	return vector<char>();
}


void Encoder::generateTree()
{
	priority_queue<EncoderEntry, vector<EncoderEntry>> nodesHeap;
	
}
