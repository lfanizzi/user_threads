#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>

struct tcb
{
    int thread_id;
    int thread_priority;
    ucontext_t *thread_context;
    struct tcb *next;
};

typedef struct tcb tcb;