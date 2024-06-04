#include<stdio.h>
#include<math.h>
int main()
{

    int c=1, a1=0, a2=0,a3=0,a4=0 ;
    float pie,i=1,a=0,num1, num2, num3, num4;
    for(c=1; ; c++)
    {
        if(c%2!=0)
        {
            pie=a+(4/i);
            i=i+2;
            a=pie;


        }
        else if(c%2==0)
        {
            pie=a-(4/i);
            i=i+2;
            a=pie;

        }
        // 2-5 digits after the decimal point
         num1 = floor(100*pie)/100;
         num2 = floor(1000*pie)/1000;
         num3 = floor(10000*pie)/10000;
         num4 = floor(100000*pie)/100000;
         //To understand why we used num1-4, un-comment out the following line and see the output.
        //printf("%f--%f--%f--%f", num1, num2, num3, num4);
        if(num1==3.140000f && a1==0)
        {
            a1 = c;
        }
        if(num2==3.141000f && a2==0)
        {
            a2 = c;
        }
        if(num3==3.141500f && a3==0)
        {
            a3 = c;
        }
        if(num4==3.141590f && a4==0)
        {
            a4 = c;
        }
        printf("Term %d: ",c);
        printf("%f\n",pie);
        if(a1 != 0 && a2 != 0 && a3 != 0 && a4 != 0)  // a1!=0 means already we get the first 3.14 value.. 
                                                      // if all a is != 0 then no more calculation is needed hence break the loop.
        {
            break;
        }
    }

    printf("First 3.14 found at %d term.\n",a1);
    printf("First 3.141 found at %d term.\n",a2);
    printf("First 3.1415 found at %d term.\n",a3);
    printf("First 3.14159 found at %d term.\n",a4);
}
