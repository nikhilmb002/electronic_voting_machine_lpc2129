#include "header.h"

void disp_count(u8 can, s32 count){
	
		lcd_cmd(0x01);
	
    lcd_cmd(0x80);
	
		if(can == '6')
					
				lcd_string("nota : ");
		
		else{
		
			lcd_data('c');
			lcd_data(can);
			lcd_string(" : ");
			
		}
		
		
    lcd_data((count / 10000) + 48);
		
    lcd_data(((count % 10000) / 1000) + 48);
		
    lcd_data(((count % 1000) / 100) + 48);
		
    lcd_data(((count % 100) / 10) + 48);
		
    lcd_data((count % 10) + 48);
}
