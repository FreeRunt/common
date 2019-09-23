#include <time.h>

#ifndef _CLOCK_T_DEFINED
typedef long clock_t;
#define _CLOCK_T_DEFINED
#endif
#define CLOCK_PER_SEC ((clock_t)1000)

clock_t clock(void);

#ifndef _TM_DEFINED
struct tm {
  int tm_sec;       /* 秒 – 取值区间为[0,59] */
  int tm_min;       /* 分 - 取值区间为[0,59] */
  int tm_hour;      /* 时 - 取值区间为[0,23] */
  int tm_mday;      /* 一个月中的日期 - 取值区间为[1,31] */
  int tm_mon;       /* 月份（从一月开始，0代表一月） - 取值区间为[0,11] */
  int tm_year;      /* 年份，其值等于实际年份减去1900 */
  int tm_wday;      /* 星期 – 取值区间为[0,6]，其中0代表星期天，1代表星期一，以此类推 */
  int tm_yday;      /* 从每年的1月1日开始的天数 – 取值区间为[0,365]，其中0代表1月1日，1代表1月2日，以此类推 */
  int tm_isdst;     /* 夏令时标识符，实行夏令时的时候，tm_isdst为正。不实行夏令时的进候，tm_isdst为0；不了解情况时，tm_isdst()为负。*/
};
#define _TM_DEFINED
#endif

#ifndef _TIME_T_DEFINE
typedef long time_t;
#define _TIME_T_DEFINE
#endif

time_t time(time_t* timer);
struct tm* gmtime(const time_t* timer);
struct tm* localtime(const time_t* timer);
char* asctime(const struct tm* timeptr);
char* ctime(const time_t* timer);
double difftime(time_t time1, time_t time0);
time_t mktime(struct tm* timeptr);

struct timeval {
  long tv_sec;
  long tv_usec;
};
int gettimeofday(struct timeval* tv, struct timezone* tz);
