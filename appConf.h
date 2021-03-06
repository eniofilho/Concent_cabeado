#ifndef __APP_CONF_H__
#define __APP_CONF_H__

extern volatile const unsigned char * MAC_CONC;

#define SIZE_CONC_MAC 4
#define CONC_TIPO     0x03

#define SIZE_SENS_ID 8
#define SIZE_SENS_TIPO 2
#define SIZE_SENS_VAL 4

#define NUM_SENS 10
#define NUM_ACIONADORES 4
#define NUM_RELES 4

//Mapeamento de mem�ria
#define SIZE_IP 4
#define SIZE_PORTA 2

#define IP_SERVIDOR_0 10
#define IP_SERVIDOR_1 1
#define IP_SERVIDOR_2 1
#define IP_SERVIDOR_3 254

#define VERSION_MAJOR '2'
#define VERSION_MINOR '4'

#define PORTA 0x157C
//#define PORTA 0x1588
//#define PORTA 0x04D2

#endif