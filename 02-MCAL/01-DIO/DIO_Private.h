/****************************************************/
/*   AUTHOR      : ALI ELSHEIKH                     */
/*   Description : DIO DRIVER                       */
/*   DATE        : 19 AGU 2021                      */
/*   VERSION     : V01                              */
/****************************************************/

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

/************************************************************/
/* PORT A Register Mapping									*/
/************************************************************/
#define DIO_u8_PORTA_REG        *((volatile u8 *)0x3B)
#define DIO_u8_DDRA_REG         *((volatile u8 *)0x3A)
#define DIO_u8_PINA_REG         *((volatile u8 *)0x39)

/************************************************************/
/* PORT B Register Mapping									*/
/************************************************************/
#define DIO_u8_PORTB_REG        *((volatile u8 *)0x38)
#define DIO_u8_DDRB_REG         *((volatile u8 *)0x37)
#define DIO_u8_PINB_REG         *((volatile u8 *)0x36)

/************************************************************/
/* PORT C Register Mapping									*/
/************************************************************/
#define DIO_u8_PORTC_REG        *((volatile u8 *)0x35)
#define DIO_u8_DDRC_REG         *((volatile u8 *)0x34)
#define DIO_u8_PINC_REG         *((volatile u8 *)0x33)

/************************************************************/
/* PORT D Register Mapping									*/
/************************************************************/
#define DIO_u8_PORTD_REG        *((volatile u8 *)0x32)
#define DIO_u8_DDRD_REG         *((volatile u8 *)0x31)
#define DIO_u8_PIND_REG         *((volatile u8 *)0x30)

#define DIO_u8_INITIAL_OUTPUT     1
#define DIO_u8_INITIAL_INPUT      0

#define DIO_u8_OUTPUT_HIGH        1
#define DIO_u8_OUTPUT_LOW         0

#define DIO_u8_INPUT_PULLUP       1
#define DIO_u8_INPUT_FLOATING     0


#endif /* INCLUDE_MCAL_DIO_DIO_PRIVATE_H_ */
