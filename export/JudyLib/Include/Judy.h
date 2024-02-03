#pragma once
#include <fstream>
using std::ifstream;
using std::ofstream;
using std::ios;

class Judy
{
private:
	char fileName[50];

public:
	Judy(const char* fileName);
	
	template <typename T>
	bool write(T& reg, int size = 1);

	template <typename T>
	bool read(T& reg, int size = 1);
};

template<typename T>
inline bool Judy::write(T& reg, int size)
{
	ofstream fout;
	fout.open(this->fileName, ios::binary | ios::trunc);

	if (fout.is_open())
	{
		fout.write((char*)&reg, sizeof(T) * size);
	}
	fout.close();
	return true;
}

template<typename T>
inline bool Judy::read(T& reg, int size)
{
	ifstream fin;
	fin.open(this->fileName, ios::binary | ios::in);

	if (fin.is_open())
	{
		fin.read((char*)&reg, sizeof(T) * size);
	}
	fin.close();
	return true;
}
