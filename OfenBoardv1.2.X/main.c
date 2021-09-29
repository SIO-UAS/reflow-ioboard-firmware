/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1508
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#define _XTAL_FREQ 16000000

/*
                         Main application
 */

uint8_t hres = 0;
uint8_t lres = 0;
uint8_t cmd =0;
bool Led1toggle = 0;
bool holadcr = false;


//Meine I2C ISR Handler (Custom Interrupt service Routine)
void CReI2C(){
    //I2C_SendAck();
    //I2C_Write(0xBE);
    //I2C_Write(0xBE);
    //I2C_SendAck();
    //I2C_Write(0xEF);
    
    
    //Plan B
    
     if(holadcr == false){
        I2C_Write(ADRESH);
        holadcr = true;
     }
     else{
        I2C_Write(ADRESH);
        holadcr = false;
     }
     
    LED1_SetLow();
    Led1toggle = 0;
}
void CWrI2C(){
    //I2C_SendAck();
    cmd = I2C_Read();
    //I2C_SendAck();
    LED1_SetLow();
    Led1toggle = 1;
}


void main(void)
{
    // initialize the device
     
    SYSTEM_Initialize();
    LED1_SetHigh();
    __delay_ms(1000);

    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
    ADC_SelectChannel(AN2); // THE only Channel we need (PT100 / Instrumentation Amplifier) // Is it tough?
    I2C_Open();
    
   
    I2C_SlaveSetReadIntHandler(CWrI2C); // Interrupt handler wenn I2C Master etwas Schreiben möchte
    I2C_SlaveSetWriteIntHandler(CReI2C); // Interrupt handler wenn I2C Master etwas lesen möchte
    
   

    while (1)
    {
        
        //ADCON0bits.GO = 1;
        ADC_StartConversion();
        while(ADC_IsConversionDone() == false);
        hres = ADRESH;
        lres = ADRESL;
        
       /* if(LED1_GetValue()){
             
            __delay_ms(1000);
            LED1_SetLow();
        }*/
        if(cmd != 0){
            LED1_Toggle();
            __delay_ms(1000);
            LED1_Toggle();
            switch(cmd){
                case 1:
                    COIL_1_SetHigh();
                    break;
                case 2:
                    COIL_1_SetLow();
                    break;
                case 3:
                    COIL_2_SetHigh();
                    break;
                case 4:
                    COIL_2_SetLow();
                    break;
                case 5:
                    COIL_3_SetHigh();
                    break;
                case 6:
                    COIL_3_SetLow();
                    break;
                default:
                    break;
                
                
            }
            cmd = 0;
        }
        
        LED2_Toggle();
        if(Led1toggle){
            LED1_Toggle();
        }
        //for(int i = lres; i>0; i--){
            __delay_ms(100);
        //}
        // Add your application code
    }
}
/**
 End of File
*/