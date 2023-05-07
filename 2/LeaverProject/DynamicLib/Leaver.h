#pragma once
#include <iostream>
#include <string>


#ifdef MyDLLDefine
#define LIVER_API __declspec(dllexport)
#else 
#define LIVER_API __declspec(dllimport)
#endif

class LIVER_API Leaver {
public:
	std::string Leave(std::string name);
};