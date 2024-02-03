#pragma once
class Judy
{
private:
	char fileName[50];

public:
	Judy(const char*);
	
	template <typename T>
	bool write(T*, int);

	template <typename T>
	bool read(T*, int);
};


