#ifndef SPI_H
#define SPI_H

#include "serial.h"
#include "stdint.h"

class Spi : public Serial
{
    public:
        Spi(uint8_t order,uint8_t dataMode, uint16_t divider,uint8_t chip,uint8_t polarity);
        uint8_t Transfer(uint8_t SendData);
};

#endif // SPI_H
