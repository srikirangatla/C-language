#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;
int shared_resource = 0;

void *thread_function() {
    pthread_mutex_lock(&lock);
    shared_resource++;
    printf("Shared resource: %d\n", shared_resource);
    pthread_mutex_unlock(&lock);
    return NULL;
}

int main (void) {
    pthread_t thread1, thread2;
    // Initialize the mutex
    pthread_mutex_init(&lock, NULL);
    // Create two threads
    pthread_create(&thread1, NULL, thread_function, NULL);
    pthread_create(&thread2, NULL, thread_function, NULL);
    // Wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    // Destroy the mutex
    pthread_mutex_destroy(&lock);
    return 0;
}
