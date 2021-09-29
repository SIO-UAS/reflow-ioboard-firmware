/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC16F1508
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set AN2 aliases
#define AN2_TRIS                 TRISAbits.TRISA2
#define AN2_LAT                  LATAbits.LATA2
#define AN2_PORT                 PORTAbits.RA2
#define AN2_WPU                  WPUAbits.WPUA2
#define AN2_ANS                  ANSELAbits.ANSA2
#define AN2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define AN2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define AN2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define AN2_GetValue()           PORTAbits.RA2
#define AN2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define AN2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define AN2_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define AN2_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define AN2_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define AN2_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISAbits.TRISA4
#define LED1_LAT                  LATAbits.LATA4
#define LED1_PORT                 PORTAbits.RA4
#define LED1_WPU                  WPUAbits.WPUA4
#define LED1_ANS                  ANSELAbits.ANSA4
#define LED1_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED1_GetValue()           PORTAbits.RA4
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA5
#define LED2_LAT                  LATAbits.LATA5
#define LED2_PORT                 PORTAbits.RA5
#define LED2_WPU                  WPUAbits.WPUA5
#define LED2_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define LED2_GetValue()           PORTAbits.RA5
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB6 procedures
#define RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define RB6_GetValue()              PORTBbits.RB6
#define RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define RB6_SetPullup()             do { WPUBbits.WPUB6 = 1; } while(0)
#define RB6_ResetPullup()           do { WPUBbits.WPUB6 = 0; } while(0)

// get/set COIL_2 aliases
#define COIL_2_TRIS                 TRISCbits.TRISC0
#define COIL_2_LAT                  LATCbits.LATC0
#define COIL_2_PORT                 PORTCbits.RC0
#define COIL_2_ANS                  ANSELCbits.ANSC0
#define COIL_2_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define COIL_2_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define COIL_2_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define COIL_2_GetValue()           PORTCbits.RC0
#define COIL_2_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define COIL_2_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define COIL_2_SetAnalogMode()      do { ANSELCbits.ANSC0 = 1; } while(0)
#define COIL_2_SetDigitalMode()     do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set COIL_3 aliases
#define COIL_3_TRIS                 TRISCbits.TRISC1
#define COIL_3_LAT                  LATCbits.LATC1
#define COIL_3_PORT                 PORTCbits.RC1
#define COIL_3_ANS                  ANSELCbits.ANSC1
#define COIL_3_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define COIL_3_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define COIL_3_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define COIL_3_GetValue()           PORTCbits.RC1
#define COIL_3_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define COIL_3_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define COIL_3_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define COIL_3_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set COIL_1 aliases
#define COIL_1_TRIS                 TRISCbits.TRISC2
#define COIL_1_LAT                  LATCbits.LATC2
#define COIL_1_PORT                 PORTCbits.RC2
#define COIL_1_ANS                  ANSELCbits.ANSC2
#define COIL_1_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define COIL_1_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define COIL_1_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define COIL_1_GetValue()           PORTCbits.RC2
#define COIL_1_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define COIL_1_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define COIL_1_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define COIL_1_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set IO_RC3 aliases
#define IO_RC3_TRIS                 TRISCbits.TRISC3
#define IO_RC3_LAT                  LATCbits.LATC3
#define IO_RC3_PORT                 PORTCbits.RC3
#define IO_RC3_ANS                  ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set IO_RC4 aliases
#define IO_RC4_TRIS                 TRISCbits.TRISC4
#define IO_RC4_LAT                  LATCbits.LATC4
#define IO_RC4_PORT                 PORTCbits.RC4
#define IO_RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define IO_RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define IO_RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define IO_RC4_GetValue()           PORTCbits.RC4
#define IO_RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set IO_RC5 aliases
#define IO_RC5_TRIS                 TRISCbits.TRISC5
#define IO_RC5_LAT                  LATCbits.LATC5
#define IO_RC5_PORT                 PORTCbits.RC5
#define IO_RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define IO_RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define IO_RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define IO_RC5_GetValue()           PORTCbits.RC5
#define IO_RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)

// get/set IO_RC6 aliases
#define IO_RC6_TRIS                 TRISCbits.TRISC6
#define IO_RC6_LAT                  LATCbits.LATC6
#define IO_RC6_PORT                 PORTCbits.RC6
#define IO_RC6_ANS                  ANSELCbits.ANSC6
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_RC6_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_RC7 aliases
#define IO_RC7_TRIS                 TRISCbits.TRISC7
#define IO_RC7_LAT                  LATCbits.LATC7
#define IO_RC7_PORT                 PORTCbits.RC7
#define IO_RC7_ANS                  ANSELCbits.ANSC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/