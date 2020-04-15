/*
 * test optarg call
 *
 * 08/30/2018 by Alex Cheng
 */
 
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

/*
 * main function
 */
int main(int argc, char *argv[])
{
    printf("cmd input 1 - argc = %d, argv = %s \n", argc, argv[0]);
    getopt(argc, argv, "-");
    printf("command input - %s\n", optarg);
    return 0;
}


