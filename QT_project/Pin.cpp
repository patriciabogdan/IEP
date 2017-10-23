#include "pin.h"
#include "bcm2835.h"

Pin:Pin(int pin,int directie,int stare)
{
     this->pin = pin;
     this->directie = directie;
     this->stare = stare;
}

int Pin::get()
{
    if(directie == 0)
  	return bcm2835_gpio_lev(this->pin);
    else
	return -1;
}

int Pin::set(int stare)
{
  if(directie == 1)
  {
	if(stare == 1)
	{
		bcm2835_gpio_write(this->pin, HIGH);
	}
	else
	{
		bcm2835_gpio_write(this->pin, LOW);
	}

	this->stare = stare;	 
  }
}
void Pin::change_direction(int dir)
{
  if(directie == 1)
  {
     bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_INPT);
  }
  else
  {
     bcm2835_gpio_fsel(PIN, BCM2835_GPIO_FSEL_OUTP);
  }
  this->directie = dir;
}
