/*
 * eagle.h
 *
 *  Created on: Sep 10, 2020
 *      Author: User
 */

#ifndef INC_EAGLE_H_
#define INC_EAGLE_H_
#include "main.h"


#define SPI_LEFT 0xD1
#define SPI_RIGHT 0xD2
#define SPI_UP 0xD3
#define SPI_DOWN 0XD4
#define SPI_STOP_UP_DOWN 0XD5
#define SPI_STOP_LEFT_RIGHT 0XD6

typedef enum {
  uart_LEFT = 3,
  uart_RIGHT,
  uart_UP,
  uart_DOWN,
  uart_CHANGE_DIR = 19,
} list_t;

void send(list_t command, uint8_t speed);

#endif /* INC_EAGLE_H_ */
