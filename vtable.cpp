#include <Windows.h>
#include "vtable.h"

vftable::vftable(void* obj)
{
	table = *(void***) obj;
}

void* vftable::getfunction(int i)
{
	return table[i];
}

void* vftable::setfunction(int i, void* hk)
{
	void* org = getfunction(i);
	DWORD flags;
	VirtualProtect(&table[i], sizeof(void*), PAGE_EXECUTE_READWRITE, &flags);
	table[i] = hk;
	VirtualProtect(&table[i], sizeof(void*), flags, NULL);

	return org;
}
