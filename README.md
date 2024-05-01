# electronic_voting_machine using LPC2129 

# electronic voting machine

## Description
This project simulates an electronic voting machine using lpc2129 microcontroller.

## Features

- **Candidate Selection:** Vote can cast to candidates 1 to 5 using switches SW1-SW5. Switch SW6 is reserved for selecting the "None of the Above" (NOTA) option.
  
- **Presiding Officer Control:** Switch SW7 acts as a control for presiding officer. Only when the presiding officer presses this switch voters can cast their votes. When the presiding officer presses SW7, a green LED blinks to indicates the system is ready to accept votes.

- **Vote Casting:** After the presiding officer presses SW7, voters can cast their votes by pressing the corresponding candidate switch. When a candidate switch is pressed, the LED corresponding to that candidate blinks to confirm the vote.

- **Vote Counting:** Switch Sw8 is used to view the vote count. Each press of SW8 displays the vote count of a specific candidate or NOTA. The count cycles through all candidates and NOTA with eaxh press
  
-  **RESET:** Switch SW9 serves as a reset button, allowing the presding officer to reset the vote count and voting state.


## Microcontroller Selection 

Due to unavailability of the LPC2129 microcontroller in Proteus, the similiar LPC2138 microcontroller was choosen for simulation purposes. The functionality remains the same, with minor differences in specifications.





