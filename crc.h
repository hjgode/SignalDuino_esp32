#ifndef _UTIL_CRC16ESP32_H_
#define _UTIL_CRC16ESP32_H_

#include <stdint.h>

    uint8_t
    _crc_ibutton_update(uint8_t crc, uint8_t data)
    {
	uint8_t i;

	crc = crc ^ data;
	for (i = 0; i < 8; i++)
	{
	    if (crc & 0x01)
	        crc = (crc >> 1) ^ 0x8C;
	    else
	        crc >>= 1;
	}

	return crc;
    }
#endif /* _UTIL_CRC16ESP32_H_ */
