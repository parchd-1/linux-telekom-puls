#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0
#define BAT_NTC_100 0

#ifdef CONFIG_MTK_PMIC_MT6397
#define RBAT_PULL_UP_R             24000
#define RBAT_PULL_DOWN_R           100000000
#define RBAT_PULL_UP_VOLT          1200

#else

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900
#define RBAT_PULL_DOWN_R           30000
#endif
#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900
#define RBAT_PULL_DOWN_R           100000
#endif
#if (BAT_NTC_100 == 1)
#define RBAT_PULL_UP_R             24000
#define RBAT_PULL_DOWN_R           100000000
#endif
#define RBAT_PULL_UP_VOLT          1800
#endif


// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,76241},
        {-15,58649},
        {-10,45569},
        { -5,35735},
        {  0,28271},
        {  5,22551},
        { 10,18136},
        { 15,14696},
        { 20,11997},
        { 25,10000},
        { 30,8365},
        { 35,7011},
        { 40,5951},
        { 45,4992},
        { 50,4217},
        { 55,3579},
        { 60,3051}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

#if (BAT_NTC_100 == 1)
	BATT_TEMPERATURE Batt_Temperature_Table[] = {
		{-20,1151037},
		{-15,846579},
		{-10,628988},
		{ -5,471632},
		{  0,357012},
		{  5,272500},
		{ 10,209710},
		{ 15,162651},
		{ 20,127080},
		{ 25,100000},
		{ 30,79222},
		{ 35,63167},
		{ 40,50677},
		{ 45,40904},
		{ 50,33195},
		{ 55,27091},
		{ 60,22224}
	};
#endif
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
	{0	  ,4174},	
	{2	  ,4153},	
	{3	  ,4136},	
	{5	  ,4120},	
	{7	  ,4105},	
	{8	  ,4090},	
	{10   ,4076},	
	{12   ,4062},	
	{14   ,4049},	
	{15   ,4035},	
	{17   ,4022},	
	{19   ,4009},	
	{20   ,3997},	
	{22   ,3986},	
	{24   ,3975},	
	{25   ,3965},	
	{27   ,3955},	
	{29   ,3944},	
	{30   ,3935},	
	{32   ,3926},	
	{34   ,3917},	
	{35   ,3908},	
	{37   ,3898},	
	{39   ,3885},	
	{41   ,3872},	
	{42   ,3860},	
	{44   ,3855},	
	{46   ,3848},	
	{47   ,3842},	
	{49   ,3836},	
	{51   ,3830},	
	{52   ,3823},	
	{54   ,3818},	
	{56   ,3806},	
	{57   ,3803},	
	{59   ,3798},	
	{61   ,3790},	
	{62   ,3789},	
	{64   ,3784},	
	{66   ,3780},	
	{68   ,3778},	
	{69   ,3777},	
	{71   ,3776},	
	{73   ,3772},	
	{74   ,3769},	
	{76   ,3761},	
	{78   ,3752},	
	{79   ,3748},	
	{81   ,3742},	
	{83   ,3735},	
	{84   ,3732},	
	{86   ,3710},	
	{88   ,3700},	
	{90   ,3680},	
	{91   ,3665},	
	{93   ,3655},	
	{95   ,3642},	
	{96   ,3626},	
	{98   ,3575},	
	{99   ,3505},	
	{100  ,3448},	
	{101  ,3330},	
	{101  , 3309},	
	{101  , 3300},	
	{101  , 3295},	
	{101  , 3293},	
	{101  , 3291},	
	{101  , 3291},	
	{101  , 3291},	
	{101  , 3290},	
	{101  , 3289},	
	{101  , 3289},	
	{101  , 3287},	
	{101  , 3288},	
	{101  , 3286},	
	{101  , 3286},	
	{101  , 3285},	
	{101  , 3284},	
	{101  , 3283},	
	{101  , 3281},	
	{101  , 3281},	
	{101  , 3279},	
	{101  , 3278},	
	{101  , 3276},	
	{101  , 3275},	
	{101  , 3275}	   


};
      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
	{0	  ,4174},	
	{2	  ,4153},	
	{3	  ,4136},	
	{5	  ,4120},	
	{7	  ,4105},	
	{8	  ,4090},	
	{10   ,4076},	
	{12   ,4062},	
	{14   ,4049},	
	{15   ,4035},	
	{17   ,4022},	
	{19   ,4009},	
	{20   ,3997},	
	{22   ,3986},	
	{24   ,3975},	
	{25   ,3965},	
	{27   ,3955},	
	{29   ,3944},	
	{30   ,3935},	
	{32   ,3926},	
	{34   ,3917},	
	{35   ,3908},	
	{37   ,3898},	
	{39   ,3885},	
	{41   ,3872},	
	{42   ,3860},	
	{44   ,3855},	
	{46   ,3848},	
	{47   ,3842},	
	{49   ,3836},	
	{51   ,3830},	
	{52   ,3823},	
	{54   ,3818},	
	{56   ,3806},	
	{57   ,3803},	
	{59   ,3798},	
	{61   ,3790},	
	{62   ,3789},	
	{64   ,3784},	
	{66   ,3780},	
	{68   ,3778},	
	{69   ,3777},	
	{71   ,3776},	
	{73   ,3772},	
	{74   ,3769},	
	{76   ,3761},	
	{78   ,3752},	
	{79   ,3748},	
	{81   ,3742},	
	{83   ,3735},	
	{84   ,3732},	
	{86   ,3710},	
	{88   ,3700},	
	{90   ,3680},	
	{91   ,3665},	
	{93   ,3655},	
	{95   ,3642},	
	{96   ,3626},	
	{98   ,3575},	
	{99   ,3505},	
	{100  ,3448},	
	{101  ,3330},	
	{101  , 3309},	
	{101  , 3300},	
	{101  , 3295},	
	{101  , 3293},	
	{101  , 3291},	
	{101  , 3291},	
	{101  , 3291},	
	{101  , 3290},	
	{101  , 3289},	
	{101  , 3289},	
	{101  , 3287},	
	{101  , 3288},	
	{101  , 3286},	
	{101  , 3286},	
	{101  , 3285},	
	{101  , 3284},	
	{101  , 3283},	
	{101  , 3281},	
	{101  , 3281},	
	{101  , 3279},	
	{101  , 3278},	
	{101  , 3276},	
	{101  , 3275},	
	{101  , 3275}	   


};
           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	{0	  ,4174},	
	{2	  ,4153},	
	{3	  ,4136},	
	{5	  ,4120},	
	{7	  ,4105},	
	{8	  ,4090},	
	{10   ,4076},	
	{12   ,4062},	
	{14   ,4049},	
	{15   ,4035},	
	{17   ,4022},	
	{19   ,4009},	
	{20   ,3997},	
	{22   ,3986},	
	{24   ,3975},	
	{25   ,3965},	
	{27   ,3955},	
	{29   ,3944},	
	{30   ,3935},	
	{32   ,3926},	
	{34   ,3917},	
	{35   ,3908},	
	{37   ,3898},	
	{39   ,3885},	
	{41   ,3872},	
	{42   ,3860},	
	{44   ,3855},	
	{46   ,3848},	
	{47   ,3842},	
	{49   ,3836},	
	{51   ,3830},	
	{52   ,3823},	
	{54   ,3818},	
	{56   ,3806},	
	{57   ,3803},	
	{59   ,3798},	
	{61   ,3790},	
	{62   ,3789},	
	{64   ,3784},	
	{66   ,3780},	
	{68   ,3778},	
	{69   ,3777},	
	{71   ,3776},	
	{73   ,3772},	
	{74   ,3769},	
	{76   ,3761},	
	{78   ,3752},	
	{79   ,3748},	
	{81   ,3742},	
	{83   ,3735},	
	{84   ,3732},	
	{86   ,3710},	
	{88   ,3700},	
	{90   ,3680},	
	{91   ,3665},	
	{93   ,3655},	
	{95   ,3642},	
	{96   ,3626},	
	{98   ,3575},	
	{99   ,3505},	
	{100  ,3448},	
	{101  ,3330},	
	{101  , 3309},	
	{101  , 3300},	
	{101  , 3295},	
	{101  , 3293},	
	{101  , 3291},	
	{101  , 3291},	
	{101  , 3291},	
	{101  , 3290},	
	{101  , 3289},	
	{101  , 3289},	
	{101  , 3287},	
	{101  , 3288},	
	{101  , 3286},	
	{101  , 3286},	
	{101  , 3285},	
	{101  , 3284},	
	{101  , 3283},	
	{101  , 3281},	
	{101  , 3281},	
	{101  , 3279},	
	{101  , 3278},	
	{101  , 3276},	
	{101  , 3275},	
	{101  , 3275}	   

};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
	{0	  ,4174},	
	{2	  ,4153},	
	{3	  ,4136},	
	{5	  ,4120},	
	{7	  ,4105},	
	{8	  ,4090},	
	{10   ,4076},	
	{12   ,4062},	
	{14   ,4049},	
	{15   ,4035},	
	{17   ,4022},	
	{19   ,4009},	
	{20   ,3997},	
	{22   ,3986},	
	{24   ,3975},	
	{25   ,3965},	
	{27   ,3955},	
	{29   ,3944},	
	{30   ,3935},	
	{32   ,3926},	
	{34   ,3917},	
	{35   ,3908},	
	{37   ,3898},	
	{39   ,3885},	
	{41   ,3872},	
	{42   ,3860},	
	{44   ,3855},	
	{46   ,3848},	
	{47   ,3842},	
	{49   ,3836},	
	{51   ,3830},	
	{52   ,3823},	
	{54   ,3818},	
	{56   ,3806},	
	{57   ,3803},	
	{59   ,3798},	
	{61   ,3790},	
	{62   ,3789},	
	{64   ,3784},	
	{66   ,3780},	
	{68   ,3778},	
	{69   ,3777},	
	{71   ,3776},	
	{73   ,3772},	
	{74   ,3769},	
	{76   ,3761},	
	{78   ,3752},	
	{79   ,3748},	
	{81   ,3742},	
	{83   ,3735},	
	{84   ,3732},	
	{86   ,3710},	
	{88   ,3700},	
	{90   ,3680},	
	{91   ,3665},	
	{93   ,3655},	
	{95   ,3642},	
	{96   ,3626},	
	{98   ,3575},	
	{99   ,3505},	
	{100  ,3448},	
	{101  ,3330},	
	{101  , 3309},	
	{101  , 3300},	
	{101  , 3295},	
	{101  , 3293},	
	{101  , 3291},	
	{101  , 3291},	
	{101  , 3291},	
	{101  , 3290},	
	{101  , 3289},	
	{101  , 3289},	
	{101  , 3287},	
	{101  , 3288},	
	{101  , 3286},	
	{101  , 3286},	
	{101  , 3285},	
	{101  , 3284},	
	{101  , 3283},	
	{101  , 3281},	
	{101  , 3281},	
	{101  , 3279},	
	{101  , 3278},	
	{101  , 3276},	
	{101  , 3275},	
	{101  , 3275}	   


};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
};
    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
    {120 , 4174},    
    {120 , 4153},   
    {120 , 4136},   
    {120 , 4120},   
    {125 , 4105},   
    {128 , 4090},   
    {130 , 4076},   
    {135 , 4062},   
    {135 , 4049},   
    {135 , 4035},   
    {135 , 4022},   
    {135 , 4009},   
    {135 , 3997},   
    {135 , 3986},   
    {135 , 3975},   
    {135 , 3965},   
    {135 , 3955},   
    {135 , 3944},   
    {135 , 3935},   
    {135 , 3926},   
    {135 , 3917},   
    {135 , 3908},   
    {135 , 3899},   
    {135 , 3887},   
    {133 , 3869},   
    {133 , 3852},   
    {132 , 3839},   
    {132 , 3830},   
    {132 , 3823},   
    {132 , 3817},   
    {132 , 3812},   
    {132 , 3806},   
    {132 , 3801},   
    {132 , 3797},   
    {132 , 3793},   
    {132 , 3789},   
    {132 , 3786},   
    {132 , 3782},   
    {132 , 3778},   
    {132 , 3777},   
    {132 , 3774},   
    {132 , 3772},   
    {132 , 3770},   
    {132 , 3767},   
    {128 , 3763},   
    {128 , 3759},   
    {125 , 3752},   
    {125 , 3746},   
    {125 , 3739},   
    {125 , 3728},   
    {125 , 3714},   
    {125 , 3700},   
    {125 , 3687},   
    {125 , 3684},   
    {125 , 3682},   
    {125 , 3680},   
    {120 , 3676},   
    {120 , 3658},   
    {120 , 3580},   
    {120 , 3448},   
    {120 , 3330},   
    {122 , 3309},   
    {118 , 3300},   
    {122 , 3295},   
    {120 , 3293},   
    {117 , 3291},   
    {123 , 3291},   
    {125 , 3291},   
    {127 , 3290},   
    {125 , 3289},   
    {122 , 3289},   
    {123 , 3287},   
    {122 , 3288},   
    {123 , 3286},   
    {122 , 3286},   
    {125 , 3285},   
    {125 , 3284},   
    {127 , 3283},   
    {127 , 3281},   
    {125 , 3281},   
    {127 , 3279},   
    {128 , 3278},   
    {127 , 3276},   
    {128 , 3275},   
    {127 , 3275}    


};

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
    {120 , 4174},    
    {120 , 4153},   
    {120 , 4136},   
    {120 , 4120},   
    {125 , 4105},   
    {128 , 4090},   
    {130 , 4076},   
    {135 , 4062},   
    {135 , 4049},   
    {135 , 4035},   
    {135 , 4022},   
    {135 , 4009},   
    {135 , 3997},   
    {135 , 3986},   
    {135 , 3975},   
    {135 , 3965},   
    {135 , 3955},   
    {135 , 3944},   
    {135 , 3935},   
    {135 , 3926},   
    {135 , 3917},   
    {135 , 3908},   
    {135 , 3899},   
    {135 , 3887},   
    {133 , 3869},   
    {133 , 3852},   
    {132 , 3839},   
    {132 , 3830},   
    {132 , 3823},   
    {132 , 3817},   
    {132 , 3812},   
    {132 , 3806},   
    {132 , 3801},   
    {132 , 3797},   
    {132 , 3793},   
    {132 , 3789},   
    {132 , 3786},   
    {132 , 3782},   
    {132 , 3778},   
    {132 , 3777},   
    {132 , 3774},   
    {132 , 3772},   
    {132 , 3770},   
    {132 , 3767},   
    {128 , 3763},   
    {128 , 3759},   
    {125 , 3752},   
    {125 , 3746},   
    {125 , 3739},   
    {125 , 3728},   
    {125 , 3714},   
    {125 , 3700},   
    {125 , 3687},   
    {125 , 3684},   
    {125 , 3682},   
    {125 , 3680},   
    {120 , 3676},   
    {120 , 3658},   
    {120 , 3580},   
    {120 , 3448},   
    {120 , 3330},   
    {122 , 3309},   
    {118 , 3300},   
    {122 , 3295},   
    {120 , 3293},   
    {117 , 3291},   
    {123 , 3291},   
    {125 , 3291},   
    {127 , 3290},   
    {125 , 3289},   
    {122 , 3289},   
    {123 , 3287},   
    {122 , 3288},   
    {123 , 3286},   
    {122 , 3286},   
    {125 , 3285},   
    {125 , 3284},   
    {127 , 3283},   
    {127 , 3281},   
    {125 , 3281},   
    {127 , 3279},   
    {128 , 3278},   
    {127 , 3276},   
    {128 , 3275},   
    {127 , 3275}    



};    

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
    {120 , 4174},    
    {120 , 4153},   
    {120 , 4136},   
    {120 , 4120},   
    {125 , 4105},   
    {128 , 4090},   
    {130 , 4076},   
    {135 , 4062},   
    {135 , 4049},   
    {135 , 4035},   
    {135 , 4022},   
    {135 , 4009},   
    {135 , 3997},   
    {135 , 3986},   
    {135 , 3975},   
    {135 , 3965},   
    {135 , 3955},   
    {135 , 3944},   
    {135 , 3935},   
    {135 , 3926},   
    {135 , 3917},   
    {135 , 3908},   
    {135 , 3899},   
    {135 , 3887},   
    {133 , 3869},   
    {133 , 3852},   
    {132 , 3839},   
    {132 , 3830},   
    {132 , 3823},   
    {132 , 3817},   
    {132 , 3812},   
    {132 , 3806},   
    {132 , 3801},   
    {132 , 3797},   
    {132 , 3793},   
    {132 , 3789},   
    {132 , 3786},   
    {132 , 3782},   
    {132 , 3778},   
    {132 , 3777},   
    {132 , 3774},   
    {132 , 3772},   
    {132 , 3770},   
    {132 , 3767},   
    {128 , 3763},   
    {128 , 3759},   
    {125 , 3752},   
    {125 , 3746},   
    {125 , 3739},   
    {125 , 3728},   
    {125 , 3714},   
    {125 , 3700},   
    {125 , 3687},   
    {125 , 3684},   
    {125 , 3682},   
    {125 , 3680},   
    {120 , 3676},   
    {120 , 3658},   
    {120 , 3580},   
    {120 , 3448},   
    {120 , 3330},   
    {122 , 3309},   
    {118 , 3300},   
    {122 , 3295},   
    {120 , 3293},   
    {117 , 3291},   
    {123 , 3291},   
    {125 , 3291},   
    {127 , 3290},   
    {125 , 3289},   
    {122 , 3289},   
    {123 , 3287},   
    {122 , 3288},   
    {123 , 3286},   
    {122 , 3286},   
    {125 , 3285},   
    {125 , 3284},   
    {127 , 3283},   
    {127 , 3281},   
    {125 , 3281},   
    {127 , 3279},   
    {128 , 3278},   
    {127 , 3276},   
    {128 , 3275},   
    {127 , 3275}    



};

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
    {120 , 4174},    
    {120 , 4153},   
    {120 , 4136},   
    {120 , 4120},   
    {125 , 4105},   
    {128 , 4090},   
    {130 , 4076},   
    {135 , 4062},   
    {135 , 4049},   
    {135 , 4035},   
    {135 , 4022},   
    {135 , 4009},   
    {135 , 3997},   
    {135 , 3986},   
    {135 , 3975},   
    {135 , 3965},   
    {135 , 3955},   
    {135 , 3944},   
    {135 , 3935},   
    {135 , 3926},   
    {135 , 3917},   
    {135 , 3908},   
    {135 , 3899},   
    {135 , 3887},   
    {133 , 3869},   
    {133 , 3852},   
    {132 , 3839},   
    {132 , 3830},   
    {132 , 3823},   
    {132 , 3817},   
    {132 , 3812},   
    {132 , 3806},   
    {132 , 3801},   
    {132 , 3797},   
    {132 , 3793},   
    {132 , 3789},   
    {132 , 3786},   
    {132 , 3782},   
    {132 , 3778},   
    {132 , 3777},   
    {132 , 3774},   
    {132 , 3772},   
    {132 , 3770},   
    {132 , 3767},   
    {128 , 3763},   
    {128 , 3759},   
    {125 , 3752},   
    {125 , 3746},   
    {125 , 3739},   
    {125 , 3728},   
    {125 , 3714},   
    {125 , 3700},   
    {125 , 3687},   
    {125 , 3684},   
    {125 , 3682},   
    {125 , 3680},   
    {120 , 3676},   
    {120 , 3658},   
    {120 , 3580},   
    {120 , 3448},   
    {120 , 3330},   
    {122 , 3309},   
    {118 , 3300},   
    {122 , 3295},   
    {120 , 3293},   
    {117 , 3291},   
    {123 , 3291},   
    {125 , 3291},   
    {127 , 3290},   
    {125 , 3289},   
    {122 , 3289},   
    {123 , 3287},   
    {122 , 3288},   
    {123 , 3286},   
    {122 , 3286},   
    {125 , 3285},   
    {125 , 3284},   
    {127 , 3283},   
    {127 , 3281},   
    {125 , 3281},   
    {127 , 3279},   
    {128 , 3278},   
    {127 , 3276},   
    {128 , 3275},   
    {127 , 3275}    




};

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
		{0,   0},
};

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

