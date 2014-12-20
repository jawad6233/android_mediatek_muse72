// use accdet + EINT solution
#define ACCDET_EINT
// support multi_key feature
/* [LGE_BSP_COMMON] CHANGE_S: 2014-01-21 Max.chung@lge.com hook long key value changed*/
//#define ACCDET_MULTI_KEY_FEATURE
/* [LGE_BSP_COMMON] CHANGE_S: 2014-01-21 Max.chung@lge.com hook long key value changed*/
// after 5s disable accdet
#define ACCDET_LOW_POWER

//#define ACCDET_PIN_RECOGNIZATION
//#define ACCDET_28V_MODE

#define ACCDET_SHORT_PLUGOUT_DEBOUNCE
/* [LGE_BSP_COMMON] CHANGE_S 2014-03-18 Max.chung@lge.com hook key issue when earjack insert/eject*/
#define ACCDET_SHORT_PLUGOUT_DEBOUNCE_CN 1
/* [LGE_BSP_COMMON] CHANGE_E 2014-03-18 Max.chung@lge.com hook key issue when earjack insert/eject*/

//extern struct headset_mode_settings* get_cust_headset_settings(void);
//extern int get_long_press_time_cust(void);