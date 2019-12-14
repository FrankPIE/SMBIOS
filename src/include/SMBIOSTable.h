/*
* Copyright (C) 2019 MadStrawberry
* Distributed under the GNU GPL v2. For full terms see the file LICENSE
* License: http://www.gnu.org/licenses/gpl.html GPL version 2 or higher
*/

#ifndef _HDC_SMBIOS_TABLE_H_
#define _HDC_SMBIOS_TABLE_H_

#include <stdint.h>

#include <HDCConfig.h>

#if defined(__cplusplus)
extern "C" {
#endif

typedef struct _hdc_smbios_table_data_t hdc_smbios_table_data_t;

typedef struct _smbios_uuid_t
{
	uint8_t uuid[16];
} smbios_uuid_t;

/**
 * \brief 
 * \param table_data 
 * \return 
 */
int HDC_CALLBACK_API  hdc_smbios_init(hdc_smbios_table_data_t** table_data);

/**
 * \brief 
 * \param table_data 
 * \return 
 */
const char* HDC_CALLBACK_API hdc_smbios_bios_vendor(hdc_smbios_table_data_t* table_data);

/**
 * \brief 
 * \param table_data 
 * \return 
 */
const char* HDC_CALLBACK_API hdc_smbios_bios_version(hdc_smbios_table_data_t* table_data);

/**
 * \brief 
 * \param table_data 
 * \return 
 */
const char* HDC_CALLBACK_API hdc_smbios_bios_release_date(hdc_smbios_table_data_t* table_data);

/**
 * \brief 
 * \param table_data 
 * \param uuid 
 * \return 
 */
int HDC_CALLBACK_API hdc_smbios_system_uuid(hdc_smbios_table_data_t* table_data, smbios_uuid_t* uuid);

/**
 * \brief 
 * \param table_data 
 * \return 
 */
const char* HDC_CALLBACK_API hdc_smbios_baseboard_manufacturer(hdc_smbios_table_data_t* table_data);

/**
 * \brief 
 * \param table_data 
 * \return 
 */
const char* HDC_CALLBACK_API hdc_smbios_baseboard_product(hdc_smbios_table_data_t* table_data);

/**
 * \brief 
 * \param table_data 
 */
void HDC_CALLBACK_API hdc_smbios_destroy(hdc_smbios_table_data_t* table_data);

#if defined(__cplusplus)
}
#endif

#endif 