#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#define MAX 1001

void *print_even (void *);
void *print_odd (void *);

pthread_mutex_t mutex;
pthread_cond_t cv;

int main ()
{
  pthread_t pid[2];
  int *ret_value = NULL;

  pthread_create (&pid[0], NULL, print_even, NULL);
  pthread_create (&pid[1], NULL, print_odd, NULL);
  pthread_join (pid[0], (void *) ret_value);
  pthread_join (pid[1], (void *) ret_value);
  return 0;
}

void *print_even (void *a)
{
	/* Fill this code */
    return NULL;
}

void *print_odd (void *a)
{
	/* Fill this code */
    return NULL;
}
