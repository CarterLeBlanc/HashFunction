#include "HashFunction.h"

namespace HashFunction 
{
	unsigned int badHash(const char* data, unsigned int length) 
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++) 
		{
			hash += data[i];
		}

		return hash;
	}

	unsigned int bkdrHash(const char* data, unsigned int length) 
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++) 
		{
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0x7FFFFFFF);
	}

	unsigned int colorHash(const char* data, unsigned int length) 
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++) 
		{
			hash = (hash * 1313) + data[i];
		}

		return (hash & 0xffffff);
	}

	unsigned int gravatarHash(const char* data, unsigned int length)
	{
		unsigned int hash = 0;

		for (unsigned int i = 0; i < length; i++)
		{
			hash = ((hash * 1313) * 1313) + data[i];
		}

		return (hash & 0xffffff) * (hash & 0xffffff) + (hash & 0xffffff);
	}
}