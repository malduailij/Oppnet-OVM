#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 149 "/usr/lib/gcc/avr/4.5.3/include/stddef.h" 3
typedef int ptrdiff_t;
#line 211
typedef unsigned int size_t;
#line 323
typedef int wchar_t;
# 8 "/usr/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdint.h" 3
typedef int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 310
static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 121 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/string.h" 3
extern void *memset(void *arg_0x40303350, int arg_0x403034a8, size_t arg_0x40303640);
# 71 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x40315730, const void *arg_0x403158c8);
# 25 "/opt/tinyos-2.x/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;







struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/opt/tinyos-2.x/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 244 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 217 "/usr/lib/gcc/avr/4.5.3/../../../avr/include/avr/pgmspace.h" 3
typedef void prog_void __attribute((__progmem__)) ;
typedef char prog_char __attribute((__progmem__)) ;
typedef unsigned char prog_uchar __attribute((__progmem__)) ;

typedef int8_t prog_int8_t __attribute((__progmem__)) ;
typedef uint8_t prog_uint8_t __attribute((__progmem__)) ;
typedef int16_t prog_int16_t __attribute((__progmem__)) ;
typedef uint16_t prog_uint16_t __attribute((__progmem__)) ;
typedef int32_t prog_int32_t __attribute((__progmem__)) ;
typedef uint32_t prog_uint32_t __attribute((__progmem__)) ;

typedef int64_t prog_int64_t __attribute((__progmem__)) ;
typedef uint64_t prog_uint64_t __attribute((__progmem__)) ;
# 25 "/opt/tinyos-2.x/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 88 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 108
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 118
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 43 "/opt/tinyos-2.x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/opt/tinyos-2.x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4260 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4261 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4262 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 52 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4263 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4264 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4265 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4266 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4267 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4278 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4279 {

  uint8_t flat;
  struct __nesc_unnamed4280 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4281 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/opt/tinyos-2.x/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4290 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4291 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4292 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4293 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4294 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4295 {
  PLATFORM_MHZ = 8
};
# 62 "/opt/tinyos-2.x/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4296 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4297 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4298 {
  PLATFORM_BAUDRATE = 57600L
};
# 7 "TestSerial.h"
#line 5
typedef nx_struct test_serial_msg {
  nx_uint16_t counter;
} __attribute__((packed)) test_serial_msg_t;

enum __nesc_unnamed4299 {
  AM_TEST_SERIAL_MSG = 0x89
};
# 43 "/opt/tinyos-2.x/tos/types/Leds.h"
enum __nesc_unnamed4300 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 39 "/opt/tinyos-2.x/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4301 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 28 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FSMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4302 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 6 "/opt/tinyos-2.x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4303 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4304 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/opt/tinyos-2.x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4305 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4306 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4307 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 60 "/opt/tinyos-2.x/tos/platforms/micaz/platform_message.h"
#line 57
typedef union message_header {
  cc2420_header_t cc2420;
  serial_header_t serial;
} message_header_t;



#line 62
typedef union message_footer {
  cc2420_footer_t cc2420;
} message_footer_t;




#line 66
typedef union message_metadata {
  cc2420_metadata_t cc2420;
  serial_metadata_t serial;
} message_metadata_t;
# 19 "/opt/tinyos-2.x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[28];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 50 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
uint16_t crcTable[256] __attribute((__progmem__))  = { 
0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7, 
0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef, 
0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6, 
0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de, 
0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485, 
0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d, 
0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4, 
0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc, 
0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823, 
0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b, 
0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12, 
0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a, 
0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41, 
0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49, 
0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70, 
0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78, 
0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f, 
0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067, 
0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e, 
0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256, 
0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d, 
0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405, 
0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c, 
0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634, 
0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab, 
0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3, 
0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a, 
0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92, 
0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9, 
0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1, 
0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8, 
0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0 };









static uint16_t crcByte(uint16_t oldCrc, uint8_t byte) __attribute((noinline))  ;
# 41 "/opt/tinyos-2.x/tos/chips/atm128/Atm128Uart.h"
typedef uint8_t Atm128_UDR0_t;
typedef uint8_t Atm128_UDR1_t;
#line 57
#line 45
typedef union __nesc_unnamed4308 {
  struct Atm128_UCSRA_t {
    uint8_t mpcm : 1;
    uint8_t u2x : 1;
    uint8_t upe : 1;
    uint8_t dor : 1;
    uint8_t fe : 1;
    uint8_t udre : 1;
    uint8_t txc : 1;
    uint8_t rxc : 1;
  } bits;
  uint8_t flat;
} Atm128UartStatus_t;

typedef Atm128UartStatus_t Atm128_UCSR0A_t;
typedef Atm128UartStatus_t Atm128_UCSR1A_t;
#line 75
#line 63
typedef union __nesc_unnamed4309 {
  struct Atm128_UCSRB_t {
    uint8_t txb8 : 1;
    uint8_t rxb8 : 1;
    uint8_t ucsz2 : 1;
    uint8_t txen : 1;
    uint8_t rxen : 1;
    uint8_t udrie : 1;
    uint8_t txcie : 1;
    uint8_t rxcie : 1;
  } bits;
  uint8_t flat;
} Atm128UartControl_t;

typedef Atm128UartControl_t Atm128_UCSR0B_t;
typedef Atm128UartControl_t Atm128_UCSR1B_t;

enum __nesc_unnamed4310 {
  ATM128_UART_DATA_SIZE_5_BITS = 0, 
  ATM128_UART_DATA_SIZE_6_BITS = 1, 
  ATM128_UART_DATA_SIZE_7_BITS = 2, 
  ATM128_UART_DATA_SIZE_8_BITS = 3
};
#line 98
#line 88
typedef union __nesc_unnamed4311 {
  uint8_t flat;
  struct Atm128_UCSRC_t {
    uint8_t ucpol : 1;
    uint8_t ucsz : 2;
    uint8_t usbs : 1;
    uint8_t upm : 2;
    uint8_t umsel : 1;
    uint8_t rsvd : 1;
  } bits;
} Atm128UartMode_t;

typedef Atm128UartMode_t Atm128_UCSR0C_t;
typedef Atm128UartMode_t Atm128_UCSR1C_t;





enum __nesc_unnamed4312 {
  ATM128_19200_BAUD_4MHZ = 12, 
  ATM128_38400_BAUD_4MHZ = 6, 
  ATM128_57600_BAUD_4MHZ = 3, 

  ATM128_19200_BAUD_4MHZ_2X = 25, 
  ATM128_38400_BAUD_4MHZ_2X = 12, 
  ATM128_57600_BAUD_4MHZ_2X = 8, 

  ATM128_19200_BAUD_7MHZ = 23, 
  ATM128_38400_BAUD_7MHZ = 11, 
  ATM128_57600_BAUD_7MHZ = 7, 

  ATM128_19200_BAUD_7MHZ_2X = 47, 
  ATM128_38400_BAUD_7MHZ_2X = 23, 
  ATM128_57600_BAUD_7MHZ_2X = 15, 

  ATM128_19200_BAUD_8MHZ = 25, 
  ATM128_38400_BAUD_8MHZ = 12, 
  ATM128_57600_BAUD_8MHZ = 8, 

  ATM128_19200_BAUD_8MHZ_2X = 51, 
  ATM128_38400_BAUD_8MHZ_2X = 34, 
  ATM128_57600_BAUD_8MHZ_2X = 11
};

typedef uint8_t Atm128_UBRR0L_t;
typedef uint8_t Atm128_UBRR0H_t;

typedef uint8_t Atm128_UBRR1L_t;
typedef uint8_t Atm128_UBRR1H_t;

typedef uint8_t uart_parity_t;
typedef uint8_t uart_speed_t;
typedef uint8_t uart_duplex_t;

enum __nesc_unnamed4313 {
  TOS_UART_PARITY_NONE = 0, 
  TOS_UART_PARITY_EVEN = 1, 
  TOS_UART_PARITY_ODD = 2
};

enum __nesc_unnamed4314 {
  TOS_UART_19200 = 0, 
  TOS_UART_38400 = 1, 
  TOS_UART_57600 = 2
};

enum __nesc_unnamed4315 {
  TOS_UART_OFF = 0, 
  TOS_UART_RONLY = 1, 
  TOS_UART_TONLY = 2, 
  TOS_UART_DUPLEX = 3
};
typedef TMilli TestSerialC__MilliTimer__precision_tag;
typedef TMicro /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__precision_tag;
typedef uint32_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__size_type;
typedef uint16_t HplAtm128Timer3P__CompareA__size_type;
typedef uint16_t HplAtm128Timer3P__Capture__size_type;
typedef uint16_t HplAtm128Timer3P__CompareB__size_type;
typedef uint16_t HplAtm128Timer3P__CompareC__size_type;
typedef uint16_t HplAtm128Timer3P__Timer__timer_size;
typedef uint16_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size;
typedef /*InitThreeP.InitThree*/Atm128TimerInitC__0__timer_size /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size;
typedef TThree /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterThree16C.NCounter*/Atm128CounterC__0__timer_size /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef TMicro /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TThree /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_three_overflow_t /*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_precision_tag /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__size_type;
enum HilTimerMilliC____nesc_unnamed4316 {
  HilTimerMilliC__TIMER_COUNT = 1U
};
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void TestSerialC__Boot__booted(void );
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void TestSerialC__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TestSerialC__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TestSerialC__MilliTimer__fired(void );
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void TestSerialC__Control__startDone(error_t error);
#line 138
static void TestSerialC__Control__stopDone(error_t error);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void LedsP__Leds__led0Off(void );










static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
#line 94
static void LedsP__Leds__led2Off(void );
#line 56
static void LedsP__Leds__led0On(void );
#line 89
static void LedsP__Leds__led2On(void );
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );


static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
#line 62
static error_t MeasureClockC__Init__init(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403df108);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403df108);
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(
#line 96
message_t * msg, 



error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x4058a598, 
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
#line 110
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x4058a598, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 126 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 123
void * 


/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40589010, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 147 "/opt/tinyos-2.x/tos/interfaces/AMPacket.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(
#line 143
message_t * amsg);
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t SerialP__SplitControl__start(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__stopDoneTask__runTask(void );
#line 75
static void SerialP__RunTx__runTask(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t SerialP__Init__init(void );
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flushDone(void );
#line 49
static void SerialP__SerialFlush__default__flush(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__startDoneTask__runTask(void );
# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void SerialP__SerialFrameComm__dataReceived(uint8_t data);





static void SerialP__SerialFrameComm__putDone(void );
#line 85
static void SerialP__SerialFrameComm__delimiterReceived(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SerialP__defaultSerialFlushTask__runTask(void );
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t SerialP__SendBytePacket__completeSend(void );
#line 62
static error_t SerialP__SendBytePacket__startSend(uint8_t first_byte);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40646e68, 
# 67 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40646e68, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(
# 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40646828, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40655a20, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40655a20);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40655a20, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );









static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );






static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t data);










static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void HdlcTranslateC__UartStream__receivedByte(uint8_t byte);
#line 99
static void HdlcTranslateC__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void HdlcTranslateC__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );
#line 79
static void HdlcTranslateC__SerialFrameComm__resetReceive(void );
#line 65
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 47
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart0Init__init(void );
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t HplAtm128UartP__HplUart0__enableRxIntr(void );
#line 40
static error_t HplAtm128UartP__HplUart0__enableTxIntr(void );
static error_t HplAtm128UartP__HplUart0__disableTxIntr(void );

static error_t HplAtm128UartP__HplUart0__disableRxIntr(void );


static void HplAtm128UartP__HplUart0__tx(uint8_t data);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t HplAtm128UartP__Uart1Init__init(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__default__txDone(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t HplAtm128UartP__Uart0RxControl__start(void );









static error_t HplAtm128UartP__Uart0RxControl__stop(void );
#line 95
static error_t HplAtm128UartP__Uart0TxControl__start(void );









static error_t HplAtm128UartP__Uart0TxControl__stop(void );
# 50 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 46
static Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__default__fired(void );
# 47 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static HplAtm128Timer3P__Capture__size_type HplAtm128Timer3P__Capture__get(void );
#line 60
static void HplAtm128Timer3P__Capture__default__captured(HplAtm128Timer3P__Capture__size_type t);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__default__fired(void );
#line 58
static void HplAtm128Timer3P__CompareC__default__fired(void );
# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm128Timer3P__Timer__set(HplAtm128Timer3P__Timer__timer_size t);










static void HplAtm128Timer3P__Timer__start(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
#line 70
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );







static uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t control);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static HplAtm128Timer0AsyncP__Timer__timer_size HplAtm128Timer0AsyncP__Timer__get(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4089b010);
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4089b010, 
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
uint32_t dt);
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static error_t TestSerialC__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 126 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
static 
#line 123
void * 


TestSerialC__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TestSerialC__Packet__maxPayloadLength(void );
# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void TestSerialC__MilliTimer__startPeriodic(uint32_t dt);
# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
static void TestSerialC__Leds__led0Off(void );










static void TestSerialC__Leds__led1On(void );




static void TestSerialC__Leds__led1Off(void );
#line 94
static void TestSerialC__Leds__led2Off(void );
#line 56
static void TestSerialC__Leds__led0On(void );
#line 89
static void TestSerialC__Leds__led2On(void );
# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static error_t TestSerialC__Control__start(void );
# 70 "TestSerialC.nc"
message_t TestSerialC__packet;

bool TestSerialC__locked = FALSE;
uint16_t TestSerialC__counter = 0;

static inline void TestSerialC__Boot__booted(void );



static inline void TestSerialC__MilliTimer__fired(void );
#line 98
static inline message_t *TestSerialC__Receive__receive(message_t *bufPtr, 
void *payload, uint8_t len);
#line 125
static inline void TestSerialC__AMSend__sendDone(message_t *bufPtr, error_t error);





static inline void TestSerialC__Control__startDone(error_t err);




static inline void TestSerialC__Control__stopDone(error_t err);
# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );
static void LedsP__Led0__clr(void );




static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
static void LedsP__Led2__clr(void );
# 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 74
static inline void LedsP__Leds__led0On(void );




static inline void LedsP__Leds__led0Off(void );









static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );









static inline void LedsP__Leds__led2On(void );




static inline void LedsP__Leds__led2Off(void );
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 33 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4317 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
#line 120
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x403df108);
# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4318 {

  SchedulerBasicP__NUM_TASKS = 8U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 66 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 105
static inline void McuSleepC__McuSleep__sleep(void );
#line 120
static inline void McuSleepC__McuPowerState__update(void );
# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(
#line 67
message_t * msg, 







uint8_t len);
# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(
# 47 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x4058a598, 
# 103 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(
# 48 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
am_id_t arg_0x40589010, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 60 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg);







static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len);
#line 101
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result);



static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len);
#line 131
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void );



static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len);
#line 172
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg);
# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
static void SerialP__SplitControl__startDone(error_t error);
#line 138
static void SerialP__SplitControl__stopDone(error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__stopDoneTask__postTask(void );
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t SerialP__SerialControl__start(void );









static error_t SerialP__SerialControl__stop(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__RunTx__postTask(void );
# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
static void SerialP__SerialFlush__flush(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__startDoneTask__postTask(void );
# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static error_t SerialP__SerialFrameComm__putDelimiter(void );
#line 79
static void SerialP__SerialFrameComm__resetReceive(void );
#line 65
static error_t SerialP__SerialFrameComm__putData(uint8_t data);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t SerialP__defaultSerialFlushTask__postTask(void );
# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static uint8_t SerialP__SendBytePacket__nextByte(void );









static void SerialP__SendBytePacket__sendCompleted(error_t error);
# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
static error_t SerialP__ReceiveBytePacket__startPacket(void );






static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data);










static void SerialP__ReceiveBytePacket__endPacket(error_t result);
# 191 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
enum SerialP____nesc_unnamed4319 {
#line 191
  SerialP__RunTx = 0U
};
#line 191
typedef int SerialP____nesc_sillytask_RunTx[SerialP__RunTx];
#line 322
enum SerialP____nesc_unnamed4320 {
#line 322
  SerialP__startDoneTask = 1U
};
#line 322
typedef int SerialP____nesc_sillytask_startDoneTask[SerialP__startDoneTask];









enum SerialP____nesc_unnamed4321 {
#line 332
  SerialP__stopDoneTask = 2U
};
#line 332
typedef int SerialP____nesc_sillytask_stopDoneTask[SerialP__stopDoneTask];








enum SerialP____nesc_unnamed4322 {
#line 341
  SerialP__defaultSerialFlushTask = 3U
};
#line 341
typedef int SerialP____nesc_sillytask_defaultSerialFlushTask[SerialP__defaultSerialFlushTask];
#line 81
enum SerialP____nesc_unnamed4323 {
  SerialP__RX_DATA_BUFFER_SIZE = 2, 
  SerialP__TX_DATA_BUFFER_SIZE = 4, 
  SerialP__SERIAL_MTU = 255, 
  SerialP__SERIAL_VERSION = 1, 
  SerialP__ACK_QUEUE_SIZE = 5
};

enum SerialP____nesc_unnamed4324 {
  SerialP__RXSTATE_NOSYNC, 
  SerialP__RXSTATE_PROTO, 
  SerialP__RXSTATE_TOKEN, 
  SerialP__RXSTATE_INFO, 
  SerialP__RXSTATE_INACTIVE
};

enum SerialP____nesc_unnamed4325 {
  SerialP__TXSTATE_IDLE, 
  SerialP__TXSTATE_PROTO, 
  SerialP__TXSTATE_SEQNO, 
  SerialP__TXSTATE_INFO, 
  SerialP__TXSTATE_FCS1, 
  SerialP__TXSTATE_FCS2, 
  SerialP__TXSTATE_ENDFLAG, 
  SerialP__TXSTATE_ENDWAIT, 
  SerialP__TXSTATE_FINISH, 
  SerialP__TXSTATE_ERROR, 
  SerialP__TXSTATE_INACTIVE
};





#line 111
typedef enum SerialP____nesc_unnamed4326 {
  SerialP__BUFFER_AVAILABLE, 
  SerialP__BUFFER_FILLING, 
  SerialP__BUFFER_COMPLETE
} SerialP__tx_data_buffer_states_t;

enum SerialP____nesc_unnamed4327 {
  SerialP__TX_ACK_INDEX = 0, 
  SerialP__TX_DATA_INDEX = 1, 
  SerialP__TX_BUFFER_COUNT = 2
};






#line 124
typedef struct SerialP____nesc_unnamed4328 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__RX_DATA_BUFFER_SIZE + 1];
} SerialP__rx_buf_t;




#line 130
typedef struct SerialP____nesc_unnamed4329 {
  uint8_t state;
  uint8_t buf;
} SerialP__tx_buf_t;





#line 135
typedef struct SerialP____nesc_unnamed4330 {
  uint8_t writePtr;
  uint8_t readPtr;
  uint8_t buf[SerialP__ACK_QUEUE_SIZE + 1];
} SerialP__ack_queue_t;



SerialP__rx_buf_t SerialP__rxBuf;
SerialP__tx_buf_t SerialP__txBuf[SerialP__TX_BUFFER_COUNT];



uint8_t SerialP__rxState;
uint8_t SerialP__rxByteCnt;
uint8_t SerialP__rxProto;
uint8_t SerialP__rxSeqno;
uint16_t SerialP__rxCRC;



uint8_t SerialP__txState;
uint8_t SerialP__txByteCnt;
uint8_t SerialP__txProto;
uint8_t SerialP__txSeqno;
uint16_t SerialP__txCRC;
uint8_t SerialP__txPending;
uint8_t SerialP__txIndex;


SerialP__ack_queue_t SerialP__ackQ;

bool SerialP__offPending = FALSE;



static __inline void SerialP__txInit(void );
static __inline void SerialP__rxInit(void );
static __inline void SerialP__ackInit(void );

static __inline bool SerialP__ack_queue_is_full(void );
static __inline bool SerialP__ack_queue_is_empty(void );
static __inline void SerialP__ack_queue_push(uint8_t token);
static __inline uint8_t SerialP__ack_queue_top(void );
static inline uint8_t SerialP__ack_queue_pop(void );




static __inline void SerialP__rx_buffer_push(uint8_t data);
static __inline uint8_t SerialP__rx_buffer_top(void );
static __inline uint8_t SerialP__rx_buffer_pop(void );
static __inline uint16_t SerialP__rx_current_crc(void );

static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
static void SerialP__MaybeScheduleTx(void );




static __inline void SerialP__txInit(void );
#line 207
static __inline void SerialP__rxInit(void );








static __inline void SerialP__ackInit(void );



static inline error_t SerialP__Init__init(void );
#line 234
static __inline bool SerialP__ack_queue_is_full(void );









static __inline bool SerialP__ack_queue_is_empty(void );





static __inline void SerialP__ack_queue_push(uint8_t token);









static __inline uint8_t SerialP__ack_queue_top(void );









static inline uint8_t SerialP__ack_queue_pop(void );
#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data);



static __inline uint8_t SerialP__rx_buffer_top(void );



static __inline uint8_t SerialP__rx_buffer_pop(void );





static __inline uint16_t SerialP__rx_current_crc(void );










static inline void SerialP__startDoneTask__runTask(void );









static inline void SerialP__stopDoneTask__runTask(void );



static inline void SerialP__SerialFlush__flushDone(void );




static inline void SerialP__defaultSerialFlushTask__runTask(void );


static inline void SerialP__SerialFlush__default__flush(void );



static inline error_t SerialP__SplitControl__start(void );








static void SerialP__testOff(void );
#line 394
static inline void SerialP__SerialFrameComm__delimiterReceived(void );


static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data);



static inline bool SerialP__valid_rx_proto(uint8_t proto);










static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data);
#line 519
static void SerialP__MaybeScheduleTx(void );










static inline error_t SerialP__SendBytePacket__completeSend(void );








static inline error_t SerialP__SendBytePacket__startSend(uint8_t b);
#line 560
static inline void SerialP__RunTx__runTask(void );
#line 669
static inline void SerialP__SerialFrameComm__putDone(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void );
# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40646e68, 
# 96 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void );
# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(
# 50 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40646828, 
# 71 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40655a20, 
# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t dataLinkLen);
#line 15
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40655a20);
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
uart_id_t arg_0x40655a20, 
# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
message_t *msg, uint8_t upperLen);
# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void );
#line 62
static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte);
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4331 {
#line 158
  SerialDispatcherP__0__signalSendDone = 4U
};
#line 158
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_signalSendDone[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone];
#line 275
enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4332 {
#line 275
  SerialDispatcherP__0__receiveTask = 5U
};
#line 275
typedef int /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_sillytask_receiveTask[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask];
#line 66
#line 62
typedef enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4333 {
  SerialDispatcherP__0__SEND_STATE_IDLE = 0, 
  SerialDispatcherP__0__SEND_STATE_BEGIN = 1, 
  SerialDispatcherP__0__SEND_STATE_DATA = 2
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t;

enum /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4334 {
  SerialDispatcherP__0__RECV_STATE_IDLE = 0, 
  SerialDispatcherP__0__RECV_STATE_BEGIN = 1, 
  SerialDispatcherP__0__RECV_STATE_DATA = 2
};






#line 74
typedef struct /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0____nesc_unnamed4335 {
  uint8_t which : 1;
  uint8_t bufZeroLocked : 1;
  uint8_t bufOneLocked : 1;
  uint8_t state : 2;
} /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t;



/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recv_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState = { 0, 0, 0, /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE };
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;


message_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[2];
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[2] = { &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0], &/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[1] };




uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t * )&/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messages[0];

uint8_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (void *)0;
/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__send_state_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = 0;
error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = 0;


uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
uart_id_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = 0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (void *)0;
uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = 0;

static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len);
#line 158
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void );
#line 178
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void );
#line 194
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error);




static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void );



static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void );








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which);








static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void );




static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void );
#line 244
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b);
#line 275
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void );
#line 296
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result);
#line 358
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen);


static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen);




static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len);


static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error);
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static error_t HdlcTranslateC__UartStream__send(
#line 44
uint8_t * buf, 



uint16_t len);
# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data);





static void HdlcTranslateC__SerialFrameComm__putDone(void );
#line 85
static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void );
# 59 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
#line 56
typedef struct HdlcTranslateC____nesc_unnamed4336 {
  uint8_t sendEscape : 1;
  uint8_t receiveEscape : 1;
} HdlcTranslateC__HdlcState;


HdlcTranslateC__HdlcState HdlcTranslateC__state = { 0, 0 };
uint8_t HdlcTranslateC__txTemp;
uint8_t HdlcTranslateC__m_data;


static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void );





static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data);
#line 98
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void );







static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data);
#line 118
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error);
#line 132
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void );
# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte);
#line 99
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(
#line 95
uint8_t * buf, 



uint16_t len, error_t error);
#line 57
static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(
#line 53
uint8_t * buf, 



uint16_t len, error_t error);
# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void );
#line 40
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void );
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void );

static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void );


static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data);
# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void );









static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void );
# 62 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len;
#line 62
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len;
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;
#line 63
uint8_t * /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos;
#line 64
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos;
uint16_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr;
uint8_t /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr;

static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void );







static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void );
#line 93
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void );
#line 133
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data);
#line 155
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len);
#line 173
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void );
#line 216
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void );
# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
static void HplAtm128UartP__HplUart0__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart0__txDone(void );

static void HplAtm128UartP__HplUart1__rxDone(uint8_t data);
#line 47
static void HplAtm128UartP__HplUart1__txDone(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate);
# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
static void HplAtm128UartP__McuPowerState__update(void );
# 96 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0Init__init(void );
#line 116
static inline error_t HplAtm128UartP__Uart0TxControl__start(void );





static inline error_t HplAtm128UartP__Uart0TxControl__stop(void );





static inline error_t HplAtm128UartP__Uart0RxControl__start(void );





static inline error_t HplAtm128UartP__Uart0RxControl__stop(void );





static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void );





static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void );




static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void );
#line 173
static void HplAtm128UartP__HplUart0__tx(uint8_t data);






void __vector_18(void ) __attribute((signal))   ;





void __vector_20(void ) __attribute((interrupt))   ;



static inline error_t HplAtm128UartP__Uart1Init__init(void );
#line 274
void __vector_30(void ) __attribute((signal))   ;




void __vector_32(void ) __attribute((interrupt))   ;





static inline void HplAtm128UartP__HplUart1__default__txDone(void );
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareA__fired(void );
# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t);
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer3P__CompareB__fired(void );
#line 58
static void HplAtm128Timer3P__CompareC__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer3P__Timer__overflow(void );
# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t);








static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x);
#line 136
static inline void HplAtm128Timer3P__Timer__start(void );
#line 191
static inline uint16_t HplAtm128Timer3P__Capture__get(void );





static inline void HplAtm128Timer3P__CompareA__default__fired(void );
void __vector_26(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareB__default__fired(void );
void __vector_27(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__CompareC__default__fired(void );
void __vector_28(void ) __attribute((interrupt))   ;


static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time);
void __vector_25(void ) __attribute((interrupt))   ;



void __vector_29(void ) __attribute((interrupt))   ;
# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 67 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper;

enum /*CounterMicro32C.Transform32*/TransformCounterC__0____nesc_unnamed4337 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) - /*CounterMicro32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*CounterMicro32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*CounterMicro32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*CounterMicro32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};
#line 133
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void );


static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen);


static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen);
# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0;
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4338 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void );
#line 85
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x);
#line 103
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 131
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void );


static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);




static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 164
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 187
void __vector_15(void ) __attribute((signal))   ;





void __vector_16(void ) __attribute((signal))   ;
#line 207
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4339 {
#line 74
  AlarmToTimerC__0__fired = 6U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x4089b010);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4340 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 7U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4341 {

  VirtualizeTimerC__0__NUM_TIMERS = 1, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4342 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 92 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 92
{
   __asm volatile ("cli" :  :  : "memory");}

#line 109
#line 108
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 112
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 118
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/opt/tinyos-2.x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 40 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 46 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 88 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 88
{
#line 88
  union __nesc_unnamed4343 {
#line 88
    Atm128TimerCtrlCapture_t f;
#line 88
    uint16_t t;
  } 
#line 88
  c = { .f = x };

#line 88
  return c.t;
}





static inline void HplAtm128Timer3P__TimerCtrl__setCtrlCapture(Atm128_TCCR3B_t x)
#line 95
{
  * (volatile uint8_t *)0x8A = HplAtm128Timer3P__TimerCtrlCapture2int(x);
}

#line 78
static inline Atm128TimerCtrlCapture_t HplAtm128Timer3P__TimerCtrl__getCtrlCapture(void )
#line 78
{
  return * (Atm128TimerCtrlCapture_t *)& * (volatile uint8_t *)0x8A;
}

#line 68
static inline void HplAtm128Timer3P__Timer__setScale(uint8_t s)
#line 68
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer3P__TimerCtrl__getCtrlCapture();

#line 70
  x.bits.cs = s;
  HplAtm128Timer3P__TimerCtrl__setCtrlCapture(x);
}

# 104 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm128Timer3P__Timer__setScale(scale);
#line 104
}
#line 104
# 136 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__start(void )
#line 136
{
#line 136
  * (volatile uint8_t *)0x7D |= 1 << 2;
}

# 78 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm128Timer3P__Timer__start();
#line 78
}
#line 78
# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Timer__set(uint16_t t)
#line 59
{
#line 59
  * (volatile uint16_t *)0x88 = t;
}

# 67 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(/*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm128Timer3P__Timer__set(t);
#line 67
}
#line 67
# 51 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__set(0);
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__start();
    /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__setScale(2);
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitThreeP.InitThree*/Atm128TimerInitC__0__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 44 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/opt/tinyos-2.x/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MotePlatformP__PlatformInit__init();
#line 62
  __nesc_result = ecombine(__nesc_result, LedsP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 41 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/opt/tinyos-2.x/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 103 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 222 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 109 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 103 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 103
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 315 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

# 539 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__startSend(uint8_t b)
#line 539
{
  bool not_busy = FALSE;

#line 541
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 541
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 543
          EOFF;

          {
#line 543
            __nesc_atomic_end(__nesc_atomic); 
#line 543
            return __nesc_temp;
          }
        }
    }
#line 546
    __nesc_atomic_end(__nesc_atomic); }
#line 545
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 545
    {
      if (SerialP__txBuf[SerialP__TX_DATA_INDEX].state == SerialP__BUFFER_AVAILABLE) {
          SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_FILLING;
          SerialP__txBuf[SerialP__TX_DATA_INDEX].buf = b;
          not_busy = TRUE;
        }
    }
#line 551
    __nesc_atomic_end(__nesc_atomic); }
  if (not_busy) {
      SerialP__MaybeScheduleTx();
      return SUCCESS;
    }
  return EBUSY;
}

# 62 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(uint8_t first_byte){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = SerialP__SendBytePacket__startSend(first_byte);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 54 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__dataLinkLength(message_t *msg, uint8_t upperLen)
#line 54
{
  return upperLen + sizeof(serial_header_t );
}

# 361 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(uart_id_t id, message_t *msg, 
uint8_t upperLen)
#line 362
{
  return 0;
}

# 23 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(uart_id_t arg_0x40655a20, message_t *msg, uint8_t upperLen){
#line 23
  unsigned char __nesc_result;
#line 23

#line 23
  switch (arg_0x40655a20) {
#line 23
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 23
      __nesc_result = SerialPacketInfoActiveMessageP__Info__dataLinkLength(msg, upperLen);
#line 23
      break;
#line 23
    default:
#line 23
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__dataLinkLength(arg_0x40655a20, msg, upperLen);
#line 23
      break;
#line 23
    }
#line 23

#line 23
  return __nesc_result;
#line 23
}
#line 23
# 51 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__offset(void )
#line 51
{
  return (uint8_t )(sizeof(message_header_t ) - sizeof(serial_header_t ));
}

# 358 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(uart_id_t id)
#line 358
{
  return 0;
}

# 15 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(uart_id_t arg_0x40655a20){
#line 15
  unsigned char __nesc_result;
#line 15

#line 15
  switch (arg_0x40655a20) {
#line 15
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 15
      __nesc_result = SerialPacketInfoActiveMessageP__Info__offset();
#line 15
      break;
#line 15
    default:
#line 15
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__offset(arg_0x40655a20);
#line 15
      break;
#line 15
    }
#line 15

#line 15
  return __nesc_result;
#line 15
}
#line 15
# 111 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(uint8_t id, message_t *msg, uint8_t len)
#line 111
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState != /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE) {
      return EBUSY;
    }

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 116
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(id);
      if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex > sizeof(message_header_t )) {
          {
            unsigned char __nesc_temp = 
#line 119
            ESIZE;

            {
#line 119
              __nesc_atomic_end(__nesc_atomic); 
#line 119
              return __nesc_temp;
            }
          }
        }
#line 122
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = SUCCESS;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer = (uint8_t *)msg;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_DATA;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId = id;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled = FALSE;






      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__dataLinkLength(id, msg, len) + /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
    }
#line 134
    __nesc_atomic_end(__nesc_atomic); }
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__startSend(id) == SUCCESS) {
      return SUCCESS;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
      return FAIL;
    }
}

# 75 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__send(TOS_SERIAL_ACTIVE_MESSAGE_ID, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 131 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline uint8_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength(void )
#line 131
{
  return 28;
}

#line 60
static inline serial_header_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(message_t * msg)
#line 60
{
  return (serial_header_t * )((uint8_t *)msg + (unsigned short )& ((message_t *)0)->data - sizeof(serial_header_t ));
}





static inline error_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(am_id_t id, am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 70
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(msg);

  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return ESIZE;
    }

  __nesc_hton_uint16(header->dest.nxdata, dest);





  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint8(header->length.nxdata, len);

  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__send(msg, len);
}

# 80 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static error_t TestSerialC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__send(AM_TEST_SERIAL_MSG, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 106 "/opt/tinyos-2.x/tos/interfaces/Packet.nc"
inline static uint8_t TestSerialC__Packet__maxPayloadLength(void ){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength();
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
#line 126
inline static void * TestSerialC__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 79 "TestSerialC.nc"
static inline void TestSerialC__MilliTimer__fired(void )
#line 79
{
  TestSerialC__counter++;
  if (TestSerialC__locked) {
      return;
    }
  else {
      test_serial_msg_t *rcm = (test_serial_msg_t *)TestSerialC__Packet__getPayload(&TestSerialC__packet, sizeof(test_serial_msg_t ));

#line 86
      if (rcm == (void *)0) {
#line 86
          return;
        }
#line 87
      if (TestSerialC__Packet__maxPayloadLength() < sizeof(test_serial_msg_t )) {
          return;
        }

      __nesc_hton_uint16(rcm->counter.nxdata, TestSerialC__counter);
      if (TestSerialC__AMSend__send(AM_BROADCAST_ADDR, &TestSerialC__packet, sizeof(test_serial_msg_t )) == SUCCESS) {
          TestSerialC__locked = TRUE;
        }
    }
}

# 204 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x4089b010){
#line 83
  switch (arg_0x4089b010) {
#line 83
    case 0U:
#line 83
      TestSerialC__MilliTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x4089b010);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__RunTx__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__RunTx);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 97 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 144 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 144
{
  * (volatile uint8_t *)(0x31 + 0x20) = t;
}

# 54 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 54
}
#line 54
# 59 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Timer__get(void )
#line 59
{
#line 59
  return * (volatile uint8_t *)(0x32 + 0x20);
}

# 61 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 215 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 215
{
  return (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 1)) != 0;
}

# 44 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 139 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 226 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned long __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt;

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/opt/tinyos-2.x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/opt/tinyos-2.x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 125 "TestSerialC.nc"
static inline void TestSerialC__AMSend__sendDone(message_t *bufPtr, error_t error)
#line 125
{
  if (&TestSerialC__packet == bufPtr) {
      TestSerialC__locked = FALSE;
    }
}

# 105 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(uint8_t id, message_t *msg, error_t result)
#line 105
{
  return;
}

# 110 "/opt/tinyos-2.x/tos/interfaces/AMSend.nc"
inline static void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(am_id_t arg_0x4058a598, message_t * msg, error_t error){
#line 110
  switch (arg_0x4058a598) {
#line 110
    case AM_TEST_SERIAL_MSG:
#line 110
      TestSerialC__AMSend__sendDone(msg, error);
#line 110
      break;
#line 110
    default:
#line 110
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__default__sendDone(arg_0x4058a598, msg, error);
#line 110
      break;
#line 110
    }
#line 110
}
#line 110
# 101 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline void /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(message_t *msg, error_t result)
#line 101
{
  /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMSend__sendDone(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, result);
}

# 376 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(uart_id_t idxxx, message_t *msg, error_t error)
#line 376
{
  return;
}

# 100 "/opt/tinyos-2.x/tos/interfaces/Send.nc"
inline static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(uart_id_t arg_0x40646e68, message_t * msg, error_t error){
#line 100
  switch (arg_0x40646e68) {
#line 100
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 100
      /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubSend__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__default__sendDone(arg_0x40646e68, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 158 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask(void )
#line 158
{
  error_t error;

  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendState = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SEND_STATE_IDLE;
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    error = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError;
#line 162
    __nesc_atomic_end(__nesc_atomic); }

  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendCancelled) {
#line 164
    error = ECANCEL;
    }
#line 165
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Send__sendDone(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendId, (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer, error);
}

# 281 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

# 212 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(uint8_t which)
#line 212
{
  if (which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 0;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 0;
    }
}

# 310 "/usr/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

# 109 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2Off(void )
#line 109
{
  LedsP__Led2__set();
  ;
#line 111
  ;
}

# 94 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TestSerialC__Leds__led2Off(void ){
#line 94
  LedsP__Leds__led2Off();
#line 94
}
#line 94
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 0);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__clr();
#line 41
}
#line 41
# 104 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led2On(void )
#line 104
{
  LedsP__Led2__clr();
  ;
#line 106
  ;
}

# 89 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TestSerialC__Leds__led2On(void ){
#line 89
  LedsP__Leds__led2On();
#line 89
}
#line 89
# 94 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 77 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TestSerialC__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 1);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 41
}
#line 41
# 89 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

# 72 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TestSerialC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 79 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0Off(void )
#line 79
{
  LedsP__Led0__set();
  ;
#line 81
  ;
}

# 61 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TestSerialC__Leds__led0Off(void ){
#line 61
  LedsP__Leds__led0Off();
#line 61
}
#line 61
# 56 "/opt/tinyos-2.x/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 2);
}

# 41 "/opt/tinyos-2.x/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__clr();
#line 41
}
#line 41
# 74 "/opt/tinyos-2.x/tos/system/LedsP.nc"
static inline void LedsP__Leds__led0On(void )
#line 74
{
  LedsP__Led0__clr();
  ;
#line 76
  ;
}

# 56 "/opt/tinyos-2.x/tos/interfaces/Leds.nc"
inline static void TestSerialC__Leds__led0On(void ){
#line 56
  LedsP__Leds__led0On();
#line 56
}
#line 56
# 98 "TestSerialC.nc"
static inline message_t *TestSerialC__Receive__receive(message_t *bufPtr, 
void *payload, uint8_t len)
#line 99
{
  if (len != sizeof(test_serial_msg_t )) {
#line 100
      return bufPtr;
    }
  else 
#line 101
    {
      test_serial_msg_t *rcm = (test_serial_msg_t *)payload;

#line 103
      if (__nesc_ntoh_uint16(rcm->counter.nxdata) & 0x1) {
          TestSerialC__Leds__led0On();
        }
      else {
          TestSerialC__Leds__led0Off();
        }
      if (__nesc_ntoh_uint16(rcm->counter.nxdata) & 0x2) {
          TestSerialC__Leds__led1On();
        }
      else {
          TestSerialC__Leds__led1Off();
        }
      if (__nesc_ntoh_uint16(rcm->counter.nxdata) & 0x4) {
          TestSerialC__Leds__led2On();
        }
      else {
          TestSerialC__Leds__led2Off();
        }
      return bufPtr;
    }
}

# 109 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(uint8_t id, message_t *msg, void *payload, uint8_t len)
#line 109
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(am_id_t arg_0x40589010, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40589010) {
#line 78
    case AM_TEST_SERIAL_MSG:
#line 78
      __nesc_result = TestSerialC__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__default__receive(arg_0x40589010, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 113 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static inline message_t */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(message_t *msg, void *payload, uint8_t len)
#line 113
{
  return /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Receive__receive(/*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(msg), msg, msg->data, len);
}

# 371 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline message_t */*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(uart_id_t idxxx, message_t *msg, 
void *payload, 
uint8_t len)
#line 373
{
  return msg;
}

# 78 "/opt/tinyos-2.x/tos/interfaces/Receive.nc"
inline static message_t * /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(uart_id_t arg_0x40646828, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x40646828) {
#line 78
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 78
      __nesc_result = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__SubReceive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__default__receive(arg_0x40646828, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 57 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfoActiveMessageP.nc"
static inline uint8_t SerialPacketInfoActiveMessageP__Info__upperLength(message_t *msg, uint8_t dataLinkLen)
#line 57
{
  return dataLinkLen - sizeof(serial_header_t );
}

# 365 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(uart_id_t id, message_t *msg, 
uint8_t dataLinkLen)
#line 366
{
  return 0;
}

# 31 "/opt/tinyos-2.x/tos/lib/serial/SerialPacketInfo.nc"
inline static uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(uart_id_t arg_0x40655a20, message_t *msg, uint8_t dataLinkLen){
#line 31
  unsigned char __nesc_result;
#line 31

#line 31
  switch (arg_0x40655a20) {
#line 31
    case TOS_SERIAL_ACTIVE_MESSAGE_ID:
#line 31
      __nesc_result = SerialPacketInfoActiveMessageP__Info__upperLength(msg, dataLinkLen);
#line 31
      break;
#line 31
    default:
#line 31
      __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__default__upperLength(arg_0x40655a20, msg, dataLinkLen);
#line 31
      break;
#line 31
    }
#line 31

#line 31
  return __nesc_result;
#line 31
}
#line 31
# 275 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask(void )
#line 275
{
  uart_id_t myType;
  message_t *myBuf;
  uint8_t mySize;
  uint8_t myWhich;

#line 280
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 280
    {
      myType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType;
      myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf;
      mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize;
      myWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich;
    }
#line 285
    __nesc_atomic_end(__nesc_atomic); }
  mySize -= /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(myType);
  mySize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__upperLength(myType, myBuf, mySize);
  myBuf = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__Receive__receive(myType, myBuf, myBuf, mySize);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 289
    {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[myWhich] = myBuf;
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(myWhich);
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = FALSE;
    }
#line 293
    __nesc_atomic_end(__nesc_atomic); }
}

# 136 "TestSerialC.nc"
static inline void TestSerialC__Control__stopDone(error_t err)
#line 136
{
}

# 138 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__stopDone(error_t error){
#line 138
  TestSerialC__Control__stopDone(error);
#line 138
}
#line 138
# 120 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 120
{
}

# 52 "/opt/tinyos-2.x/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128UartP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 134 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__stop(void )
#line 134
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 4);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0RxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 122 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__stop(void )
#line 122
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 3);
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = HplAtm128UartP__Uart0TxControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 93 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop(void )
#line 93
{
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__stop();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__stop();
  return SUCCESS;
}

# 105 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 336 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__flushDone(void )
#line 336
{
  SerialP__SerialControl__stop();
  SerialP__SplitControl__stopDone(SUCCESS);
}

static inline void SerialP__defaultSerialFlushTask__runTask(void )
#line 341
{
  SerialP__SerialFlush__flushDone();
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__defaultSerialFlushTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__defaultSerialFlushTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 344 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFlush__default__flush(void )
#line 344
{
  SerialP__defaultSerialFlushTask__postTask();
}

# 49 "/opt/tinyos-2.x/tos/lib/serial/SerialFlush.nc"
inline static void SerialP__SerialFlush__flush(void ){
#line 49
  SerialP__SerialFlush__default__flush();
#line 49
}
#line 49
# 332 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__stopDoneTask__runTask(void )
#line 332
{
  SerialP__SerialFlush__flush();
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 144 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/opt/tinyos-2.x/tos/lib/timer/Timer.nc"
inline static void TestSerialC__MilliTimer__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 131 "TestSerialC.nc"
static inline void TestSerialC__Control__startDone(error_t err)
#line 131
{
  if (err == SUCCESS) {
      TestSerialC__MilliTimer__startPeriodic(1000);
    }
}

# 113 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static void SerialP__SplitControl__startDone(error_t error){
#line 113
  TestSerialC__Control__startDone(error);
#line 113
}
#line 113
# 151 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableRxIntr(void )
#line 151
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 7;
  return SUCCESS;
}

# 42 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr(void ){
#line 42
  unsigned char __nesc_result;
#line 42

#line 42
  __nesc_result = HplAtm128UartP__HplUart0__enableRxIntr();
#line 42

#line 42
  return __nesc_result;
#line 42
}
#line 42
# 128 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0RxControl__start(void )
#line 128
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 4;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0RxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 116 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart0TxControl__start(void )
#line 116
{
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 3;
  HplAtm128UartP__McuPowerState__update();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = HplAtm128UartP__Uart0TxControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 156 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableRxIntr(void )
#line 156
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 7);
  return SUCCESS;
}

# 43 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = HplAtm128UartP__HplUart0__disableRxIntr();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 146 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__disableTxIntr(void )
#line 146
{
  * (volatile uint8_t *)(0x0A + 0x20) &= ~(1 << 6);
  return SUCCESS;
}

# 41 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr(void ){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = HplAtm128UartP__HplUart0__disableTxIntr();
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 77 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start(void )
#line 77
{

  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartTxControl__start();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUartRxControl__start();


  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableRxIntr();
  return SUCCESS;
}

# 95 "/opt/tinyos-2.x/tos/interfaces/StdControl.nc"
inline static error_t SerialP__SerialControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__StdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 322 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__startDoneTask__runTask(void )
#line 322
{
  SerialP__SerialControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 324
    {
      SerialP__txState = SerialP__TXSTATE_IDLE;
      SerialP__rxState = SerialP__RXSTATE_NOSYNC;
    }
#line 327
    __nesc_atomic_end(__nesc_atomic); }
  SerialP__SplitControl__startDone(SUCCESS);
}

# 56 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putDelimiter(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = HdlcTranslateC__SerialFrameComm__putDelimiter();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 194 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error_t error)
#line 194
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 195
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendError = error;
#line 195
    __nesc_atomic_end(__nesc_atomic); }
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__postTask();
}

# 91 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static void SerialP__SendBytePacket__sendCompleted(error_t error){
#line 91
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__sendCompleted(error);
#line 91
}
#line 91
# 244 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_empty(void )
#line 244
{
  bool ret;

#line 246
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 246
    ret = SerialP__ackQ.writePtr == SerialP__ackQ.readPtr;
#line 246
    __nesc_atomic_end(__nesc_atomic); }
  return ret;
}











static __inline uint8_t SerialP__ack_queue_top(void )
#line 260
{
  uint8_t tmp = 0;

  /* atomic removed: atomic calls only */
#line 262
  {
    if (!SerialP__ack_queue_is_empty()) {
        tmp = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
      }
  }
  return tmp;
}

static inline uint8_t SerialP__ack_queue_pop(void )
#line 270
{
  uint8_t retval = 0;

  /* atomic removed: atomic calls only */
#line 272
  {
    if (SerialP__ackQ.writePtr != SerialP__ackQ.readPtr) {
        retval = SerialP__ackQ.buf[SerialP__ackQ.readPtr];
        if (++ SerialP__ackQ.readPtr > SerialP__ACK_QUEUE_SIZE) {
#line 275
          SerialP__ackQ.readPtr = 0;
          }
      }
  }
#line 278
  return retval;
}

#line 560
static inline void SerialP__RunTx__runTask(void )
#line 560
{
  uint8_t idle;
  uint8_t done;
  uint8_t fail;









  error_t result = SUCCESS;
  bool send_completed = FALSE;
  bool start_it = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 577
    {
      SerialP__txPending = 0;
      idle = SerialP__txState == SerialP__TXSTATE_IDLE;
      done = SerialP__txState == SerialP__TXSTATE_FINISH;
      fail = SerialP__txState == SerialP__TXSTATE_ERROR;
      if (done || fail) {
          SerialP__txState = SerialP__TXSTATE_IDLE;
          SerialP__txBuf[SerialP__txIndex].state = SerialP__BUFFER_AVAILABLE;
        }
    }
#line 586
    __nesc_atomic_end(__nesc_atomic); }


  if (done || fail) {
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 590
        {
          SerialP__txSeqno++;
          if (SerialP__txProto == SERIAL_PROTO_ACK) {
              SerialP__ack_queue_pop();
            }
          else {
              result = done ? SUCCESS : FAIL;
              send_completed = TRUE;
            }
        }
#line 599
        __nesc_atomic_end(__nesc_atomic); }
      idle = TRUE;
    }


  if (idle) {
      bool goInactive;

#line 606
      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 606
        goInactive = SerialP__offPending;
#line 606
        __nesc_atomic_end(__nesc_atomic); }
      if (goInactive) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 608
            SerialP__txState = SerialP__TXSTATE_INACTIVE;
#line 608
            __nesc_atomic_end(__nesc_atomic); }
        }
      else {

          uint8_t myAckState;
          uint8_t myDataState;

#line 614
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 614
            {
              myAckState = SerialP__txBuf[SerialP__TX_ACK_INDEX].state;
              myDataState = SerialP__txBuf[SerialP__TX_DATA_INDEX].state;
            }
#line 617
            __nesc_atomic_end(__nesc_atomic); }
          if (!SerialP__ack_queue_is_empty() && myAckState == SerialP__BUFFER_AVAILABLE) {
              { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 619
                {
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].state = SerialP__BUFFER_COMPLETE;
                  SerialP__txBuf[SerialP__TX_ACK_INDEX].buf = SerialP__ack_queue_top();

                  SerialP__txProto = SERIAL_PROTO_ACK;
                  SerialP__txIndex = SerialP__TX_ACK_INDEX;
                  start_it = TRUE;
                }
#line 626
                __nesc_atomic_end(__nesc_atomic); }
            }
          else {
#line 628
            if (myDataState == SerialP__BUFFER_FILLING || myDataState == SerialP__BUFFER_COMPLETE) {
                { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 629
                  {
                    SerialP__txProto = SERIAL_PROTO_PACKET_NOACK;
                    SerialP__txIndex = SerialP__TX_DATA_INDEX;
                    start_it = TRUE;
                  }
#line 633
                  __nesc_atomic_end(__nesc_atomic); }
              }
            else {
              }
            }
        }
    }
  else {
    }


  if (send_completed) {
      SerialP__SendBytePacket__sendCompleted(result);
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 647
    {
      if (SerialP__txState == SerialP__TXSTATE_INACTIVE) {
          SerialP__testOff();
          {
#line 650
            __nesc_atomic_end(__nesc_atomic); 
#line 650
            return;
          }
        }
    }
#line 653
    __nesc_atomic_end(__nesc_atomic); }
  if (start_it) {

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 656
        {
          SerialP__txCRC = 0;
          SerialP__txByteCnt = 0;
          SerialP__txState = SerialP__TXSTATE_PROTO;
        }
#line 660
        __nesc_atomic_end(__nesc_atomic); }
      if (SerialP__SerialFrameComm__putDelimiter() != SUCCESS) {
          { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 662
            SerialP__txState = SerialP__TXSTATE_ERROR;
#line 662
            __nesc_atomic_end(__nesc_atomic); }
          SerialP__MaybeScheduleTx();
        }
    }
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 140 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__HplUart0__enableTxIntr(void )
#line 140
{
  * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
  * (volatile uint8_t *)(0x0A + 0x20) |= 1 << 6;
  return SUCCESS;
}

# 40 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr(void ){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = HplAtm128UartP__HplUart0__enableTxIntr();
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 216 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline void SerialP__ackInit(void )
#line 216
{
  SerialP__ackQ.writePtr = SerialP__ackQ.readPtr = 0;
}

#line 207
static __inline void SerialP__rxInit(void )
#line 207
{
  SerialP__rxBuf.writePtr = SerialP__rxBuf.readPtr = 0;
  SerialP__rxState = SerialP__RXSTATE_INACTIVE;
  SerialP__rxByteCnt = 0;
  SerialP__rxProto = 0;
  SerialP__rxSeqno = 0;
  SerialP__rxCRC = 0;
}

#line 195
static __inline void SerialP__txInit(void )
#line 195
{
  uint8_t i;

  /* atomic removed: atomic calls only */
#line 197
  for (i = 0; i < SerialP__TX_BUFFER_COUNT; i++) SerialP__txBuf[i].state = SerialP__BUFFER_AVAILABLE;
  SerialP__txState = SerialP__TXSTATE_INACTIVE;
  SerialP__txByteCnt = 0;
  SerialP__txProto = 0;
  SerialP__txSeqno = 0;
  SerialP__txCRC = 0;
  SerialP__txPending = FALSE;
  SerialP__txIndex = 0;
}

#line 220
static inline error_t SerialP__Init__init(void )
#line 220
{

  SerialP__txInit();
  SerialP__rxInit();
  SerialP__ackInit();

  return SUCCESS;
}

# 69 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init(void )
#line 69
{
  if (PLATFORM_BAUDRATE == 19200UL) {
    /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 200;
    }
  else {
#line 72
    if (PLATFORM_BAUDRATE == 57600UL) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_byte_time = 68;
      }
    }
#line 74
  return SUCCESS;
}

# 120 "/opt/tinyos-2.x/tos/platforms/mica/MeasureClockC.nc"
static inline uint16_t MeasureClockC__Atm128Calibrate__baudrateRegister(uint32_t baudrate)
#line 120
{

  return ((uint32_t )MeasureClockC__cycles << 12) / baudrate - 1;
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128Calibrate.nc"
inline static uint16_t HplAtm128UartP__Atm128Calibrate__baudrateRegister(uint32_t baudrate){
#line 60
  unsigned short __nesc_result;
#line 60

#line 60
  __nesc_result = MeasureClockC__Atm128Calibrate__baudrateRegister(baudrate);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 190 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline error_t HplAtm128UartP__Uart1Init__init(void )
#line 190
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr1;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr1 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)0x99 = ubrr1;
  * (volatile uint8_t *)0x98 = ubrr1 >> 8;
  * (volatile uint8_t *)0x9B = stts.flat;
  * (volatile uint8_t *)0x9D = mode.flat;
  * (volatile uint8_t *)0x9A = ctrl.flat;

  return SUCCESS;
}

#line 96
static inline error_t HplAtm128UartP__Uart0Init__init(void )
#line 96
{
  Atm128UartMode_t mode;
  Atm128UartStatus_t stts;
  Atm128UartControl_t ctrl;
  uint16_t ubrr0;

  ctrl.bits = (struct Atm128_UCSRB_t ){ .rxcie = 0, .txcie = 0, .rxen = 0, .txen = 0 };
  stts.bits = (struct Atm128_UCSRA_t ){ .u2x = 1 };
  mode.bits = (struct Atm128_UCSRC_t ){ .ucsz = ATM128_UART_DATA_SIZE_8_BITS };

  ubrr0 = HplAtm128UartP__Atm128Calibrate__baudrateRegister(PLATFORM_BAUDRATE);
  * (volatile uint8_t *)(0x09 + 0x20) = ubrr0;
  * (volatile uint8_t *)0x90 = ubrr0 >> 8;
  * (volatile uint8_t *)(0x0B + 0x20) = stts.flat;
  * (volatile uint8_t *)0x95 = mode.flat;
  * (volatile uint8_t *)(0x0A + 0x20) = ctrl.flat;

  return SUCCESS;
}

# 131 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 131
{
#line 131
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 1;
}

# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0AsyncP__Compare__start();
#line 65
}
#line 65
# 85 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerCtrl__setControl(Atm128TimerControl_t x)
#line 85
{
  * (volatile uint8_t *)(0x33 + 0x20) = x.flat;
}

# 46 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP__TimerCtrl__setControl(control);
#line 46
}
#line 46
# 207 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 207
{
  * (volatile uint8_t *)(0x30 + 0x20) |= 1 << 3;
}

# 32 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 62 "/opt/tinyos-2.x/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart0Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, HplAtm128UartP__Uart1Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128Uart0C.UartP*/Atm128UartP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, SerialP__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t SerialP__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(SerialP__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 348 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SplitControl__start(void )
#line 348
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 349
    {
      if (SerialP__txState != SerialP__TXSTATE_INACTIVE && SerialP__rxState != SerialP__RXSTATE_INACTIVE) 
        {
          unsigned char __nesc_temp = 
#line 351
          EALREADY;

          {
#line 351
            __nesc_atomic_end(__nesc_atomic); 
#line 351
            return __nesc_temp;
          }
        }
    }
#line 354
    __nesc_atomic_end(__nesc_atomic); }
#line 353
  SerialP__startDoneTask__postTask();
  return SUCCESS;
}

# 104 "/opt/tinyos-2.x/tos/interfaces/SplitControl.nc"
inline static error_t TestSerialC__Control__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = SerialP__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 75 "TestSerialC.nc"
static inline void TestSerialC__Boot__booted(void )
#line 75
{
  TestSerialC__Control__start();
}

# 60 "/opt/tinyos-2.x/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  TestSerialC__Boot__booted();
#line 60
}
#line 60
# 164 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 164
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 179
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/opt/tinyos-2.x/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 140 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 140
{
  return m1 < m2 ? m1 : m2;
}

# 105 "/opt/tinyos-2.x/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 105
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 110
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 110
    uint8_t __result;

#line 110
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 112
   __asm volatile ("sei" :  :  : "memory");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli" :  :  : "memory");

  * (volatile uint8_t *)(0x35 + 0x20) &= ~(1 << 5);
}

# 76 "/opt/tinyos-2.x/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/opt/tinyos-2.x/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 397 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__dataReceived(uint8_t data)
#line 397
{
  SerialP__rx_state_machine(FALSE, data);
}

# 94 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__dataReceived(uint8_t data){
#line 94
  SerialP__SerialFrameComm__dataReceived(data);
#line 94
}
#line 94
# 394 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__delimiterReceived(void )
#line 394
{
  SerialP__rx_state_machine(TRUE, 0);
}

# 85 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__delimiterReceived(void ){
#line 85
  SerialP__SerialFrameComm__delimiterReceived();
#line 85
}
#line 85
# 73 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receivedByte(uint8_t data)
#line 73
{






  if (data == HDLC_FLAG_BYTE) {

      HdlcTranslateC__SerialFrameComm__delimiterReceived();
      return;
    }
  else {
#line 85
    if (data == HDLC_CTLESC_BYTE) {

        HdlcTranslateC__state.receiveEscape = 1;
        return;
      }
    else {
#line 90
      if (HdlcTranslateC__state.receiveEscape) {

          HdlcTranslateC__state.receiveEscape = 0;
          data = data ^ 0x20;
        }
      }
    }
#line 95
  HdlcTranslateC__SerialFrameComm__dataReceived(data);
}

# 79 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(uint8_t byte){
#line 79
  HdlcTranslateC__UartStream__receivedByte(byte);
#line 79
}
#line 79
# 132 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__receiveDone(uint8_t *buf, uint16_t len, error_t error)
#line 132
{
}

# 99 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(uint8_t * buf, uint16_t len, error_t error){
#line 99
  HdlcTranslateC__UartStream__receiveDone(buf, len, error);
#line 99
}
#line 99
# 133 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(uint8_t data)
#line 133
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos++] = data;
      if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_pos >= /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len) {
          uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf;

          /* atomic removed: atomic calls only */
#line 139
          {
            /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_buf = (void *)0;
            if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr != 3) {
                /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableRxIntr();
                /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_intr = 0;
              }
          }
          /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receiveDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_rx_len, SUCCESS);
        }
    }
  else {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__receivedByte(data);
    }
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__rxDone(uint8_t data){
#line 49
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__rxDone(data);
#line 49
}
#line 49
# 401 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline bool SerialP__valid_rx_proto(uint8_t proto)
#line 401
{
  switch (proto) {
      case SERIAL_PROTO_PACKET_ACK: 
        case SERIAL_PROTO_PACKET_NOACK: 
          return TRUE;
      case SERIAL_PROTO_ACK: 
        default: 
          return FALSE;
    }
}

# 203 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer(void )
#line 203
{
  if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked = 1;
    }
  else {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked = 1;
    }
}

#line 199
static inline bool /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked(void )
#line 199
{
  return /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufOneLocked : /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.bufZeroLocked;
}

#line 226
static inline error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket(void )
#line 226
{
  error_t result = SUCCESS;

  /* atomic removed: atomic calls only */
#line 228
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__isCurrentBufferLocked()) {


        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__lockCurrentBuffer();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = 0;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = TOS_SERIAL_UNKNOWN_ID;
      }
    else {
        result = EBUSY;
      }
  }
  return result;
}

# 62 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static error_t SerialP__ReceiveBytePacket__startPacket(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__startPacket();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 311 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint16_t SerialP__rx_current_crc(void )
#line 311
{
  uint16_t crc;
  uint8_t tmp = SerialP__rxBuf.writePtr;

#line 314
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc = SerialP__rxBuf.buf[tmp] & 0x00ff;
  crc = (crc << 8) & 0xFF00;
  tmp = tmp == 0 ? SerialP__RX_DATA_BUFFER_SIZE : tmp - 1;
  crc |= SerialP__rxBuf.buf[tmp] & 0x00FF;
  return crc;
}

# 80 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__endPacket(error_t result){
#line 80
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(result);
#line 80
}
#line 80
# 221 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap(void )
#line 221
{
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which ? 0 : 1;
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer = (uint8_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__messagePtrs[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which];
}

# 67 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 234 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline bool SerialP__ack_queue_is_full(void )
#line 234
{
  uint8_t tmp;
#line 235
  uint8_t tmp2;

  /* atomic removed: atomic calls only */
#line 236
  {
    tmp = SerialP__ackQ.writePtr;
    tmp2 = SerialP__ackQ.readPtr;
  }
  if (++tmp > SerialP__ACK_QUEUE_SIZE) {
#line 240
    tmp = 0;
    }
#line 241
  return tmp == tmp2;
}







static __inline void SerialP__ack_queue_push(uint8_t token)
#line 250
{
  if (!SerialP__ack_queue_is_full()) {
      /* atomic removed: atomic calls only */
#line 252
      {
        SerialP__ackQ.buf[SerialP__ackQ.writePtr] = token;
        if (++ SerialP__ackQ.writePtr > SerialP__ACK_QUEUE_SIZE) {
#line 254
          SerialP__ackQ.writePtr = 0;
          }
      }
#line 256
      SerialP__MaybeScheduleTx();
    }
}

# 67 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__SerialFrameComm__resetReceive(void )
#line 67
{
  HdlcTranslateC__state.receiveEscape = 0;
}

# 79 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void SerialP__SerialFrameComm__resetReceive(void ){
#line 79
  HdlcTranslateC__SerialFrameComm__resetReceive();
#line 79
}
#line 79
# 244 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(uint8_t b)
#line 244
{
  /* atomic removed: atomic calls only */
#line 245
  {
    switch (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state) {
        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_BEGIN: 
          /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__PacketInfo__offset(b);
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType = b;
        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_DATA: 
          if (/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex < sizeof(message_t )) {
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex] = b;
              /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex++;
            }
          else {
            }




        break;

        case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE: 
          default: 
#line 266
            ;
      }
  }
}

# 69 "/opt/tinyos-2.x/tos/lib/serial/ReceiveBytePacket.nc"
inline static void SerialP__ReceiveBytePacket__byteReceived(uint8_t data){
#line 69
  /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__byteReceived(data);
#line 69
}
#line 69
# 301 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static __inline uint8_t SerialP__rx_buffer_top(void )
#line 301
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 303
  return tmp;
}

#line 305
static __inline uint8_t SerialP__rx_buffer_pop(void )
#line 305
{
  uint8_t tmp = SerialP__rxBuf.buf[SerialP__rxBuf.readPtr];

#line 307
  if (++ SerialP__rxBuf.readPtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 307
    SerialP__rxBuf.readPtr = 0;
    }
#line 308
  return tmp;
}

#line 297
static __inline void SerialP__rx_buffer_push(uint8_t data)
#line 297
{
  SerialP__rxBuf.buf[SerialP__rxBuf.writePtr] = data;
  if (++ SerialP__rxBuf.writePtr > SerialP__RX_DATA_BUFFER_SIZE) {
#line 299
    SerialP__rxBuf.writePtr = 0;
    }
}

# 65 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static error_t SerialP__SerialFrameComm__putData(uint8_t data){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = HdlcTranslateC__SerialFrameComm__putData(data);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 530 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline error_t SerialP__SendBytePacket__completeSend(void )
#line 530
{
  bool ret = FAIL;

  /* atomic removed: atomic calls only */
#line 532
  {
    SerialP__txBuf[SerialP__TX_DATA_INDEX].state = SerialP__BUFFER_COMPLETE;
    ret = SUCCESS;
  }
  return ret;
}

# 71 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static error_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = SerialP__SendBytePacket__completeSend();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 178 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static inline uint8_t /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte(void )
#line 178
{
  uint8_t b;
  uint8_t indx;

  /* atomic removed: atomic calls only */
#line 181
  {
    b = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendBuffer[/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex];
    /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex++;
    indx = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendIndex;
  }
  if (indx > /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__sendLen) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__completeSend();
      return 0;
    }
  else {
      return b;
    }
}

# 81 "/opt/tinyos-2.x/tos/lib/serial/SendBytePacket.nc"
inline static uint8_t SerialP__SendBytePacket__nextByte(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__SendBytePacket__nextByte();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 669 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static inline void SerialP__SerialFrameComm__putDone(void )
#line 669
{
  {
    error_t txResult = SUCCESS;

    /* atomic removed: atomic calls only */
#line 672
    {
      switch (SerialP__txState) {

          case SerialP__TXSTATE_PROTO: 

            txResult = SerialP__SerialFrameComm__putData(SerialP__txProto);

          SerialP__txState = SerialP__TXSTATE_INFO;



          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txProto);
          break;

          case SerialP__TXSTATE_SEQNO: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txSeqno);
          SerialP__txState = SerialP__TXSTATE_INFO;
          SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txSeqno);
          break;

          case SerialP__TXSTATE_INFO: 
            {
              txResult = SerialP__SerialFrameComm__putData(SerialP__txBuf[SerialP__txIndex].buf);
              SerialP__txCRC = crcByte(SerialP__txCRC, SerialP__txBuf[SerialP__txIndex].buf);
              ++SerialP__txByteCnt;

              if (SerialP__txIndex == SerialP__TX_DATA_INDEX) {
                  uint8_t nextByte;

#line 700
                  nextByte = SerialP__SendBytePacket__nextByte();
                  if (SerialP__txBuf[SerialP__txIndex].state == SerialP__BUFFER_COMPLETE || SerialP__txByteCnt >= SerialP__SERIAL_MTU) {
                      SerialP__txState = SerialP__TXSTATE_FCS1;
                    }
                  else {
                      SerialP__txBuf[SerialP__txIndex].buf = nextByte;
                    }
                }
              else {
                  SerialP__txState = SerialP__TXSTATE_FCS1;
                }
            }
          break;

          case SerialP__TXSTATE_FCS1: 
            txResult = SerialP__SerialFrameComm__putData(SerialP__txCRC & 0xff);
          SerialP__txState = SerialP__TXSTATE_FCS2;
          break;

          case SerialP__TXSTATE_FCS2: 
            txResult = SerialP__SerialFrameComm__putData((SerialP__txCRC >> 8) & 0xff);
          SerialP__txState = SerialP__TXSTATE_ENDFLAG;
          break;

          case SerialP__TXSTATE_ENDFLAG: 
            txResult = SerialP__SerialFrameComm__putDelimiter();
          SerialP__txState = SerialP__TXSTATE_ENDWAIT;
          break;

          case SerialP__TXSTATE_ENDWAIT: 
            SerialP__txState = SerialP__TXSTATE_FINISH;
          case SerialP__TXSTATE_FINISH: 
            SerialP__MaybeScheduleTx();
          break;
          case SerialP__TXSTATE_ERROR: 
            default: 
              txResult = FAIL;
          break;
        }

      if (txResult != SUCCESS) {
          SerialP__txState = SerialP__TXSTATE_ERROR;
          SerialP__MaybeScheduleTx();
        }
    }
  }
}

# 100 "/opt/tinyos-2.x/tos/lib/serial/SerialFrameComm.nc"
inline static void HdlcTranslateC__SerialFrameComm__putDone(void ){
#line 100
  SerialP__SerialFrameComm__putDone();
#line 100
}
#line 100
# 48 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static error_t HdlcTranslateC__UartStream__send(uint8_t * buf, uint16_t len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(buf, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 118 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static inline void HdlcTranslateC__UartStream__sendDone(uint8_t *buf, uint16_t len, 
error_t error)
#line 119
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 120
    {
      if (HdlcTranslateC__state.sendEscape) {
          HdlcTranslateC__state.sendEscape = 0;
          HdlcTranslateC__m_data = HdlcTranslateC__txTemp;
          HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
        }
      else {
          HdlcTranslateC__SerialFrameComm__putDone();
        }
    }
#line 129
    __nesc_atomic_end(__nesc_atomic); }
}

# 57 "/opt/tinyos-2.x/tos/interfaces/UartStream.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(uint8_t * buf, uint16_t len, error_t error){
#line 57
  HdlcTranslateC__UartStream__sendDone(buf, len, error);
#line 57
}
#line 57
# 46 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(uint8_t data){
#line 46
  HplAtm128UartP__HplUart0__tx(data);
#line 46
}
#line 46
# 173 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone(void )
#line 173
{

  if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos < /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len) {
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);
    }
  else {
      uint8_t *buf = /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf;

#line 180
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = (void *)0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 0;
      /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__disableTxIntr();
      /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__sendDone(buf, /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len, SUCCESS);
    }
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart0__txDone(void ){
#line 47
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__txDone();
#line 47
}
#line 47
# 286 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__rxDone(uint8_t data)
#line 286
{
}

# 49 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__rxDone(uint8_t data){
#line 49
  HplAtm128UartP__HplUart1__default__rxDone(data);
#line 49
}
#line 49
# 285 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static inline void HplAtm128UartP__HplUart1__default__txDone(void )
#line 285
{
}

# 47 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128Uart.nc"
inline static void HplAtm128UartP__HplUart1__txDone(void ){
#line 47
  HplAtm128UartP__HplUart1__default__txDone();
#line 47
}
#line 47
# 197 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareA__default__fired(void )
#line 197
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareA__fired(void ){
#line 58
  HplAtm128Timer3P__CompareA__default__fired();
#line 58
}
#line 58
# 201 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareB__default__fired(void )
#line 201
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareB__fired(void ){
#line 58
  HplAtm128Timer3P__CompareB__default__fired();
#line 58
}
#line 58
# 205 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__CompareC__default__fired(void )
#line 205
{
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer3P__CompareC__fired(void ){
#line 58
  HplAtm128Timer3P__CompareC__default__fired();
#line 58
}
#line 58
# 209 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline void HplAtm128Timer3P__Capture__default__captured(uint16_t time)
#line 209
{
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__size_type t){
#line 60
  HplAtm128Timer3P__Capture__default__captured(t);
#line 60
}
#line 60
# 191 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
static inline uint16_t HplAtm128Timer3P__Capture__get(void )
#line 191
{
#line 191
  return * (volatile uint16_t *)0x80;
}

# 216 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static inline void /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow(void )
#line 216
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*Atm128Uart0C.UartP*/Atm128UartP__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/opt/tinyos-2.x/tos/lib/timer/TransformCounterC.nc"
static inline void /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*CounterMicro32C.Transform32*/TransformCounterC__0__m_upper & /*CounterMicro32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*CounterMicro32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*CounterMicro32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 60 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer3P__Timer__overflow(void ){
#line 70
  /*InitThreeP.InitThree*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*CounterThree16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
}
#line 70
# 149 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 149
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

# 58 "/opt/tinyos-2.x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/opt/tinyos-2.x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 88 "/opt/tinyos-2.x/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 88
{
   __asm volatile ("sei" :  :  : "memory");}

# 141 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 141
{
#line 141
  return * (volatile uint8_t *)(0x31 + 0x20);
}

# 48 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 230 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 70 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 63 "/opt/tinyos-2.x/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/opt/tinyos-2.x/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x403df108){
#line 75
  switch (arg_0x403df108) {
#line 75
    case SerialP__RunTx:
#line 75
      SerialP__RunTx__runTask();
#line 75
      break;
#line 75
    case SerialP__startDoneTask:
#line 75
      SerialP__startDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__stopDoneTask:
#line 75
      SerialP__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case SerialP__defaultSerialFlushTask:
#line 75
      SerialP__defaultSerialFlushTask__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__signalSendDone__runTask();
#line 75
      break;
#line 75
    case /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask:
#line 75
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x403df108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 161 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 73 "/opt/tinyos-2.x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 135 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static void */*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__getPayload(message_t *msg, uint8_t len)
#line 135
{
  if (len > /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__Packet__maxPayloadLength()) {
      return (void *)0;
    }
  else {
      return (void * )msg->data;
    }
}

# 519 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__MaybeScheduleTx(void )
#line 519
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 520
    {
      if (SerialP__txPending == 0) {
          if (SerialP__RunTx__postTask() == SUCCESS) {
              SerialP__txPending = 1;
            }
        }
    }
#line 526
    __nesc_atomic_end(__nesc_atomic); }
}

# 170 "/opt/tinyos-2.x/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 212 "/opt/tinyos-2.x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      ;
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << 1)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              ;
            }
          else {
              ;
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          ;
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          ;

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base;

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 172 "/opt/tinyos-2.x/tos/lib/serial/SerialActiveMessageP.nc"
static am_id_t /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__AMPacket__type(message_t *amsg)
#line 172
{
  serial_header_t *header = /*SerialActiveMessageC.AM*/SerialActiveMessageP__0__getHeader(amsg);

#line 174
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 357 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__testOff(void )
#line 357
{
  bool turnOff = FALSE;

  /* atomic removed: atomic calls only */
#line 359
  {
    if (SerialP__txState == SerialP__TXSTATE_INACTIVE && 
    SerialP__rxState == SerialP__RXSTATE_INACTIVE) {
        turnOff = TRUE;
      }
  }
  if (turnOff) {
      SerialP__stopDoneTask__postTask();
      /* atomic removed: atomic calls only */
#line 367
      SerialP__offPending = FALSE;
    }
  else {
      /* atomic removed: atomic calls only */
#line 370
      SerialP__offPending = TRUE;
    }
}

# 98 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putDelimiter(void )
#line 98
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 99
    {
      HdlcTranslateC__state.sendEscape = 0;
      HdlcTranslateC__m_data = HDLC_FLAG_BYTE;
    }
#line 102
    __nesc_atomic_end(__nesc_atomic); }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 155 "/opt/tinyos-2.x/tos/chips/atm128/Atm128UartP.nc"
static error_t /*Atm128Uart0C.UartP*/Atm128UartP__0__UartStream__send(uint8_t *buf, uint16_t len)
#line 155
{

  if (len == 0) {
    return FAIL;
    }
  else {
#line 159
    if (/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf) {
      return EBUSY;
      }
    }
#line 162
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_len = len;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_buf = buf;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos = 0;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_intr = 1;
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__enableTxIntr();
  /*Atm128Uart0C.UartP*/Atm128UartP__0__HplUart__tx(buf[/*Atm128Uart0C.UartP*/Atm128UartP__0__m_tx_pos++]);

  return SUCCESS;
}

# 173 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
static void HplAtm128UartP__HplUart0__tx(uint8_t data)
#line 173
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      * (volatile uint8_t *)(0x0C + 0x20) = data;
      * (volatile uint8_t *)(0x0B + 0x20) |= 1 << 6;
    }
#line 177
    __nesc_atomic_end(__nesc_atomic); }
}

__attribute((signal))   void __vector_18(void )
#line 180
{
  if ((* (volatile uint8_t *)(0x0B + 0x20) & (1 << 7)) != 0) {
      HplAtm128UartP__HplUart0__rxDone(* (volatile uint8_t *)(0x0C + 0x20));
    }
}

# 412 "/opt/tinyos-2.x/tos/lib/serial/SerialP.nc"
static void SerialP__rx_state_machine(bool isDelimeter, uint8_t data)
#line 412
{

  switch (SerialP__rxState) {

      case SerialP__RXSTATE_NOSYNC: 
        if (isDelimeter) {
            SerialP__rxInit();
            SerialP__rxState = SerialP__RXSTATE_PROTO;
          }
      break;

      case SerialP__RXSTATE_PROTO: 
        if (!isDelimeter) {
            SerialP__rxProto = data;
            if (!SerialP__valid_rx_proto(SerialP__rxProto)) {
              goto nosync;
              }
            SerialP__rxCRC = crcByte(SerialP__rxCRC, data);
            if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
              SerialP__rxState = SerialP__RXSTATE_TOKEN;
              }
            else {
#line 433
              SerialP__rxState = SerialP__RXSTATE_INFO;
              }
#line 434
            if (SerialP__ReceiveBytePacket__startPacket() != SUCCESS) {
                goto nosync;
              }
          }
      break;

      case SerialP__RXSTATE_TOKEN: 
        if (isDelimeter) {
            goto nosync;
          }
        else {
            SerialP__rxSeqno = data;
            SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rxSeqno);
            SerialP__rxState = SerialP__RXSTATE_INFO;
          }
      break;

      case SerialP__RXSTATE_INFO: 
        if (SerialP__rxByteCnt < SerialP__SERIAL_MTU) {
            if (isDelimeter) {
                if (SerialP__rxByteCnt >= 2) {
                    if (SerialP__rx_current_crc() == SerialP__rxCRC) {
                        SerialP__ReceiveBytePacket__endPacket(SUCCESS);
                        if (SerialP__rxProto == SERIAL_PROTO_PACKET_ACK) {
                          SerialP__ack_queue_push(SerialP__rxSeqno);
                          }
#line 459
                        SerialP__rxInit();
                        SerialP__SerialFrameComm__resetReceive();
                        if (SerialP__offPending) {
                            SerialP__rxState = SerialP__RXSTATE_INACTIVE;
                            SerialP__testOff();
                          }
                        goto done;
                      }
                    else {
                        goto nosync;
                      }
                  }
                else {
                    goto nosync;
                  }
              }
            else {
                if (SerialP__rxByteCnt >= 2) {
                    SerialP__ReceiveBytePacket__byteReceived(SerialP__rx_buffer_top());
                    SerialP__rxCRC = crcByte(SerialP__rxCRC, SerialP__rx_buffer_pop());
                  }
                SerialP__rx_buffer_push(data);
                SerialP__rxByteCnt++;
              }
          }
        else 

          {
            goto nosync;
          }
      break;

      default: 
        goto nosync;
    }
  goto done;

  nosync: 

    SerialP__rxInit();
  SerialP__SerialFrameComm__resetReceive();
  SerialP__ReceiveBytePacket__endPacket(FAIL);
  if (SerialP__offPending) {
      SerialP__rxState = SerialP__RXSTATE_INACTIVE;
      SerialP__testOff();
    }
  else {
    if (isDelimeter) {
        SerialP__rxState = SerialP__RXSTATE_PROTO;
      }
    }
  done: ;
}

# 92 "/opt/tinyos-2.x/tos/chips/atm128/crc.h"
static __attribute((noinline))  uint16_t crcByte(uint16_t oldCrc, uint8_t byte)
{

  uint16_t *table = crcTable;
  uint16_t newCrc;

   __asm ("eor %1,%B3\n"
  "\tlsl %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tadd %A2, %1\n"
  "\tadc %B2, __zero_reg__\n"
  "\tlpm\n"
  "\tmov %B0, %A3\n"
  "\tmov %A0, r0\n"
  "\tadiw r30,1\n"
  "\tlpm\n"
  "\teor %B0, r0" : 
  "=r"(newCrc), "+r"(byte), "+z"(table) : "r"(oldCrc));
  return newCrc;
}

# 296 "/opt/tinyos-2.x/tos/lib/serial/SerialDispatcherP.nc"
static void /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__ReceiveBytePacket__endPacket(error_t result)
#line 296
{
  uint8_t postsignalreceive = FALSE;

  /* atomic removed: atomic calls only */
#line 298
  {
    if (!/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending && result == SUCCESS) {
        postsignalreceive = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskPending = TRUE;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskType = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvType;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskWhich = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskBuf = (message_t *)/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBuffer;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTaskSize = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__recvIndex;
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveBufferSwap();
        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.state = /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__RECV_STATE_IDLE;
      }
    else 
#line 308
      {

        /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__unlockBuffer(/*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveState.which);
      }
  }
  if (postsignalreceive) {
      /*SerialDispatcherC.SerialDispatcherP*/SerialDispatcherP__0__receiveTask__postTask();
    }
}

# 186 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((interrupt))   void __vector_20(void )
#line 186
{
  HplAtm128UartP__HplUart0__txDone();
}

# 106 "/opt/tinyos-2.x/tos/lib/serial/HdlcTranslateC.nc"
static error_t HdlcTranslateC__SerialFrameComm__putData(uint8_t data)
#line 106
{
  if (data == HDLC_CTLESC_BYTE || data == HDLC_FLAG_BYTE) {
      HdlcTranslateC__state.sendEscape = 1;
      HdlcTranslateC__txTemp = data ^ 0x20;
      HdlcTranslateC__m_data = HDLC_CTLESC_BYTE;
    }
  else {
      HdlcTranslateC__m_data = data;
    }
  return HdlcTranslateC__UartStream__send(&HdlcTranslateC__m_data, 1);
}

# 274 "/opt/tinyos-2.x/tos/chips/atm128/HplAtm128UartP.nc"
__attribute((signal))   void __vector_30(void )
#line 274
{
  if ((* (volatile uint8_t *)0x9B & (1 << 7)) != 0) {
    HplAtm128UartP__HplUart1__rxDone(* (volatile uint8_t *)0x9C);
    }
}

#line 279
__attribute((interrupt))   void __vector_32(void )
#line 279
{
  HplAtm128UartP__HplUart1__txDone();
}

# 198 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer3P.nc"
__attribute((interrupt))   void __vector_26(void )
#line 198
{
  HplAtm128Timer3P__CompareA__fired();
}

__attribute((interrupt))   void __vector_27(void )
#line 202
{
  HplAtm128Timer3P__CompareB__fired();
}

__attribute((interrupt))   void __vector_28(void )
#line 206
{
  HplAtm128Timer3P__CompareC__fired();
}

__attribute((interrupt))   void __vector_25(void )
#line 210
{
  HplAtm128Timer3P__Capture__captured(HplAtm128Timer3P__Capture__get());
}

__attribute((interrupt))   void __vector_29(void )
#line 214
{
  HplAtm128Timer3P__Timer__overflow();
}

# 187 "/opt/tinyos-2.x/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 187
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 193
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

