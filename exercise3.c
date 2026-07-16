#include<stdio.h>
#include<fctnl.h>
#include<unistd.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>

int main()
{ 
    int fd;
    char buffer[100];

    struct stat fileInfo;

    DIR *dir;
    struct dirent*entry;

    /*
      PART 1:
      Create and write data into a file using open() and write()
    */

    printf("\n--- Creating and Writing File---\n");

    fd= opem("student.txt",O_CREAT|O_WRONLY,0644);

    if(fd<0)
    {
        printf("File creation failed\n";
        return 1;)
    }

    char data[]="Linux Systems Calls Experiment\n"
              "B.Sc Cyber security Laboratory";

    write()
}