#pragma once
class Judy
{
private:
	char fileName[50];

public:
	Judy(const char* fileName);
	
	template <typename T>
	bool write(T* reg, int size = 1);

	template <typename T>
	bool read(T* reg, int size = 1);
};


