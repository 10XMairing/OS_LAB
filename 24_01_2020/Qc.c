
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{

    // make two process which run same
    // program after this instruction
    int status = fork(); //returns 0 when a a child process is created by parent &&& returns parentid when called by child id;

    if (status == 0)
    {
        // child process
        printf("child : pid() : %d \n", getpid());
        printf("child ppid() : %d \n", getppid());

        // char * argv_list[] = {"ls","-lart","/home/mairingdao/Documents" ,NULL};
        // execv("/bin/ls",argv_list);
        execl("/bin/ls", "ls", "-l", NULL);
    }
    else if (status > 0)
    {
        wait();
        printf("parent pid() : %d \n", getpid());
        printf("parent ppid() : %d \n", getppid());
        exit(0);
    }
    else
    {
        printf("Error creating child process\n");
    }
    printf("Hello world!\n");
    return 0;
}
