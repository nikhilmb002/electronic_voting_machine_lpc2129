#include <LPC21XX.H>

typedef unsigned int u32;

typedef signed int s32;

typedef unsigned char u8;

typedef signed char s8;

extern void delay_ms(u32);

extern void delay_sec(u32);

extern void lcd_data(u8);

extern void lcd_cmd(u32);

extern void lcd_init(void);

extern void lcd_string(s8 *);

extern void uart0_init(u32 baud);

extern u8 uart_rx(void);

extern void uart0_tx(u8 data);

extern void uart0_tx_string(s8 *);

extern void uart0_rx_string(s8 *, u32);

extern void uart1_init(u32 baud);

extern u8 uart1_rx(void);

extern void uart1_tx(u8 data);

extern void uart1_tx_string(s8 *);

extern void uart1_rx_string(s8 *, u32);

extern void display(void);

extern void lcd_cgram(u8 *, u8);

extern void disp_count(u8, s32);

extern void blink_led(u32);


