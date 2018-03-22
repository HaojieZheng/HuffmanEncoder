#pragma once
#include "Structs.h"
#include <vector>
#include <queue>

using namespace std;


class Encoder
{
public:
	Encoder();
	~Encoder();

	void add(const vector<char>& sequence, int frequency);
	vector<char> encode(const vector<char>& str);
	vector<char> decode(const vector<char>& encoding);

private:
	vector<EncoderEntry> _nodes;

	void generateTree();

};

