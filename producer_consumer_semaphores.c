#include<stdio.h>
void main() {
    int buffer[10],buffersize,produce,consume,choice = 0, in = 0,out = 0;
    int buffersize = 10;
    while(choice != 3) {
        printf("\n 1. Process \t 2. Consume \t 3. Exit");
        printf("Enter your choice. -- ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
            if((in + 1) % bufsize == out) 
                printf("\n Buffer is Fulll");
            else {

            }
            break;
            printf("\n Enter the value: ");
            scanf("%d",&produce);
            buffer[in] = produce;
            in = (in + 1) % bufsize;
            case 2: 
            if(in == out) 
                printf("\n Buffer is Empty.");
                else {
                    consume == buffer[out];
                    printf("\n The consumed Value is %d",consume);
                    out = (out+1) % bufsize;
                }
                break;
        }
    }
}