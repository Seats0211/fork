#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>

int main( void )
{
    pid_t pid;
    pid = fork();
    if ( pid < 0 )
    {
        fprintf( stderr, "Fork Failed.\n" );
        return 1;
    }
    else if ( pid == 0 )
    {
        execlp( "/bin/ls", "ls", NULL );
    }
    else
    {
        wait(NULL);
        printf( "Child Complete.\n" );
    }
    return 0;
}