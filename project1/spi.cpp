#include "spi.h"
#include "serial.h"
#include "stdint.h"
#include "bcm2835.h"

Spi::Spi(uint8_t order,uint8_t dataMode, uint16_t divider,uint8_t chip,uint8_t polarity)
{
    bcm2835_spi_setBitOrder(order);       // The default
    bcm2835_spi_setDataMode(dataMode);    // The default
    bcm2835_spi_setClockDivider(divider); // The default
    bcm2835_spi_chipSelect(chip);         // The default
    bcm2835_spi_setChipSelectPolarity(polarity, LOW);  // the defaul
}


uint8_t Spi::Transfer(uint8_t SendData)
{
    return bcm2835_spi_transfer(SendData);
}

