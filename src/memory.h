#pragma once

#define CMD_MEMORY_WRITE "KMem"

class Memory
{
public:
	bool WriteFloat(void* address, float value);
};
