/*******************************************************************************
 * module External EEPROM
 *
 * file name: external_eeprom.h
 *
 *  Description: header file for the external EEPROM driver
 *
 *  Author: abdelrahman gomaa
 *
 *******************************************************************************/

#ifndef EXTERNAL_EEPROM_H_
#define EXTERNAL_EEPROM_H_
#include "std_types.h"

#define SUCCESS 1
#define ERROR 0

uint8 EEPROM_writeByte(uint16 address,uint8 data);
uint8 EEPROM_readByte(uint16 address,uint8 *data);


#endif /* EXTERNAL_EEPROM_H_ */
