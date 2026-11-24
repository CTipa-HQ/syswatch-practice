#include <stdio.h>
#include <sys/utsname.h>
#include "../include/system.h"

void show_system_info(struct utsname *info){
    if (uname(info) == -1){
        perror("uname");
        return;
    }
    printf("System: %s\n", info->sysname);
    printf("Node: %s\n", info->nodename);
    printf("Release: %s\n", info->release);
    printf("Version: %s\n", info->version);
    printf("Machine: %s\n", info->machine);
}
