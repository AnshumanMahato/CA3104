/* Number system conversation in C

1. Binary to decimal 
2.Octal to Decimal
3. Decimal to hexadecimal
4.decimal to binary using Bitwise operator. */

#include <stdio.h>
#include <math.h>

int main()
{
    int ch,num,i,err,dec,bin[32];
    char hex[8];
    do{
        printf("\nNumber System Conversion\n");
        printf("\n1.Binary to Decimal");
        printf("\n2.Octal to Decimal");
        printf("\n3.Decimal to Hexadecimal");
        printf("\n4.Decimal to Binary");
        printf("\n5.Exit");
        printf("\n5.Enter Choice(1-5):");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("\nEnter a binary number:");
                   scanf("%d",&num);
                   i=0;
                   err=0;
                   dec=0;
                   while(num){
                       int rem = num%10;
                       if(rem<2){
                           dec += rem*pow(2,i);
                           i++;
                       }
                       else{
                           err++;
                           break;
                       }
                       num = num/10;
                   }
                   if(!err)
                        printf("%d",dec);
                   else
                        printf("Invalid Binary number");
                    break;
                    
            case 2:printf("\nEnter an octal number:");
                   scanf("%d",&num);
                   i=0;
                   err=0;
                   dec=0;
                   while(num){
                       int rem = num%10;
                       if(rem<8){
                           dec += rem*pow(8,i);
                           i++;
                       }
                       else{
                           err++;
                           break;
                       }
                       num = num/10;
                   }
                   if(!err)
                        printf("%d",dec);
                   else
                        printf("Invalid Ocatal Number");
                    break;
            
            case 3: printf("\nEnter a decimal number:");
                    scanf("%d",&num);
                    i=0;
                    while(num){
                        int k = num%16;
                        switch(k){
                            case 10:hex[i++]='A';break;
                            case 11:hex[i++]='B';break;
                            case 12:hex[i++]='C';break;
                            case 13:hex[i++]='D';break;
                            case 14:hex[i++]='E';break;
                            case 15:hex[i++]='F';break;
                            default:hex[i++]= k + '0';break;
                        }
                        num /= 16;
                    }
                    while(i){
                        printf("%c",hex[--i]);
                    }
                    break;
            case 4: printf("\nEnter a decimal number:");
                    scanf("%d",&num);
                    i=0;
                    while(num){
                        bin[i++] = num & 1;
                        num = num>>1;
                    }
                    while(i){
                        printf("%d",bin[--i]);
                    }
                    break;
            case 5: printf("\nExiting....\n");
                    break;
            default:printf("\nInvalid choice. Enter between 1-5.\n");
                    break;
        }
    }while(ch!=5);
    return 0;
}
