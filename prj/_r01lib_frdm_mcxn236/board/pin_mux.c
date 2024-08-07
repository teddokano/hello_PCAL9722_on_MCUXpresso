/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v15.0
processor: MCXN236
package_id: MCXN236VDF
mcu_data: ksdk2_0
processor_version: 15.0.0
external_user_signals: {}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 *
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void)
{
    BOARD_InitPins();
}

/* clang-format off */
/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: cm33_core0, enableClock: 'true'}
- pin_list:
  - {pin_num: B16, peripheral: SWD, signal: SWO, pin_signal: PIO0_2/TDO/SWO/FC1_P2/CT0_MAT0/UTICK_CAP0/I3C0_PUR, slew_rate: fast, open_drain: disable, drive_strength: high,
    pull_select: down, pull_enable: disable, input_buffer: enable, invert_input: normal}
  - {pin_num: E11, peripheral: UTICK0, signal: 'CAPTURE, 0', pin_signal: PIO0_14/FC1_P6/FC0_P2/CT_INP2/UTICK_CAP0/FLEXIO0_D6/ADC0_B14}
  - {pin_num: N7, peripheral: GPIO4, signal: 'GPIO, 6', pin_signal: PIO4_6/TRIG_OUT4/FC2_P6/CT_INP18/EZH_PIO30/ADC0_A3/ADC1_A3}
  - {pin_num: T8, peripheral: GPIO4, signal: 'GPIO, 15', pin_signal: PIO4_15/WUU0_IN21/TRIG_OUT4/USB1_VBUS_DIG/CT4_MAT3/FLEXIO0_D23/CAN1_RXD/ADC0_A1/CMP0_IN4P}
  - {pin_num: R8, peripheral: GPIO4, signal: 'GPIO, 16', pin_signal: PIO4_16/FC2_P2/USB1_OTG_PWR/CT3_MAT0/FLEXIO0_D24/CAN1_TXD/ADC0_A6}
  - {pin_num: R9, peripheral: GPIO4, signal: 'GPIO, 17', pin_signal: PIO4_17/TRIG_IN9/FC2_P3/USB1_OTG_OC/CT3_MAT1/FLEXIO0_D25/ADC0_B6}
  - {pin_num: T7, peripheral: GPIO4, signal: 'GPIO, 13', pin_signal: PIO4_13/TRIG_IN8/FC2_P1/USB1_ID/USB1_OTG_ID/CT4_MAT1/FLEXIO0_D21/CAN0_TXD/ADC0_B5/ADC1_B5}
  - {pin_num: T6, peripheral: GPIO4, signal: 'GPIO, 12', pin_signal: PIO4_12/WUU0_IN20/FC2_P0/CT4_MAT0/FLEXIO0_D20/CAN0_RXD/ADC0_A5/ADC1_A5}
  - {pin_num: U1, peripheral: GPIO4, signal: 'GPIO, 3', pin_signal: PIO4_3/WUU0_IN19/TRIG_IN7/FC2_P3/CT_INP13/EZH_PIO27/ADC0_B4/ADC1_B4/CMP0_IN5N/CMP1_IN5N}
  - {pin_num: T1, peripheral: GPIO4, signal: 'GPIO, 2', pin_signal: PIO4_2/TRIG_IN6/FC2_P2/CT_INP12/EZH_PIO26/ADC0_A4/ADC1_A4/CMP0_IN4N/CMP1_IN4N}
  - {pin_num: G16, peripheral: GPIO3, signal: 'GPIO, 12', pin_signal: PIO3_12/FC7_P4/FC6_P4/CT1_MAT2/PWM1_A0/FLEXIO0_D20/EZH_PIO12/SAI0_RXD1}
  - {pin_num: K15, peripheral: GPIO3, signal: 'GPIO, 17', pin_signal: PIO3_17/WUU0_IN26/CT_INP9/PWM1_B2/FLEXIO0_D25/EZH_PIO17/SAI1_TX_FS}
  - {pin_num: H17, peripheral: GPIO3, signal: 'GPIO, 14', pin_signal: PIO3_14/WUU0_IN25/CT_INP6/PWM1_A1/FLEXIO0_D22/EZH_PIO14/SAI0_RX_BCLK}
  - {pin_num: M10, peripheral: GPIO5, signal: 'GPIO, 2', pin_signal: PIO5_2/VBAT_WAKEUP_b/SPC_LPREQ/TAMPER0/ADC1_B10}
  - {pin_num: N11, peripheral: GPIO5, signal: 'GPIO, 3', pin_signal: PIO5_3/TRIG_IN11/RTC_CLKOUT/TAMPER1/ADC1_B11}
  - {pin_num: K13, peripheral: GPIO5, signal: 'GPIO, 6', pin_signal: PIO5_6/TRIG_OUT6/LPTMR1_ALT2/TAMPER4/ADC1_B14}
  - {pin_num: U17, peripheral: GPIO5, signal: 'GPIO, 1', pin_signal: PIO5_1/TRIG_OUT6/LPTMR1_ALT2/XTAL32K/ADC1_B9}
  - {pin_num: U16, peripheral: GPIO5, signal: 'GPIO, 0', pin_signal: PIO5_0/TRIG_IN10/LPTMR0_ALT2/EXTAL32K/ADC1_B8}
  - {pin_num: H2, peripheral: GPIO2, signal: 'GPIO, 0', pin_signal: PIO2_0/TRIG_IN5/PWM1_A3/FLEXIO0_D8/EZH_PIO20/SAI0_RX_BCLK}
  - {pin_num: C6, peripheral: GPIO1, signal: 'GPIO, 0', pin_signal: PIO1_0/WUU0_IN6/LPTMR0_ALT3/TRIG_IN0/FC3_P0/FC4_P4/CT_INP4/FLEXIO0_D8/SAI1_TX_BCLK/ADC0_A16/CMP0_IN0}
  - {pin_num: C5, peripheral: GPIO1, signal: 'GPIO, 1', pin_signal: PIO1_1/TRIG_IN1/FC3_P1/FC4_P5/CT_INP5/FLEXIO0_D9/SAI1_TX_FS/ADC0_A17/CMP1_IN0}
  - {pin_num: C4, peripheral: GPIO1, signal: 'GPIO, 2', pin_signal: PIO1_2/TRIG_OUT0/FC3_P2/FC4_P6/CT1_MAT0/FLEXIO0_D10/SAI1_TXD0/CAN0_TXD/ADC0_A18}
  - {pin_num: B4, peripheral: GPIO1, signal: 'GPIO, 3', pin_signal: PIO1_3/WUU0_IN7/TRIG_OUT1/FC3_P3/CT1_MAT1/FLEXIO0_D11/SAI1_RXD0/CAN0_RXD/ADC0_A19/CMP0_IN1}
  - {pin_num: B7, peripheral: GPIO0, signal: 'GPIO, 23', pin_signal: PIO0_23/WUU0_IN5/EWM0_OUT_b/FC1_P3/CT_INP3/FLEXIO0_D7/ADC0_A15}
  - {pin_num: B8, peripheral: GPIO0, signal: 'GPIO, 22', pin_signal: PIO0_22/EWM0_IN/FC0_P6/FC1_P2/CT_INP2/FLEXIO0_D6/I3C0_PUR/ADC0_A14/CMP1_IN2}
  - {pin_num: C8, peripheral: GPIO0, signal: 'GPIO, 20', pin_signal: PIO0_20/WUU0_IN4/FC0_P4/FC1_P0/CT_INP0/FLEXIO0_D4/I3C0_SDA/ADC0_A12}
  - {pin_num: C14, peripheral: GPIO0, signal: 'GPIO, 6', pin_signal: PIO0_6/ISPMODE_N/FC0_P2/FC1_P6/CT_INP2/PDM0_DATA1/CLKOUT}
  - {pin_num: N10, peripheral: GPIO4, signal: 'GPIO, 18', pin_signal: PIO4_18/CT3_MAT2/FLEXIO0_D26}
  - {pin_num: P1, peripheral: GPIO4, signal: 'GPIO, 0', pin_signal: PIO4_0/WUU0_IN18/TRIG_IN6/FC2_P0/CT_INP16/EZH_PIO24/ADC0_A0}
  - {pin_num: P2, peripheral: GPIO4, signal: 'GPIO, 1', pin_signal: PIO4_1/TRIG_IN7/FC2_P1/CT_INP17/EZH_PIO25/ADC0_B0}
  - {pin_num: L2, peripheral: GPIO2, signal: 'GPIO, 7', pin_signal: PIO2_7/TRIG_IN5/PWM1_B0/FLEXIO0_D15/EZH_PIO27/SAI0_TX_FS}
  - {pin_num: E4, peripheral: I3C1, signal: PUR, pin_signal: PIO1_15/WUU0_IN13/FC3_P3/CT_INP11/FLEXIO0_D23/EZH_PIO11/I3C1_PUR/ADC1_A15}
  - {pin_num: F6, peripheral: GPIO1, signal: 'GPIO, 16', pin_signal: PIO1_16/WUU0_IN14/FC5_P0/FC3_P4/CT_INP12/FLEXIO0_D24/EZH_PIO12/I3C1_SDA/ADC1_A16}
  - {pin_num: F4, peripheral: GPIO1, signal: 'GPIO, 17', pin_signal: PIO1_17/FC5_P1/FC3_P5/CT_INP13/FLEXIO0_D25/EZH_PIO13/I3C1_SCL/ADC1_A17}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void)
{
    /* Enables the clock for PORT0 controller: Enables clock */
    CLOCK_EnableClock(kCLOCK_Port0);
    /* Enables the clock for PORT1: Enables clock */
    CLOCK_EnableClock(kCLOCK_Port1);
    /* Enables the clock for PORT2: Enables clock */
    CLOCK_EnableClock(kCLOCK_Port2);
    /* Enables the clock for PORT3: Enables clock */
    CLOCK_EnableClock(kCLOCK_Port3);
    /* Enables the clock for PORT4: Enables clock */
    CLOCK_EnableClock(kCLOCK_Port4);

    /* PORT0_14 (pin E11) is configured as UTICK_CAP0 */
    PORT_SetPinMux(PORT0, 14U, kPORT_MuxAlt5);

    PORT0->PCR[14] = ((PORT0->PCR[14] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    const port_pin_config_t port0_2_pinB16_config = {/* Internal pull-up/down resistor is disabled */
                                                     kPORT_PullDisable,
                                                     /* Low internal pull resistor value is selected. */
                                                     kPORT_LowPullResistor,
                                                     /* Fast slew rate is configured */
                                                     kPORT_FastSlewRate,
                                                     /* Passive input filter is disabled */
                                                     kPORT_PassiveFilterDisable,
                                                     /* Open drain output is disabled */
                                                     kPORT_OpenDrainDisable,
                                                     /* High drive strength is configured */
                                                     kPORT_HighDriveStrength,
                                                     /* Pin is configured as SWO */
                                                     kPORT_MuxAlt1,
                                                     /* Digital input enabled */
                                                     kPORT_InputBufferEnable,
                                                     /* Digital input is not inverted */
                                                     kPORT_InputNormal,
                                                     /* Pin Control Register fields [15:0] are not locked */
                                                     kPORT_UnlockRegister};
    /* PORT0_2 (pin B16) is configured as SWO */
    PORT_SetPinConfig(PORT0, 2U, &port0_2_pinB16_config);

    /* PORT0_20 (pin C8) is configured as PIO0_20 */
    PORT_SetPinMux(PORT0, 20U, kPORT_MuxAlt0);

    PORT0->PCR[20] = ((PORT0->PCR[20] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT0_22 (pin B8) is configured as PIO0_22 */
    PORT_SetPinMux(PORT0, 22U, kPORT_MuxAlt0);

    PORT0->PCR[22] = ((PORT0->PCR[22] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT0_23 (pin B7) is configured as PIO0_23 */
    PORT_SetPinMux(PORT0, 23U, kPORT_MuxAlt0);

    PORT0->PCR[23] = ((PORT0->PCR[23] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT0_6 (pin C14) is configured as PIO0_6 */
    PORT_SetPinMux(PORT0, 6U, kPORT_MuxAlt0);

    PORT0->PCR[6] = ((PORT0->PCR[6] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT1_0 (pin C6) is configured as PIO1_0 */
    PORT_SetPinMux(PORT1, 0U, kPORT_MuxAlt0);

    PORT1->PCR[0] = ((PORT1->PCR[0] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT1_1 (pin C5) is configured as PIO1_1 */
    PORT_SetPinMux(PORT1, 1U, kPORT_MuxAlt0);

    PORT1->PCR[1] = ((PORT1->PCR[1] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT1_15 (pin E4) is configured as I3C1_PUR */
    PORT_SetPinMux(PORT1, 15U, kPORT_MuxAlt10);

    PORT1->PCR[15] = ((PORT1->PCR[15] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT1_16 (pin F6) is configured as PIO1_16 */
    PORT_SetPinMux(PORT1, 16U, kPORT_MuxAlt0);

    PORT1->PCR[16] = ((PORT1->PCR[16] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT1_17 (pin F4) is configured as PIO1_17 */
    PORT_SetPinMux(PORT1, 17U, kPORT_MuxAlt0);

    PORT1->PCR[17] = ((PORT1->PCR[17] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT1_2 (pin C4) is configured as PIO1_2 */
    PORT_SetPinMux(PORT1, 2U, kPORT_MuxAlt0);

    PORT1->PCR[2] = ((PORT1->PCR[2] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT1_3 (pin B4) is configured as PIO1_3 */
    PORT_SetPinMux(PORT1, 3U, kPORT_MuxAlt0);

    PORT1->PCR[3] = ((PORT1->PCR[3] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT2_0 (pin H2) is configured as PIO2_0 */
    PORT_SetPinMux(PORT2, 0U, kPORT_MuxAlt0);

    PORT2->PCR[0] = ((PORT2->PCR[0] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT2_7 (pin L2) is configured as PIO2_7 */
    PORT_SetPinMux(PORT2, 7U, kPORT_MuxAlt0);

    PORT2->PCR[7] = ((PORT2->PCR[7] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT3_12 (pin G16) is configured as PIO3_12 */
    PORT_SetPinMux(PORT3, 12U, kPORT_MuxAlt0);

    PORT3->PCR[12] = ((PORT3->PCR[12] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT3_14 (pin H17) is configured as PIO3_14 */
    PORT_SetPinMux(PORT3, 14U, kPORT_MuxAlt0);

    PORT3->PCR[14] = ((PORT3->PCR[14] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT3_17 (pin K15) is configured as PIO3_17 */
    PORT_SetPinMux(PORT3, 17U, kPORT_MuxAlt0);

    PORT3->PCR[17] = ((PORT3->PCR[17] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_0 (pin P1) is configured as PIO4_0 */
    PORT_SetPinMux(PORT4, 0U, kPORT_MuxAlt0);

    PORT4->PCR[0] = ((PORT4->PCR[0] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_1 (pin P2) is configured as PIO4_1 */
    PORT_SetPinMux(PORT4, 1U, kPORT_MuxAlt0);

    PORT4->PCR[1] = ((PORT4->PCR[1] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_12 (pin T6) is configured as PIO4_12 */
    PORT_SetPinMux(PORT4, 12U, kPORT_MuxAlt0);

    PORT4->PCR[12] = ((PORT4->PCR[12] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_13 (pin T7) is configured as PIO4_13 */
    PORT_SetPinMux(PORT4, 13U, kPORT_MuxAlt0);

    PORT4->PCR[13] = ((PORT4->PCR[13] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_15 (pin T8) is configured as PIO4_15 */
    PORT_SetPinMux(PORT4, 15U, kPORT_MuxAlt0);

    PORT4->PCR[15] = ((PORT4->PCR[15] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_16 (pin R8) is configured as PIO4_16 */
    PORT_SetPinMux(PORT4, 16U, kPORT_MuxAlt0);

    PORT4->PCR[16] = ((PORT4->PCR[16] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_17 (pin R9) is configured as PIO4_17 */
    PORT_SetPinMux(PORT4, 17U, kPORT_MuxAlt0);

    PORT4->PCR[17] = ((PORT4->PCR[17] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_18 (pin N10) is configured as PIO4_18 */
    PORT_SetPinMux(PORT4, 18U, kPORT_MuxAlt0);

    PORT4->PCR[18] = ((PORT4->PCR[18] &
                       /* Mask bits to zero which are setting */
                       (~(PORT_PCR_IBE_MASK)))

                      /* Input Buffer Enable: Enables. */
                      | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_2 (pin T1) is configured as PIO4_2 */
    PORT_SetPinMux(PORT4, 2U, kPORT_MuxAlt0);

    PORT4->PCR[2] = ((PORT4->PCR[2] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_3 (pin U1) is configured as PIO4_3 */
    PORT_SetPinMux(PORT4, 3U, kPORT_MuxAlt0);

    PORT4->PCR[3] = ((PORT4->PCR[3] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    /* PORT4_6 (pin N7) is configured as PIO4_6 */
    PORT_SetPinMux(PORT4, 6U, kPORT_MuxAlt0);

    PORT4->PCR[6] = ((PORT4->PCR[6] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_IBE_MASK)))

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    PORT5->PCR[0] = ((PORT5->PCR[0] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_MUX_MASK | PORT_PCR_IBE_MASK)))

                     /* Pin Multiplex Control: PORT5_0 (pin U16) is configured as PIO5_0. */
                     | PORT_PCR_MUX(PORT5_PCR_MUX_mux00)

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    PORT5->PCR[1] = ((PORT5->PCR[1] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_MUX_MASK | PORT_PCR_IBE_MASK)))

                     /* Pin Multiplex Control: PORT5_1 (pin U17) is configured as PIO5_1. */
                     | PORT_PCR_MUX(PORT5_PCR_MUX_mux00)

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    PORT5->PCR[2] = ((PORT5->PCR[2] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_MUX_MASK | PORT_PCR_IBE_MASK)))

                     /* Pin Multiplex Control: PORT5_2 (pin M10) is configured as PIO5_2. */
                     | PORT_PCR_MUX(PORT5_PCR_MUX_mux00)

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    PORT5->PCR[3] = ((PORT5->PCR[3] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_MUX_MASK | PORT_PCR_IBE_MASK)))

                     /* Pin Multiplex Control: PORT5_3 (pin N11) is configured as PIO5_3. */
                     | PORT_PCR_MUX(PORT5_PCR_MUX_mux00)

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));

    PORT5->PCR[6] = ((PORT5->PCR[6] &
                      /* Mask bits to zero which are setting */
                      (~(PORT_PCR_MUX_MASK | PORT_PCR_IBE_MASK)))

                     /* Pin Multiplex Control: PORT5_6 (pin K13) is configured as PIO5_6. */
                     | PORT_PCR_MUX(PORT5_PCR_MUX_mux00)

                     /* Input Buffer Enable: Enables. */
                     | PORT_PCR_IBE(PCR_IBE_ibe1));
}
/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
