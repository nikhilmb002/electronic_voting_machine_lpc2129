#include "header.h"

u8 sym0[8] = {0x00, 0x0A, 0x1F, 0x1F, 0x1F, 0x0E, 0x04, 0x00};

u8 sym1[8] = {0x0E, 0x0E, 0x04, 0x0E, 0x15, 0x04, 0x0A, 0x0A};

u8 sym2[8] = {0x1F, 0x1D, 0x1B, 0x1D, 0x1F, 0x10, 0x10, 0x10};

u8 sym3[8] = {0x04, 0x0A, 0x11, 0x11, 0x0A, 0x04, 0x00, 0x00};

u8 sym4[8] = {0x04, 0x0A, 0x1F, 0x0A, 0x15, 0x1B, 0x11, 0x00};


void lcd_cgram(u8 custom_char[], u8 cm){
	
    lcd_cmd(cm); 
	
    for (int i = 0; i < 8; i++) 
	
        lcd_data(custom_char[i]); 
}


void display(){
			
		lcd_init();
	
		lcd_cmd(0x80);
	
		lcd_string("c1");
	
		lcd_cgram(sym0, 0x40);
	
		lcd_cmd(0x82);
	
		lcd_data(0);
	
		lcd_cmd(0x86);
	
		lcd_string("c2");
	
		lcd_cgram(sym1, 0x48);
	
		lcd_cmd(0x88);
	
		lcd_data(1);
		
		lcd_cmd(0x8C);
		
		lcd_string("c3");
		
		lcd_cgram(sym2, 0x50);
		
		lcd_cmd(0x8E);
		
		lcd_data(2);
		
		lcd_cmd(0xC0);
	
		lcd_string("c4");
	
		lcd_cgram(sym3, 0x58);
	
		lcd_cmd(0xC2);
	
		lcd_data(3);
	
		lcd_cmd(0xC6);
	
		lcd_string("c5");
	
		lcd_cgram(sym4, 0x60);
	
		lcd_cmd(0xC8);
	
		lcd_data(4);
		
		lcd_cmd(0xCC);
		
		lcd_string("nota");
					
}

