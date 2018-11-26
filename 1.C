#include "iocc2530.h"
void Init_T1(void){
  T1CTL |=
}
void Init_LED(void){
}

void main( void )
{
  Init_T1();
  Init_LED();
}
#pragma vector = T1_VECTOR
  interrupt void T1_INT(void){
