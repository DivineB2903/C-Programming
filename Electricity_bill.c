//easy method
#include<stdio.h>

int main() 
{
    int e;
    float amt;

    printf("Enter electricity units : ");
    scanf("%d", &e);

    if(e >= 100)
    {
        amt = 100*8;
        e -= 100;
        if(e >= 100)
        {
            amt = amt  + (100*10);
            e -= 100;
            if(e >= 100)
            {
                amt = amt + (100*12);
                e -= 100;
                if(e >= 100)
                {
                    amt = amt + (100*15);
                    e -= 100;
                    if(e >= 100)
                    {
                        amt =  amt + (100*17);
                        e -= 100;
                        if(e > 0)
                        amt = amt + (e*20);
                    }
                    else amt = amt + (e*17);
                }
                else amt = amt + (e*15);
            }
            else amt = amt + (e*12);
        }
        else amt = amt + (e*10);
    }
    else
    amt = e*8;

    printf("The Electricity bill is : %.2f", amt);

    return 0;
}

//#include<stdio.h>
//int main()
//{
//    int e, bill = 0;
//
//    printf("Enter units of Electicity :");
//    scanf("%d", &e);
//
//    if(e > 0)
//    {
//        if(e <= 100)
//        {
//            bill = 8*e;
//        }
//        else 
//        {
//            bill = 100*8;
//            if(e <= 200)
//            {
//                bill = bill + ((e - 100)*10);
//            }
//            else
//            {
//                bill = bill + (100 *10);
//                if(e <= 300)
//                {
//                    bill = bill + ((e - 200)*12);
//                }            
//                else
//                {
//                    bill = bill + (100*12);
//                    if(e <= 400)
//                    {  
//                        bill = bill + ((e - 300)*15);
//                    }
//                    else
//                    {
//                        bill = bill + (100*15);
//                        if(e <= 500)
//                        {
//                            bill = bill +((e - 400)*17);
//                        }
//                        else
//                        {
//                            bill = bill + (100*17);
//                            if(e > 500)
//                            {
//                                bill = bill + ((e - 500)*20);
//                            }
//                            else{
//                                printf("invalid");
//                            }
//                            
//                        }
//                    }
//                }
//
//            }
//
//        }
//                    
//        printf("Total bill is : %d", bill);
//        
//    }
//    else
//    {
//        printf("Entered units are invalid.");
//    }
//
//return 0;
//
//}