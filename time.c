#include"types.h"
#include"stat.h"
#include"user.h"
#include"fcntl.h"

int
main(){
    int a=0 ,b=5,status;
    int pid = fork();
    if(pid ==0){
        sleep(100);
        exit();
    }
    else{
        status=waitx(&a,&b);
        printf(1,"%d %d %d \n",a,b,status);
    }
    exit();
} 