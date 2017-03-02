
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(const int argc, const char * argv[]) {
    printf("%d", getpid());
    
    return 0;
}