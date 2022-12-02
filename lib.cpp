#include "lib.h"

bool primi(int n)
int dividi=1, conta=0;
  while(conta<=1&& dividi<=n/2) {
 if(n%dividi==0){
   conta++;
   }
  dividi++;
  }
  if(conta==1)
  {
    return true;
}
else{
return false;
  }
  }
