#include <iostream>
bool is_prime(int n)
{
if(n<=1) 
return false;
for(int i=2;i<n;i++)
{
if(n%i==0)
return false;

}
return true;
 }
//per verificare n sia primo bisogna dividerlo per tutti i precedenti per definirlo ricorsivamente 


