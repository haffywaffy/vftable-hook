#pragma once

#define WIN32_LEAN_AND_MEAN

#include <cstdio>

/* just a very templated simple vtable manager */

class vftable
{
private:
	void** table;
public:
	vftable(void* obj);
	void* getfunction(int i);
	void* setfunction(int i, void* hk);

	template <typename fn>
	inline fn getfunction(int i)
	{
		return reinterpret_cast<fn>(getfunction(i));
	}

	template <typename fn>
	inline fn setfunction(int i, void* hk)
	{
		return reinterpret_cast<fn>(setfunction(i, hk));
	}
};