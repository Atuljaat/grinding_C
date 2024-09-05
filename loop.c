#include <stdio.h>
int main(){
    int outer , inner , answer;
    for ( outer = 10 ; outer <= 10; outer++)
    {
        printf(" this is the table of %d\n" , outer);
        for ( inner = 1; inner <= 10; inner++)
        {
            answer = outer * inner;
            printf("%d * %d = %d\n" , outer , inner , answer);
        };
    };
}