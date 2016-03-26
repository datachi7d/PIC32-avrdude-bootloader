/* MikroE boards */

#define     prodPIC32MXClicker          0x0001
#define     prod6LOWPANClicker          0x0002

#if defined(_BOARD_MIKROE_PIC32MX_CLICKER_)
#define _CONFIG_VALID_

#if defined(PUT_CONFIG_BITS_HERE)

 // DEVCFG3
// USERID = No Setting
#pragma config FSRSSEL = PRIORITY_7     // SRS Select (SRS Priority 7)
#pragma config FCANIO = ON              // CAN I/O Pin Select (Default CAN I/O)
#pragma config FUSBIDIO = ON            // USB USID Selection (Controlled by the USB Module)
#pragma config FVBUSONIO = ON           // USB VBUS ON Selection (Controlled by USB Module)

// DEVCFG2
#pragma config FPLLIDIV = DIV_2         // PLL Input Divider (2x Divider)
#pragma config FPLLMUL = MUL_20         // PLL Multiplier (20x Multiplier)
#pragma config UPLLIDIV = DIV_2         // USB PLL Input Divider (2x Divider)
#pragma config UPLLEN = ON              // USB PLL Enable (Enabled)
#pragma config FPLLODIV = DIV_1         // System PLL Output Clock Divider (PLL Divide by 1)

// DEVCFG1
#pragma config FNOSC = PRIPLL           // Oscillator Selection Bits (Primary Osc w/PLL (XT+,HS+,EC+PLL))
#pragma config FSOSCEN = ON             // Secondary Oscillator Enable (Enabled)
#pragma config IESO = OFF               // Internal/External Switch Over (Disabled)
#pragma config POSCMOD = HS             // Primary Oscillator Configuration (HS osc mode)
#pragma config OSCIOFNC = OFF           // CLKO Output Signal Active on the OSCO Pin (Disabled)
#pragma config FPBDIV = DIV_1           // Peripheral Clock Divisor (Pb_Clk is Sys_Clk/1)
#pragma config FCKSM = CSECME           // Clock Switching and Monitor Selection (Clock Switch Enable, FSCM Enabled)
#pragma config WDTPS = PS1024           // Watchdog Timer Postscaler (1:1024)
#pragma config FWDTEN = OFF             // Watchdog Timer Enable (WDT Disabled (SWDTEN Bit Controls))

// DEVCFG0
#pragma config DEBUG = OFF              // Background Debugger Enable (Debugger is disabled)
#pragma config ICESEL = ICS_PGx2        // ICE/ICD Comm Channel Select (ICE EMUC2/EMUD2 pins shared with PGC2/PGD2)
#pragma config PWP = OFF                // Program Flash Write Protect (Disable)
#pragma config BWP = OFF                // Boot Flash Write Protect bit (Protection Disabled)
#pragma config CP = OFF                 // Code Protect (Protection Disabled)

#endif

    #define CAPABILITIES    (blCapBootLED | blCapDownloadLED | blCapUSBInterface | blCapProgramButton | blCapVirtualProgramButton | CAPCOMMON)

    // BTN / LED sense
    #define LedOn       High
    #define BntOn       Low

    // Boot LED
    #define BLedLat     D
    #define BLedBit     1

    // Data LED
    #define DLedLat     D
    #define DLedBit     4

    // Virtual program button
    #define VPBntLat    B
    #define VPBntBit    4

    // Program button
    #define PBntPort    B
    #define PBntBit     4

    #define _CPU_NAME_                  "32MX534F064H"
    #define VEND                        vendMikroE
    #define PROD                        prodPIC32MXClicker
    #define F_CPU                       80000000UL
    #define F_PBUS                      F_CPU

    #define FLASH_BYTES                 0x10000                     // 64K
    #define FLASH_PAGE_SIZE             4096
    #define LoadFlashWaitStates()       (CHECON = 2)            // 0 for 0-30Mhz, 1 for 31-60Mhz, 2 for 61-80Mhz
#endif

#if defined(_BOARD_MIKROE_6LOWPAN_CLICKER_)
#define _CONFIG_VALID_

#if defined(PUT_CONFIG_BITS_HERE)

#pragma config FNOSC     = PRIPLL            // Oscillator Selection
#pragma config FPLLIDIV  = DIV_2             // PLL Input Divider (PIC32 Starter Kit: use divide by 2 only)
#pragma config FPLLMUL   = MUL_20            // PLL Multiplier
#pragma config FPLLODIV  = DIV_1             // PLL Output Divider
#pragma config UPLLIDIV = DIV_2         // USB PLL Input Divider (2x Divider)
#pragma config UPLLEN = ON              // USB PLL Enable (Enabled)
#pragma config FPBDIV    = DIV_1             // Peripheral Clock divisor

#pragma config FWDTEN    = OFF               // Watchdog Timer
#pragma config WDTPS     = PS32768           // Watchdog Timer Postscale
#pragma config FCKSM     = CSDCMD            // Clock Switching & Fail Safe Clock Monitor
#pragma config OSCIOFNC  = OFF               // CLKO Enable
#pragma config POSCMOD   = HS                // Primary Oscillator
#pragma config IESO      = OFF               // Internal/External Switch-over
#pragma config FSOSCEN   = ON               // Secondary Oscillator Enable

#pragma config CP        = OFF               // Code Protect
#pragma config BWP       = OFF               // Boot Flash Write Protect
#pragma config PWP       = OFF               // Program Flash Write Protect
#pragma config ICESEL    = ICS_PGx2          // ICE/ICD Comm Channel Select
#pragma config DEBUG     = OFF               // Debugger Disabled for Starter Kit
#pragma config FSRSSEL   = PRIORITY_7

#pragma config FUSBIDIO = ON            // USB USID Selection (Controlled by the USB Module)
#pragma config FVBUSONIO = ON           // USB VBUS ON Selection (Controlled by USB Module)

#endif

    #define CAPABILITIES    (blCapBootLED | blCapDownloadLED | blCapUSBInterface | blCapProgramButton | blCapVirtualProgramButton | CAPCOMMON)

    // BTN / LED sense
    #define LedOn       High
    #define BntOn       Low

    // Boot LED
    #define BLedLat     B
    #define BLedBit     1

    // Data LED
    #define DLedLat     B
    #define DLedBit     2

    // Virtual program button
    #define VPBntLat    E
    #define VPBntBit    7

    // Program button
    #define PBntPort    E
    #define PBntBit     7

    #define _CPU_NAME_                  "32MX470F512H"
    #define VEND                        vendMikroE
    #define PROD                        prod6LOWPANClicker
    #define F_CPU                       80000000UL
    #define F_PBUS                      F_CPU

    #define FLASH_BYTES                 0x80000                     // 512K
    #define FLASH_PAGE_SIZE             4096
    #define LoadFlashWaitStates()       (CHECON = 2)            // 0 for 0-30Mhz, 1 for 31-60Mhz, 2 for 61-80Mhz
#endif

