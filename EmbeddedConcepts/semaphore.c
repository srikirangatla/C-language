#include <pthread.h>
#include <semaphore.h>
#include <stdio.h>

sem_t semaphore;

void* thread_function(void* arg) {
    // Wait (decrement the semaphore)
    sem_wait(&semaphore);

    // Critical section (shared resource access)
    printf("Thread %ld is in the critical section\n", (long)arg);

    // Simulate resource usage
    sleep(1);

    // Signal (increment the semaphore)
    printf("Thread %ld is leaving the critical section\n", (long)arg);
    sem_post(&semaphore);

    return NULL;
}

int main() {
    pthread_t threads[5];
    long i;

    // Initialize the semaphore with a value of 3 (allowing 3 threads at a time)
    sem_init(&semaphore, 0, 3);

    // Create 5 threads
    for (i = 0; i < 5; i++) {
        pthread_create(&threads[i], NULL, thread_function, (void*)i);
    }

    // Wait for all threads to finish
    for (i = 0; i < 5; i++) {
        pthread_join(threads[i], NULL);
    }

    // Destroy the semaphore
    sem_destroy(&semaphore);

    return 0;
}
