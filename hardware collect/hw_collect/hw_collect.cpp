// hw_collect.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "smbios.h"
#include "baseboard.h"

int _tmain(int argc, _TCHAR* argv[])
{
	printf("SMBIOS Ver:%d.%d \n", SMBIOS::Intance().smbios_version_major_, SMBIOS::Intance().smbios_version_minor_);

	BaseBoard bb;
	printf("Base Board : %s ",   bb.GetManufacturer());
	printf("%s\n",  bb.GetProduct());

	printf("BIOS : %s ",	bb.GetBIOSVendor());
	printf("%s\n",	bb.GetBIOSVersion());
	printf("Release Date : %s\n",	bb.GetBIOSDate());

	return 0;
}

