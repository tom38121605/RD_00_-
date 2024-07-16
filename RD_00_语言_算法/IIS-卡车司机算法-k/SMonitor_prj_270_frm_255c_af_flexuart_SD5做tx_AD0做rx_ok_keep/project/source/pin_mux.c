/*
 * Copyright 2019 ,2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v9.0
processor: MIMXRT1011xxxxx
package_id: MIMXRT1011DAE5A
mcu_data: ksdk2_0
processor_version: 9.0.1
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"


#include "fsl_gpio.h"  //--add


/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins_work();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: '3', peripheral: LPUART1, signal: RXD, pin_signal: GPIO_09, software_input_on: Disable, open_drain: Disable}
  - {pin_num: '2', peripheral: LPUART1, signal: TXD, pin_signal: GPIO_10, software_input_on: Disable, open_drain: Disable}
  - {pin_num: '4', peripheral: SAI1, signal: sai_mclk, pin_signal: GPIO_08, software_input_on: Enable, open_drain: Disable}
  - {pin_num: '6', peripheral: SAI1, signal: sai_tx_bclk, pin_signal: GPIO_06, software_input_on: Enable, open_drain: Disable}
  - {pin_num: '5', peripheral: SAI1, signal: sai_tx_sync, pin_signal: GPIO_07, software_input_on: Enable, open_drain: Disable}
  - {pin_num: '9', peripheral: SAI1, signal: sai_tx_data0, pin_signal: GPIO_04, software_input_on: Enable, open_drain: Disable}
  - {pin_num: '11', peripheral: LPI2C1, signal: SCL, pin_signal: GPIO_02, software_input_on: Enable, open_drain: Enable, pull_keeper_select: Keeper, pull_keeper_enable: Enable,
    pull_up_down_config: Pull_Up_22K_Ohm, hysteresis_enable: Disable}
  - {pin_num: '12', peripheral: LPI2C1, signal: SDA, pin_signal: GPIO_01, software_input_on: Enable, open_drain: Enable, pull_keeper_select: Keeper, pull_keeper_enable: Enable,
    pull_up_down_config: Pull_Up_22K_Ohm, hysteresis_enable: Disable}
  - {pin_num: '10', peripheral: SAI1, signal: sai_rx_data0, pin_signal: GPIO_03, software_input_on: Enable, open_drain: Enable}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
////void BOARD_InitPins_work(void) {
////  CLOCK_EnableClock(kCLOCK_Iomuxc);          
////   
////  IOMUXC_SetPinMux(IOMUXC_GPIO_11_LPI2C1_SDA, 1U); 
////  IOMUXC_SetPinMux(IOMUXC_GPIO_12_LPI2C1_SCL, 1U);    
////   
////  IOMUXC_SetPinMux(IOMUXC_GPIO_13_GPIOMUX_IO13, 0U);    //button   
////  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_00_GPIO2_IO00, 0U);   //ui enable   
////  IOMUXC_SetPinMux(IOMUXC_GPIO_02_GPIOMUX_IO02, 0U);    //standby control  
////  IOMUXC_SetPinMux(IOMUXC_GPIO_00_GPIOMUX_IO00, 0U);    //GPIO0  
////   
////  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_01_GPIO2_IO01, 0U);   //LED_UI_WHITE //timeline   
////  //IOMUXC_SetPinMux(IOMUXC_GPIO_SD_02_GPIO2_IO02, 0U);   //LED_PWM_RED    
////   
////  IOMUXC_SetPinMux(IOMUXC_GPIO_03_SAI1_RX_DATA00, 1U);    
////  IOMUXC_SetPinMux(IOMUXC_GPIO_04_SAI1_TX_DATA00, 1U);     
////  IOMUXC_SetPinMux(IOMUXC_GPIO_05_SAI1_TX_DATA01, 1U);   
////   
////  IOMUXC_SetPinMux(IOMUXC_GPIO_06_SAI1_TX_BCLK, 1U); 
////  IOMUXC_SetPinMux(IOMUXC_GPIO_07_SAI1_TX_SYNC, 1U); 
////  IOMUXC_SetPinMux(IOMUXC_GPIO_08_SAI1_MCLK, 1U); 
////   
////  IOMUXC_SetPinMux(IOMUXC_GPIO_09_LPUART1_RXD, 0U); 
////  IOMUXC_SetPinMux(IOMUXC_GPIO_10_LPUART1_TXD, 0U);  
////   
////  //#if (defined BTMUSIC) 
////  
////  //sai3
////  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_03_SAI3_RX_DATA, 1U);    
////  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_13_SAI3_RX_BCLK, 1U); 
////  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_04_SAI3_RX_SYNC, 1U); 

////  //#endif
////  
////  //ADC11 S6
////  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_11_GPIOMUX_IO25, 0U); 

////  //pwm
////  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_02_FLEXIO1_IO08, 0U);    


////  //flex uart
////  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_00_FLEXIO1_IO20, 0U); 


//////---------------------------config------------------------------------------

////  IOMUXC_SetPinConfig(IOMUXC_GPIO_11_LPI2C1_SDA, 0xD8A0U); 
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_12_LPI2C1_SCL, 0xD8A0U);     
////  
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_13_GPIOMUX_IO13, 0x01B0A0U);   //button   
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_00_GPIO2_IO00, 0x70A0U);    //ui enable
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_02_GPIOMUX_IO02, 0x70A0U);     //standby control
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_00_GPIOMUX_IO00, 0x70A0U);     //GPIO0  
////  
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_01_GPIO2_IO01, 0x70A0U);    //LED_UI_WHITE //timeline 
////  //IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_02_GPIO2_IO02, 0x70A0U);    //LED_PWM_RED 

////  
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_03_SAI1_RX_DATA00, 0x18A0U);    
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_04_SAI1_TX_DATA00, 0x10A0U);   
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_05_SAI1_TX_DATA01, 0x10A0U);   

////  
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_06_SAI1_TX_BCLK, 0x10A0U); 
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_07_SAI1_TX_SYNC, 0x10A0U); 
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_08_SAI1_MCLK, 0x10A0U); 

////  IOMUXC_SetPinConfig(IOMUXC_GPIO_09_LPUART1_RXD, 0x10A0U); 
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_10_LPUART1_TXD, 0x10A0U); 
////  
////  //#if (defined BTMUSIC) 
////  
////  //sai3 config
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_03_SAI3_RX_DATA, 0x18A0U);     
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_13_SAI3_RX_BCLK, 0x10A0U); 
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_04_SAI3_RX_SYNC, 0x10A0U); 
////  
////  //#endif
////  
////  //ADC11 S6
////  //IOMUXC_SetPinMux(IOMUXC_GPIO_AD_11_GPIOMUX_IO25, 0U); 
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_11_GPIOMUX_IO25, 0xA0U); 
////  
////  //pwm
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_02_FLEXIO1_IO08, 0x10A0U);  
////  
////  //flex uart
////  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_00_FLEXIO1_IO20, 0x10A0U);   
////  
////}

void BOARD_InitPins_work(void) 
{
   CLOCK_EnableClock(kCLOCK_Iomuxc);          

   //i2c
   IOMUXC_SetPinMux(IOMUXC_GPIO_11_LPI2C1_SDA, 1U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_12_LPI2C1_SCL, 1U);    

   IOMUXC_SetPinConfig(IOMUXC_GPIO_11_LPI2C1_SDA, 0xD8A0U); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_12_LPI2C1_SCL, 0xD8A0U); 
   
   
   //button
   IOMUXC_SetPinMux(IOMUXC_GPIO_13_GPIOMUX_IO13, 0U);    //button   
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_00_GPIO2_IO00, 0U);   //ui enable   
   IOMUXC_SetPinMux(IOMUXC_GPIO_02_GPIOMUX_IO02, 0U);    //standby control  
   IOMUXC_SetPinMux(IOMUXC_GPIO_00_GPIOMUX_IO00, 0U);    //GPIO0  
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_01_GPIO2_IO01, 0U);   //LED_UI_WHITE //timeline   
   //IOMUXC_SetPinMux(IOMUXC_GPIO_SD_02_GPIO2_IO02, 0U);   //LED_PWM_RED    

   IOMUXC_SetPinConfig(IOMUXC_GPIO_13_GPIOMUX_IO13, 0x01B0A0U);   //button   
   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_00_GPIO2_IO00, 0x70A0U);    //ui enable
   IOMUXC_SetPinConfig(IOMUXC_GPIO_02_GPIOMUX_IO02, 0x70A0U);     //standby control
   IOMUXC_SetPinConfig(IOMUXC_GPIO_00_GPIOMUX_IO00, 0x70A0U);     //GPIO0  
   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_01_GPIO2_IO01, 0x70A0U);    //LED_UI_WHITE //timeline 
   //IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_02_GPIO2_IO02, 0x70A0U);    //LED_PWM_RED 
   
   
   //sai1
   IOMUXC_SetPinMux(IOMUXC_GPIO_03_SAI1_RX_DATA00, 1U);    
   IOMUXC_SetPinMux(IOMUXC_GPIO_04_SAI1_TX_DATA00, 1U);     
   IOMUXC_SetPinMux(IOMUXC_GPIO_05_SAI1_TX_DATA01, 1U);   
   IOMUXC_SetPinMux(IOMUXC_GPIO_06_SAI1_TX_BCLK, 1U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_07_SAI1_TX_SYNC, 1U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_08_SAI1_MCLK, 1U); 
   
   IOMUXC_SetPinConfig(IOMUXC_GPIO_03_SAI1_RX_DATA00, 0x18A0U);    
   IOMUXC_SetPinConfig(IOMUXC_GPIO_04_SAI1_TX_DATA00, 0x10A0U);   
   IOMUXC_SetPinConfig(IOMUXC_GPIO_05_SAI1_TX_DATA01, 0x10A0U);   
   IOMUXC_SetPinConfig(IOMUXC_GPIO_06_SAI1_TX_BCLK, 0x10A0U); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_07_SAI1_TX_SYNC, 0x10A0U); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_08_SAI1_MCLK, 0x10A0U); 

   //uart
   IOMUXC_SetPinMux(IOMUXC_GPIO_09_LPUART1_RXD, 0U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_10_LPUART1_TXD, 0U); 
   
   IOMUXC_SetPinConfig(IOMUXC_GPIO_09_LPUART1_RXD, 0x10A0U); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_10_LPUART1_TXD, 0x10A0U); 


   //#if (defined BTMUSIC) 

   //sai3
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_03_SAI3_RX_DATA, 1U);    
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_13_SAI3_RX_BCLK, 1U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_04_SAI3_RX_SYNC, 1U); 

   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_03_SAI3_RX_DATA, 0x18A0U);     
   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_13_SAI3_RX_BCLK, 0x10A0U); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_04_SAI3_RX_SYNC, 0x10A0U); 

   //#endif

   //ADC11 S6
   IOMUXC_SetPinMux(IOMUXC_GPIO_AD_11_GPIOMUX_IO25, 0U); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_11_GPIOMUX_IO25, 0xA0U); 
   
   //pwm
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_02_FLEXIO1_IO08, 0U);    
   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_02_FLEXIO1_IO08, 0x10A0U);  

   //flex uart
   IOMUXC_SetPinMux(IOMUXC_GPIO_AD_00_FLEXIO1_IO20, 0U); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_00_FLEXIO1_IO20, 0x10A0U);   
   
   
////   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_01_FLEXIO1_IO07, 0U); 
////   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_01_FLEXIO1_IO07, 0x10A0U);   
   
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_05_FLEXIO1_IO11, 0U); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_05_FLEXIO1_IO11, 0x10A0U);   
   
////   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_12_FLEXIO1_IO18, 0U); 
////   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_12_FLEXIO1_IO18, 0x10A0U);   
   
   

   //new
     
////   //AD0 GPIO INPUT
////   IOMUXC_SetPinMux(IOMUXC_GPIO_AD_00_GPIOMUX_IO14, 0U);     //--add   
////   IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_00_GPIOMUX_IO14, 0x01B0A0U);       

   //wire fetdriver
   IOMUXC_SetPinMux(IOMUXC_GPIO_01_GPIOMUX_IO01, 0U);    
   IOMUXC_SetPinConfig(IOMUXC_GPIO_01_GPIOMUX_IO01, 0x70A0U);   

}


//#define GPIO_CONFIG          (0XB000U) //0X3800U
#define GPIO_CONFIG1          (0XA000U)


void set_SAI1_pins_gpio(void)    
{  
   //set sai1 io to GPIO   
   IOMUXC_SetPinMux(IOMUXC_GPIO_03_GPIOMUX_IO03, 0U);    
   IOMUXC_SetPinMux(IOMUXC_GPIO_04_GPIOMUX_IO04, 0U);     
   IOMUXC_SetPinMux(IOMUXC_GPIO_05_GPIOMUX_IO05, 0U);       
   IOMUXC_SetPinMux(IOMUXC_GPIO_06_GPIOMUX_IO06, 0U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_07_GPIOMUX_IO07, 0U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_08_GPIOMUX_IO08, 0U);    

   IOMUXC_SetPinConfig(IOMUXC_GPIO_03_GPIOMUX_IO03, GPIO_CONFIG1);    
   IOMUXC_SetPinConfig(IOMUXC_GPIO_04_GPIOMUX_IO04, GPIO_CONFIG1);   
   IOMUXC_SetPinConfig(IOMUXC_GPIO_05_GPIOMUX_IO05, GPIO_CONFIG1);
   IOMUXC_SetPinConfig(IOMUXC_GPIO_06_GPIOMUX_IO06, GPIO_CONFIG1); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_07_GPIOMUX_IO07, GPIO_CONFIG1); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_08_GPIOMUX_IO08, GPIO_CONFIG1); 
 
   
   //set sai1 IO to input
   GPIO1->GDIR &= ~(1UL << 3);
   GPIO1->GDIR &= ~(1UL << 4);
   GPIO1->GDIR &= ~(1UL << 5);
   GPIO1->GDIR &= ~(1UL << 6);
   GPIO1->GDIR &= ~(1UL << 7);
   GPIO1->GDIR &= ~(1UL << 8);

}

void set_SAI1_pins_outstandby(void)    
{  
 
  IOMUXC_SetPinMux(IOMUXC_GPIO_03_SAI1_RX_DATA00, 1U);    
  IOMUXC_SetPinMux(IOMUXC_GPIO_04_SAI1_TX_DATA00, 1U);     
  IOMUXC_SetPinMux(IOMUXC_GPIO_05_SAI1_TX_DATA01, 1U);    
  IOMUXC_SetPinMux(IOMUXC_GPIO_06_SAI1_TX_BCLK, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_07_SAI1_TX_SYNC, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_08_SAI1_MCLK, 1U); 
  
  IOMUXC_SetPinConfig(IOMUXC_GPIO_03_SAI1_RX_DATA00, 0x18A0U);    
  IOMUXC_SetPinConfig(IOMUXC_GPIO_04_SAI1_TX_DATA00, 0x10A0U);   
  IOMUXC_SetPinConfig(IOMUXC_GPIO_05_SAI1_TX_DATA01, 0x10A0U);    
  IOMUXC_SetPinConfig(IOMUXC_GPIO_06_SAI1_TX_BCLK, 0x10A0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_07_SAI1_TX_SYNC, 0x10A0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_08_SAI1_MCLK, 0x10A0U); 

}

void set_SAI3_pins_gpio(void)    
{  
   //set sai3 io to GPIO  
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_03_GPIO2_IO03, 0U);    
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_13_GPIO2_IO13, 0U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_SD_04_GPIO2_IO04, 0U);  

   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_03_GPIO2_IO03, GPIO_CONFIG1);     
   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_13_GPIO2_IO13, GPIO_CONFIG1); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_04_GPIO2_IO04, GPIO_CONFIG1);     


   //set SAI3 IO to input
   GPIO2->GDIR &= ~(1UL << 3);
   GPIO2->GDIR &= ~(1UL << 4);
   GPIO2->GDIR &= ~(1UL << 13); 
}

void set_SAI3_pins_outstandby(void)    
{  

  //sai3
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_03_SAI3_RX_DATA, 1U);    
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_13_SAI3_RX_BCLK, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_04_SAI3_RX_SYNC, 1U); 

  //sai3 config
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_03_SAI3_RX_DATA, 0x18A0U);     
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_13_SAI3_RX_BCLK, 0x10A0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_04_SAI3_RX_SYNC, 0x10A0U);    
}

void set_i2c_pins_gpio(void)    
{  

   //set i2c io to GPIO   
   IOMUXC_SetPinMux(IOMUXC_GPIO_11_GPIOMUX_IO11, 0U); 
   IOMUXC_SetPinMux(IOMUXC_GPIO_12_GPIOMUX_IO12, 0U);    

   IOMUXC_SetPinConfig(IOMUXC_GPIO_11_GPIOMUX_IO11, GPIO_CONFIG1); 
   IOMUXC_SetPinConfig(IOMUXC_GPIO_12_GPIOMUX_IO12, GPIO_CONFIG1);  

   //set I2C IO to input
   GPIO1->GDIR &= ~(1UL << 9);
   GPIO1->GDIR &= ~(1UL << 10);     

}

void set_i2c_pins_outstandby(void)    
{  
  IOMUXC_SetPinMux(IOMUXC_GPIO_11_LPI2C1_SDA, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_12_LPI2C1_SCL, 1U);    

  IOMUXC_SetPinConfig(IOMUXC_GPIO_11_LPI2C1_SDA, 0xD8A0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_12_LPI2C1_SCL, 0xD8A0U);     
}

void BOARD_InitPins_evk(void) {            //LOW POWER
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  /* GPIO configuration of AUD_INT on GPIO_00 (pin 13) */
  gpio_pin_config_t AUD_INT_config = {
      .direction = kGPIO_DigitalInput,
      .outputLogic = 0U,
      .interruptMode = kGPIO_IntRisingEdge
  };
  /* Initialize GPIO functionality on GPIO_00 (pin 13) */
  GPIO_PinInit(GPIO1, 0U, &AUD_INT_config);
  /* Enable GPIO pin interrupt on GPIO_00 (pin 13) */
  GPIO_PortEnableInterrupts(GPIO1, 1U << 0U);

  IOMUXC_SetPinMux(IOMUXC_GPIO_00_GPIOMUX_IO00, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_09_LPUART1_RXD, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_10_LPUART1_TXD, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_09_ARM_TRACE_SWO, 0U); 
  
  IOMUXC_SetPinConfig(IOMUXC_GPIO_00_GPIOMUX_IO00, 0x01B0A0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_09_LPUART1_RXD, 0x10A0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_10_LPUART1_TXD, 0x10A0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_09_ARM_TRACE_SWO, 0x90B1U); 
  
 
  //flex uart  
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_00_FLEXIO1_IO20, 0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_00_FLEXIO1_IO20, 0x10A0U);   
  

  
}



