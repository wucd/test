#include <cstdio>
#include <iostream>
#include <uv.h>
//#include "CxxTag.h"
//extern std::wstring GetName();

int main()
{
	//CxxTag tag;
	//std::wcout << L"tag name is " << tag.GetName() << std::endl;
	//std::wcout << GetName() << std::endl;
	uv_loop_t t;
	//active_handles.active_handles = 11;
	int l = uv_loop_init(&t);
    return 0;
}