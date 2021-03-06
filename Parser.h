#pragma once
#include <iostream>
#include <vector>
#include "Context.h"

using namespace std;

class Parser
{
public:
	Parser(string fileName);
	vector<Context>& getContexts();

public:
	static string readFile(string& fileName);

private:
	string _fileName;
	vector<Context> _contexts;

private:
	void parseLine(string& line, int lineNumber);
	string clearLine(string& line);
};

