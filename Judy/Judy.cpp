#define _CRT_SECURE_NO_WARNINGS
#include "Judy.h"
#include <fstream>
#include <cstring>

using std::ifstream;
using std::ofstream;
using std::ios;

Judy::Judy(const char* fileName)
{
	strcpy(this->fileName, fileName);
}

template<typename T>
bool Judy::write(T* reg, int size)
{
	ofstream fout;
	fout.open(this->fileName, ios::binary | ios::trunc);

	if (fout.is_open())
	{
		fout.write((char*)reg, sizeof(T) * size);
	}
	fout.close();
	return true;
}

template<typename T>
bool Judy::read(T* reg, int size)
{
	ifstream fin;
	fin.open(this->fileName, ios::binary | ios::in);

	if (fin.is_open())
	{
		fin.read((char*)reg, sizeof(T) * size);
	}
	fin.close();
	return true;
}
