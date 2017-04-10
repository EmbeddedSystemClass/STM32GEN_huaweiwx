//Autogenerated file
//MCU name: STM32L031G6
//MCU  xml: STM32L031G(4-6)Ux.xml
//GPIO remap/alternate function xml: GPIO-STM32L031_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type port_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_1 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOC, GPIO_PIN_14},
  { GPIOC, GPIO_PIN_15},
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB1 ,
   PB3 ,
   PB6 ,
   PB7 ,
   PC14,
   PC15,
NUM_PINS,
};
*/

const alternate_pin_type alternate_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_9  , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF1_I2C1  }, 
}; 

const alternate_pin_type alternate_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_10 , GPIO_AF1_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF1_I2C1  }, 
}; 

const alternate_pin_type alternate_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_0  , GPIO_AF1_SPI1  }, 
}; 

const alternate_pin_type alternate_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_1  , GPIO_AF1_SPI1  }, 
}; 

const alternate_pin_type alternate_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF0_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF0_SPI1  }, 
}; 

const alternate_pin_type alternate_usart_rx [] = {
//USART2
    { USART2, GPIOA, GPIO_PIN_10 , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_15 , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF4_USART2}, 
    { USART2, GPIOB, GPIO_PIN_7  , GPIO_AF0_USART2}, 
}; 

const alternate_pin_type alternate_usart_tx [] = {
//USART2
    { USART2, GPIOA, GPIO_PIN_14 , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF4_USART2}, 
    { USART2, GPIOA, GPIO_PIN_9  , GPIO_AF4_USART2}, 
    { USART2, GPIOB, GPIO_PIN_6  , GPIO_AF0_USART2}, 
}; 
