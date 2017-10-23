class Pin{

private:
    int pin;
    int directie;
    int stare;


     Pin:Pin(int pin,int directie,int stare)
{
     this.pin->pin;
     this.directie->directie;
     this.stare->stare;
}

Public:
    void set_pin(int pin);
    int get_direction();
    void change_direction(int dir);

int get_direction()
{ 
  return this.directie; 
  
 }

void set_pin(int pin)
{
  if(this.stare == 1)
  {
	this.pin = pin;  
  }
}


void change_direction(int dir)
{
  this.directie = dir;
}

}