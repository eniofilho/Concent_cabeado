#include "utils.h"

/*! \brief Transforma um caracter hexadecimal para ascii */
unsigned char hexToChar(unsigned char hex)
{
  if(hex > 0x0F)
  {
    return '0';
  }
  else if(hex < 0x0A)
  {
    return (hex + '0');
  }
  else
  {
    return (hex - 0x0A + 'A');
  }
}