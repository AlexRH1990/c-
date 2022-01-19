#include <stdio.h>

int e(){
    
    return 105;
}
int d(){
    e();  
    int g= 10;  
}
int c(){
    d();    
}
int b(){
    c();    
}
int a(){
    b();   
}
int main() {
  int x=a();
  printf("%d",x);
  return 0;
}
 
 