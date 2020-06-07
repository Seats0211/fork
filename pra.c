#include<omp.h>
#include<stdio.h>

int main( void )
{
    #pragma omp parallel
    {
        printf( "I am a parallel region.\n" );
    }
    return 0;
}