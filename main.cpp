#include "stdio.h"
void Move(char from , char temp , char target , int num){
    if(num == 1 )
        printf("%c -> %c\n" , from , target );
    else{
        Move(from  , target , temp , num -1 ) ;
        Move(from , temp , target , 1 ) ;
        Move(temp , from , target , num-1 );
    }
}

int main() {
    int N ;
    scanf("%d" , &N );
    char from = 'a' ;
    char temp = 'b' ;
    char target = 'c' ;
    Move(from , temp , target ,N) ;
}