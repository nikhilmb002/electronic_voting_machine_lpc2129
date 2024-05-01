#include "header.h"

#define SW1  (((IOPIN0 >> 2) & 1))
#define SW2  (((IOPIN0 >> 3) & 1))
#define SW3  (((IOPIN0 >> 4) & 1))
#define SW4  (((IOPIN0 >> 5) & 1))
#define SW5  (((IOPIN0 >> 6) & 1))
#define SW6  (((IOPIN0 >> 7) & 1))
#define SW7  (((IOPIN0 >> 14) & 1))
#define SW8  (((IOPIN0 >> 15) & 1))
#define SW9  (((IOPIN0 >> 12) & 1))
#define LEDM (1 << 16)
#define LED1 (1 << 31)
#define LED2 (1 << 30)
#define LED3 (1 << 29)
#define LED4 (1 << 28)
#define LED5 (1 << 27)
#define LED6 (1 << 26)

main(){
	
    s32 c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, n1 = 0;
    s32 flag = 0, sw8_count = 0; 
	
    lcd_init();
	
    display();

    while(1){
			
        if(SW7 == 0 && flag == 0){
            while (SW7 == 0);
						display();
            flag = 1;
						IODIR0 |= LEDM;
						IOCLR0 |= LEDM;
        } 
				
        if(SW1 == 0 && flag == 1){
            while(SW1 == 0); 
            c1++;
						flag = 0;
						blink_led(LED1);
        }
				
        if(SW2 == 0 && flag == 1){
            while(SW2 == 0); 
            c2++;
            flag = 0;
						blink_led(LED2);
        }  
				
        if(SW3 == 0 && flag == 1){
            while (SW3 == 0); 
            c3++; 
            flag = 0;
						blink_led(LED3);
        }
				
        if(SW4 == 0 && flag == 1){
            while (SW4 == 0); 
            c4++;
            flag = 0;
						blink_led(LED4);
				}
				
        if(SW5 == 0 && flag == 1){
            while (SW5 == 0); 
            c5++; 
            flag = 0;
						blink_led(LED5);
        }
				
        if(SW6 == 0 && flag == 1){
            while (SW6 == 0); 
            n1++; 
            flag = 0;
						blink_led(LED6);					
        }
				
				if(SW9 == 0){
            while(SW9 == 0);
						c1 = c2 = c3 = c4 = c5 = n1 = 0;
						sw8_count = 0;
						flag = 0;	
						display(); 
				}
				
        if(SW8 == 0 && flag == 0){
					
            while (SW8 == 0);
            sw8_count++;
					
            if (sw8_count > 6) { 
                sw8_count = 1;
            }
						
            switch(sw8_count){
							
                case 1:
									disp_count('1', c1);
                    break;
								
                case 2:
                    disp_count('2', c2);
                    break;
								
                case 3:
                    disp_count('3', c3);
                    break;
								
                case 4:
                    disp_count('4', c4);
                    break;
								
                case 5:
                    disp_count('5', c5);
                    break;
								
                case 6:
                    disp_count('6', n1);
                    break;
            }
        }
    }
}
