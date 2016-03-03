#pragma once
#include <string>

#define EVENT_MESSAGE_SIZE		sizeof(DEBUG_EVENT)
#define CONTINUE_MESSAGE_SIZE	sizeof(CONTINUE_DEBUG_EVENT)
static inline std::string makePipeName(DWORD pid)
{
	char buf[256];
	sprintf_s(buf, "\\\\.\\pipe\\__xdbg__%u__", 0);
	return buf;
}

struct CONTINUE_DEBUG_EVENT {
	DWORD dwProcessId;
	DWORD dwThreadId;
	DWORD dwContinueStatus;
};
