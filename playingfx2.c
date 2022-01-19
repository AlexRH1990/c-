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
int a(int y){
    b();    
    return b()+y; 
}
int main() {
  int x=a(3);
  printf("%d",x);
  return 0;
}