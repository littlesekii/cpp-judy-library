#define _CRT_SECURE_NO_WARNINGS
#include "Judy.h"
#include <cstring>

Judy::Judy(const char* fileName)
{
	strcpy(this->fileName, fileName);
}