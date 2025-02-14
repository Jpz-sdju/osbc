#include "proc.h"
struct process p_pool[PROC_NUM];
void init_port(){

    for (int i = 0; i < PROC_NUM; i++)
    {
        p_pool[i].pid = i;
        p_pool[i].state = SLEEP;
    }
    
    
}