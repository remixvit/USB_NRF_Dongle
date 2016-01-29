/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

#define ExtInterrupt_Reg_Button_Mask 0x01
#define ExtInterrupt_Reg_NRF_Mask 0x02
#define ExtInterrupt_Reg_Empty_Mask 0x03
#define ExtInterrupt_Reg_All_Mask 0x00

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    CyDelay(1000);
    Bootloadable_Load();

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    UART_Start();
    for(;;)
    {
        UART_SpiUartPutArray("Hello", 5);
    }
}

/* [] END OF FILE */
