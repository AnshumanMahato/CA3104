#include<stdio.h>
#include<math.h>

int main(){
    int ch,num,i,ctr;
    do
    {
        printf("\nMENU\n");
        printf("\n1.Get Factorial");
        printf("\n2.Check for Prime");
        printf("\n3.Check for odd or even");
        printf("\n4.Exit");
        printf("\nEnter Choice(1-4):");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter a number:");
            scanf("%d",&num);
            i=1;
            while(num){
                i *= num;
                num--;
            }
            printf("\nFactorial = %d\n",i);
            break;
        case 2:
            printf("\nEnter a number:");
            scanf("%d",&num);
            ctr=0;
            for(i = 2; i<= sqrt(num); i++){
                if(num % i == 0){
                    ctr++;
                    break;
                }
            }
            if(!ctr)
                printf("\n%d is a prime number.\n",num);
            else
                printf("\n%d is not a prime number.\n",num);
            break;
        case 3:
            printf("\nEnter a number:");
            scanf("%d",&num);
            if(num % 2 == 0)
                printf("\n%d is even.\n",num);
            else
                printf("\n%d is odd.\n",num);
            break;
        case 4:
            printf("\nExiting....\n");
            break;
        default:
            printf("\nInvalid choice. Enter between 1-4.\n");
            break;
        }
    } while (ch != 4);
    
    return 0;
}