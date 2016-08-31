/* Generated by CIL v. 1.7.0 */
/* print_CIL_Input is false */

struct _IO_FILE;
struct timeval;
extern float strtof(char const   *str , char const   *endptr ) ;
extern void signal(int sig , void *func ) ;
typedef struct _IO_FILE FILE;
extern int atoi(char const   *s ) ;
extern double strtod(char const   *str , char const   *endptr ) ;
extern int fclose(void *stream ) ;
extern void *fopen(char const   *filename , char const   *mode ) ;
extern void abort() ;
extern void exit(int status ) ;
extern int raise(int sig ) ;
extern int fprintf(struct _IO_FILE *stream , char const   *format  , ...) ;
extern int strcmp(char const   *a , char const   *b ) ;
extern int rand() ;
extern unsigned long strtoul(char const   *str , char const   *endptr , int base ) ;
void RandomFunc(unsigned short input[1] , unsigned short output[1] ) ;
extern int strncmp(char const   *s1 , char const   *s2 , unsigned long maxlen ) ;
extern int gettimeofday(struct timeval *tv , void *tz  , ...) ;
extern int printf(char const   *format  , ...) ;
int main(int argc , char *argv[] ) ;
void megaInit(void) ;
extern unsigned long strlen(char const   *s ) ;
extern long strtol(char const   *str , char const   *endptr , int base ) ;
extern unsigned long strnlen(char const   *s , unsigned long maxlen ) ;
extern void *memcpy(void *s1 , void const   *s2 , unsigned long size ) ;
struct timeval {
   long tv_sec ;
   long tv_usec ;
};
extern void *malloc(unsigned long size ) ;
extern int scanf(char const   *format  , ...) ;
void RandomFunc(unsigned short input[1] , unsigned short output[1] ) 
{ 
  unsigned short state[1] ;
  unsigned short local1 ;
  char copy11 ;
  char copy12 ;

  {
  state[0UL] = (input[0UL] + 914778474UL) - (unsigned short)29623;
  local1 = 0UL;
  while (local1 < (unsigned short)0) {
    if (state[0UL] < local1) {
      if (state[0UL] != local1) {
        copy11 = *((char *)(& state[local1]) + 0);
        *((char *)(& state[local1]) + 0) = *((char *)(& state[local1]) + 1);
        *((char *)(& state[local1]) + 1) = copy11;
        copy11 = *((char *)(& state[local1]) + 1);
        *((char *)(& state[local1]) + 1) = *((char *)(& state[local1]) + 0);
        *((char *)(& state[local1]) + 0) = copy11;
      } else {
        copy12 = *((char *)(& state[0UL]) + 0);
        *((char *)(& state[0UL]) + 0) = *((char *)(& state[0UL]) + 1);
        *((char *)(& state[0UL]) + 1) = copy12;
        copy12 = *((char *)(& state[0UL]) + 1);
        *((char *)(& state[0UL]) + 1) = *((char *)(& state[0UL]) + 0);
        *((char *)(& state[0UL]) + 0) = copy12;
      }
    } else {
      state[local1] += state[local1];
    }
    local1 ++;
  }
  output[0UL] = (state[0UL] + 507365164UL) + (unsigned short)46025;
}
}
void megaInit(void) 
{ 


  {

}
}
int main(int argc , char *argv[] ) 
{ 
  unsigned short input[1] ;
  unsigned short output[1] ;
  int randomFuns_i5 ;
  unsigned short randomFuns_value6 ;
  int randomFuns_main_i7 ;

  {
  megaInit();
  if (argc != 2) {
    printf("Call this program with %i arguments\n", 1);
    exit(-1);
  } else {

  }
  randomFuns_i5 = 0;
  while (randomFuns_i5 < 1) {
    randomFuns_value6 = (unsigned short )strtoul(argv[randomFuns_i5 + 1], 0, 10);
    input[randomFuns_i5] = randomFuns_value6;
    randomFuns_i5 ++;
  }
  RandomFunc(input, output);
  if (output[0] == 41185) {
    printf("You win!\n");
  } else {

  }
  randomFuns_main_i7 = 0;
  while (randomFuns_main_i7 < 1) {
    printf("%u\n", output[randomFuns_main_i7]);
    randomFuns_main_i7 ++;
  }
}
}
