#pragma once
#include <functional>

namespace HashFunction
{
	typedef std::function<unsigned int(const char*, unsigned int)> HashFunc;

	//Basic addition hash
	unsigned int badHash(const char*data, unsigned int length);

	//Hash function by Brian Kernighan and Dennis Ritchie
	unsigned int bkdrHash(const char* data, unsigned int length);

	//Custom hash function
	unsigned int colorHash(const char* data, unsigned int length);

	//Gravatar hash
	unsigned int gravatarHash(const char* data, unsigned int length);

	//Helps access a default hash function
	static HashFunc defaultHash = gravatarHash;
};