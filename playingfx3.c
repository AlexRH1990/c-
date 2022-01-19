#include <stdio.h>

int e(){
    
    return 105;
}
int d(){
   return e();  
    int g= 10;  
}
int c(){
   return d();    
}
int b(){
    return c();      
}
int a(int y){
    b();    
    return b()+y; 
}
int main() {
  int x=a(3);
  printf("%d",x);
  return 0;
}