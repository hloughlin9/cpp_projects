#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float val1;
    float val2;
    char operator;
    float answer;

    printf("Enter your calculation in the following format (e.g. 4*3):\nAvailable Operations:\n/ for Division\n* for Multiplication\n+ for Addition\n- for Subtraction\n^ for Power\n# for SQRT\n");
    scanf("%f %c %f", &val1, &operator, &val2);

  switch(operator)
    {
    case '/': answer = val1/val2;
      break;
    case '*': answer = val1*val2;
      break;
    case '+': answer = val1+val2;
      break;
    case '-': answer = val1-val2;
      break;
    case '^': answer = pow(val1,val2);
      break;
    case '#': answer = sqrt(val2);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",val1,operator, val2, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
