/*********************************************************
  Net1.h
  --------------------------------------------------------
  generated at Fri Feb 21 14:15:33 2014
  by snns2c ( Bernward Kett 1995 ) 
*********************************************************/

extern int Net1(float *in, float *out, int init);

static struct {
  int NoOfInput;    /* Number of Input Units  */
  int NoOfOutput;   /* Number of Output Units */
  int(* propFunc)(float *, float*, int);
} Net1REC = {20055,1,Net1};
