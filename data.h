#pragma once
#include <string>
#include <fstream>
#include <vector>
using namespace std;
struct product
{
	int left;
	string whole;
	int size;
};

class Data
{
public:
	Data();
	~Data();
	void setGotoT();
	void setAction();
	void setVN();
	void setProduct();
	int nextToken();
public:
	
	int gotoT[153][9];
	string action[153][30];
	vector < string > VN;
	vector<product> prods;
	ifstream in;
};