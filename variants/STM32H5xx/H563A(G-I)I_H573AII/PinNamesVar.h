/* Alternate pin name */
PA_0_ALT1  = PA_0  | ALT1,
PA_1_ALT1  = PA_1  | ALT1,
PA_1_ALT2  = PA_1  | ALT2,
PA_2_ALT1  = PA_2  | ALT1,
PA_2_ALT2  = PA_2  | ALT2,
PA_3_ALT1  = PA_3  | ALT1,
PA_3_ALT2  = PA_3  | ALT2,
PA_4_ALT1  = PA_4  | ALT1,
PA_4_ALT2  = PA_4  | ALT2,
PA_5_ALT1  = PA_5  | ALT1,
PA_6_ALT1  = PA_6  | ALT1,
PA_7_ALT1  = PA_7  | ALT1,
PA_7_ALT2  = PA_7  | ALT2,
PA_7_ALT3  = PA_7  | ALT3,
PA_9_ALT1  = PA_9  | ALT1,
PA_10_ALT1 = PA_10 | ALT1,
PA_11_ALT1 = PA_11 | ALT1,
PA_12_ALT1 = PA_12 | ALT1,
PA_15_ALT1 = PA_15 | ALT1,
PA_15_ALT2 = PA_15 | ALT2,
PB_0_ALT1  = PB_0  | ALT1,
PB_0_ALT2  = PB_0  | ALT2,
PB_1_ALT1  = PB_1  | ALT1,
PB_1_ALT2  = PB_1  | ALT2,
PB_3_ALT1  = PB_3  | ALT1,
PB_3_ALT2  = PB_3  | ALT2,
PB_4_ALT1  = PB_4  | ALT1,
PB_4_ALT2  = PB_4  | ALT2,
PB_5_ALT1  = PB_5  | ALT1,
PB_5_ALT2  = PB_5  | ALT2,
PB_6_ALT1  = PB_6  | ALT1,
PB_6_ALT2  = PB_6  | ALT2,
PB_7_ALT1  = PB_7  | ALT1,
PB_8_ALT1  = PB_8  | ALT1,
PB_8_ALT2  = PB_8  | ALT2,
PB_9_ALT1  = PB_9  | ALT1,
PB_9_ALT2  = PB_9  | ALT2,
PB_9_ALT3  = PB_9  | ALT3,
PB_14_ALT1 = PB_14 | ALT1,
PB_14_ALT2 = PB_14 | ALT2,
PB_15_ALT1 = PB_15 | ALT1,
PB_15_ALT2 = PB_15 | ALT2,
PC_0_ALT1  = PC_0  | ALT1,
PC_1_ALT1  = PC_1  | ALT1,
PC_2_ALT1  = PC_2  | ALT1,
PC_3_ALT1  = PC_3  | ALT1,
PC_4_ALT1  = PC_4  | ALT1,
PC_5_ALT1  = PC_5  | ALT1,
PC_6_ALT1  = PC_6  | ALT1,
PC_6_ALT2  = PC_6  | ALT2,
PC_7_ALT1  = PC_7  | ALT1,
PC_7_ALT2  = PC_7  | ALT2,
PC_8_ALT1  = PC_8  | ALT1,
PC_9_ALT1  = PC_9  | ALT1,
PC_10_ALT1 = PC_10 | ALT1,
PC_11_ALT1 = PC_11 | ALT1,
PF_8_ALT1  = PF_8  | ALT1,
PF_9_ALT1  = PF_9  | ALT1,
PG_13_ALT1 = PG_13 | ALT1,
PH_6_ALT1  = PH_6  | ALT1,
PH_6_ALT2  = PH_6  | ALT2,
PH_7_ALT1  = PH_7  | ALT1,
PH_8_ALT1  = PH_8  | ALT1,
PH_10_ALT1 = PH_10 | ALT1,
PH_10_ALT2 = PH_10 | ALT2,
PH_11_ALT1 = PH_11 | ALT1,
PH_11_ALT2 = PH_11 | ALT2,
PH_12_ALT1 = PH_12 | ALT1,
PH_13_ALT1 = PH_13 | ALT1,

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = PA_2,
#endif
#ifdef PWR_WAKEUP_PIN3
  SYS_WKUP3 = PI_8,
#endif
#ifdef PWR_WAKEUP_PIN4
  SYS_WKUP4 = PC_13,
#endif
#ifdef PWR_WAKEUP_PIN5
  SYS_WKUP5 = PB_7,
#endif
#ifdef PWR_WAKEUP_PIN6
  SYS_WKUP6 = PC_1,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = PD_2,
#endif
#ifdef PWR_WAKEUP_PIN8
  SYS_WKUP8 = PD_3,
#endif

/* USB */
#ifdef USBCON
  USB_DM  = PA_11,
  USB_DP  = PA_12,
  USB_SOF = PA_8,
#endif
