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
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.65.2
        Device            :  PIC16F18855
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.45
        MPLAB 	          :  MPLAB X 4.15	
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

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED1 aliases
#define LED1_TRIS                 TRISAbits.TRISA0
#define LED1_LAT                  LATAbits.LATA0
#define LED1_PORT                 PORTAbits.RA0
#define LED1_WPU                  WPUAbits.WPUA0
#define LED1_OD                   ODCONAbits.ODCA0
#define LED1_ANS                  ANSELAbits.ANSA0
#define LED1_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define LED1_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define LED1_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define LED1_GetValue()           PORTAbits.RA0
#define LED1_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define LED1_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA1
#define LED2_LAT                  LATAbits.LATA1
#define LED2_PORT                 PORTAbits.RA1
#define LED2_WPU                  WPUAbits.WPUA1
#define LED2_OD                   ODCONAbits.ODCA1
#define LED2_ANS                  ANSELAbits.ANSA1
#define LED2_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define LED2_GetValue()           PORTAbits.RA1
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA1 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA1 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONAbits.ODCA1 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONAbits.ODCA1 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set LED3 aliases
#define LED3_TRIS                 TRISAbits.TRISA2
#define LED3_LAT                  LATAbits.LATA2
#define LED3_PORT                 PORTAbits.RA2
#define LED3_WPU                  WPUAbits.WPUA2
#define LED3_OD                   ODCONAbits.ODCA2
#define LED3_ANS                  ANSELAbits.ANSA2
#define LED3_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define LED3_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define LED3_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define LED3_GetValue()           PORTAbits.RA2
#define LED3_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define LED3_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define LED3_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define LED3_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define LED3_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define LED3_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define LED3_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define LED3_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED4 aliases
#define LED4_TRIS                 TRISAbits.TRISA3
#define LED4_LAT                  LATAbits.LATA3
#define LED4_PORT                 PORTAbits.RA3
#define LED4_WPU                  WPUAbits.WPUA3
#define LED4_OD                   ODCONAbits.ODCA3
#define LED4_ANS                  ANSELAbits.ANSA3
#define LED4_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define LED4_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define LED4_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define LED4_GetValue()           PORTAbits.RA3
#define LED4_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define LED4_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define LED4_SetPullup()          do { WPUAbits.WPUA3 = 1; } while(0)
#define LED4_ResetPullup()        do { WPUAbits.WPUA3 = 0; } while(0)
#define LED4_SetPushPull()        do { ODCONAbits.ODCA3 = 0; } while(0)
#define LED4_SetOpenDrain()       do { ODCONAbits.ODCA3 = 1; } while(0)
#define LED4_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define LED4_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set POTE aliases
#define POTE_TRIS                 TRISAbits.TRISA4
#define POTE_LAT                  LATAbits.LATA4
#define POTE_PORT                 PORTAbits.RA4
#define POTE_WPU                  WPUAbits.WPUA4
#define POTE_OD                   ODCONAbits.ODCA4
#define POTE_ANS                  ANSELAbits.ANSA4
#define POTE_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define POTE_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define POTE_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define POTE_GetValue()           PORTAbits.RA4
#define POTE_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define POTE_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define POTE_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define POTE_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define POTE_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define POTE_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define POTE_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define POTE_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set SW aliases
#define SW_TRIS                 TRISAbits.TRISA5
#define SW_LAT                  LATAbits.LATA5
#define SW_PORT                 PORTAbits.RA5
#define SW_WPU                  WPUAbits.WPUA5
#define SW_OD                   ODCONAbits.ODCA5
#define SW_ANS                  ANSELAbits.ANSA5
#define SW_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define SW_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define SW_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define SW_GetValue()           PORTAbits.RA5
#define SW_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define SW_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define SW_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define SW_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define SW_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define SW_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define SW_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define SW_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set B4 aliases
#define B4_TRIS                 TRISCbits.TRISC4
#define B4_LAT                  LATCbits.LATC4
#define B4_PORT                 PORTCbits.RC4
#define B4_WPU                  WPUCbits.WPUC4
#define B4_OD                   ODCONCbits.ODCC4
#define B4_ANS                  ANSELCbits.ANSC4
#define B4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define B4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define B4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define B4_GetValue()           PORTCbits.RC4
#define B4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define B4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define B4_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define B4_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define B4_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define B4_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define B4_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define B4_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set B3 aliases
#define B3_TRIS                 TRISCbits.TRISC5
#define B3_LAT                  LATCbits.LATC5
#define B3_PORT                 PORTCbits.RC5
#define B3_WPU                  WPUCbits.WPUC5
#define B3_OD                   ODCONCbits.ODCC5
#define B3_ANS                  ANSELCbits.ANSC5
#define B3_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define B3_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define B3_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define B3_GetValue()           PORTCbits.RC5
#define B3_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define B3_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define B3_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define B3_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define B3_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define B3_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define B3_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define B3_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set B2 aliases
#define B2_TRIS                 TRISCbits.TRISC6
#define B2_LAT                  LATCbits.LATC6
#define B2_PORT                 PORTCbits.RC6
#define B2_WPU                  WPUCbits.WPUC6
#define B2_OD                   ODCONCbits.ODCC6
#define B2_ANS                  ANSELCbits.ANSC6
#define B2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define B2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define B2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define B2_GetValue()           PORTCbits.RC6
#define B2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define B2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define B2_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define B2_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define B2_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define B2_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define B2_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define B2_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set B1 aliases
#define B1_TRIS                 TRISCbits.TRISC7
#define B1_LAT                  LATCbits.LATC7
#define B1_PORT                 PORTCbits.RC7
#define B1_WPU                  WPUCbits.WPUC7
#define B1_OD                   ODCONCbits.ODCC7
#define B1_ANS                  ANSELCbits.ANSC7
#define B1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define B1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define B1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define B1_GetValue()           PORTCbits.RC7
#define B1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define B1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define B1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define B1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define B1_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define B1_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define B1_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define B1_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

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