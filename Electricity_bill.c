#include<stdio.h>
int main()
{
    int e, bill = 0;

    printf("Enter units of Electicity :");
    scanf("%d", &e);

    if(e > 0)
    {
        if(e <= 100)
        {
            bill = 5*e;
        }
        else 
        {
            bill = 100*5;
            if(e <= 200)
            {
                bill = bill + ((e - 100)*8);
            }
            else
            {
                bill = bill + (100 *8);
                if(e <= 300)
                {
                    bill = bill + ((e - 200)*11);
                }            
                else
                {
                    bill = bill + (100*11);
                    if(e <= 400)
                    {
                        bill = bill + ((e - 300)*14);
                    }
                    else
                    {
                        bill = bill + (100*14);
                        if(e <= 500)
                        {
                            bill = bill +((e - 400)*17);
                        }
                        else
                        {
                            bill = bill + (100*17);
                            if(e > 500)
                            {
                                bill = bill + ((e - 500)*20);
                            }
                            else{
                                printf("invalid");
                            }
                            
                        }
                    }
                }

            }

        }
                    
        printf("Total bill is : %d", bill);
        
    }
    else{
        printf("Entered units are invalid.");
    }

return 0;

}