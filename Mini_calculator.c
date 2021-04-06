#include<stdio.h>
#include<math.h>
void Add();
void Subtract();
void Division();
void Multiplication();
void Remainder();
void Square_root();
void Power();
void Sin();
void Cos();
void Tan();
void Cube_root();
void Log();
void Inverse_sin();
void Inverse_cos();
void Inverse_tan();
void Factorial();


int main()
{
    int choice;
    int c;

    printf("                                          Mini Calculator\n");
    printf("                                       -----------------------\n\n");

    printf("                     1. Addition\t5. Remainder\t9. Cosine\t13. Inverse Sine\n");
    printf("                     2. Subtraction\t6. Square Root\t10. Tangent\t14. Inverse Cosine\n");
    printf("                     3. Division\t7. Power\t11. Cube Root\t15. Inverse Tangent\n");
    printf("                     4. Multiplication\t8. Sine\t\t12. Logarithm\t16. Factorial\n");
    printf("                  --------------------------------------------------------------------------\n");

    printf("                        Choose your desired operation by pressing number \"1 to 16\": ");
    scanf("%d", &choice);
    printf("                       ---------------------------------------------------------------\n");

    switch(choice)
    {
    case 1:
        Add();
        break;
    case 2:
        Subtract();
        break;
    case 3:
        Division();
        break;
    case 4:
        Multiplication();
        break;
    case 5:
        Remainder();
        break;
    case 6:
        Square_root();
        break;
    case 7:
        Power();
        break;
    case 8:
        Sin();
        break;
    case 9:
        Cos();
        break;
    case 10:
        Tan();
        break;
    case 11:
        Cube_root();
        break;
    case 12:
        Log();
        break;
    case 13:
        Inverse_sin();
        break;
    case 14:
        Inverse_cos();
        break;
    case 15:
        Inverse_tan();
        break;
    case 16:
        Factorial();
        break;
    default:
        printf("You entered wrong input.");


    }
    return 0;
}

void Add()
{
    float num1, sum=0.0;
    int i=1;
    printf("\n");
    printf("                         Enter value one after another & press '0' to get the result.\n");
    printf("                          *********************************************************\n");
    do
    {
        printf("Value-%d: ", i);
        scanf("%f", &num1);

        sum = sum + num1;
        ++i;
    }while(num1!=0);
    printf("\nResult is: %.2f\n", sum);


}
void Subtract()
{
    float num1, sum=0.0;
    int i=1;
    printf("\n");
    printf("                         Enter value one after another & press '0' to get the result.\n");
    printf("                         ***********************************************************\n");
    do
    {
        printf("Value-%d: ", i);
        scanf("%f", &num1);

        if(i==1)
           sum =sum+num1;
        else
           sum =sum-num1;

        ++i;
    }while(num1!=0);
    printf("\nResult is: %.2f\n", sum);


}
void Division()
{
    float num1, sum=0.0;
    int i=1;
    printf("\n");
    printf("                         Enter value one after another & press '1' to get the result.\n");
    printf("                         ***********************************************************\n");
    do
    {
        printf("Value-%d: ", i);
        scanf("%f", &num1);



        if(i==1)
           sum =num1;
        else
        {
            if(num1==0){
            printf("\n**Math Error.**\n");
            break;
            }
          sum =sum/num1;
        }
        ++i;
    }while(num1!=1);

    if(num1!=0)
    printf("\nResult is: %.2f\n", sum);

}
void Multiplication()
{
    float num1, mul=1.0;
    int i=1;
    printf("\n");
    printf("                         Enter value one after another & press '1' to get the result.\n");
    printf("                         ***********************************************************\n");
    do
    {
        printf("Value-%d: ", i);
        scanf("%f", &num1);

        mul=mul*num1;
        ++i;
    }while(num1!=1);
    printf("\nResult is: %.2f\n", mul);
}
void Remainder()
{
    int num1, sum;
    int i=1;
    printf("\n");
    printf("                         Enter value one after another & press '1' to get the result.\n");
    printf("                         ***********************************************************\n");
    printf("Value-%d: ", i);
    scanf("%d", &num1);
    do
    {

        if(i==1)
           sum =num1;
        else
        {
            if(num1==0){
            printf("\n**Math Error.**\n");
            break;
            }
          sum =sum%num1;
        }
        ++i;
        printf("Value-%d: ", i);
        scanf("%d", &num1);
    }while(num1!=1);

    if(num1!=0);
    printf("\nRemainder is: %d\n", sum);

}
void Square_root()
{
    float m,n;
    float num;
    n=0.0001;
    printf("ENTER A NUMBER : ");
    scanf("%f",&num);


    for(m=0;m<num;m=m+n)
    {
        if(num<0)
           break;
        if((m*m)>num)
        {
           m=m-n;
           break;
        }
    }

    if(num<0)
       printf("Math Error.\n");
    else
       printf("%.2f",m);

}
void Power()
{
    float num1, num2, mul=1.0, c1, i=0;
    printf("Enter the Base first then it's Power: ");
    scanf("%f %f", &num1, &num2);
    if(num2<0)
    {
        ++i;
        num2 = -num2;
    }


    for(c1=1; c1<=num2; c1++)
    {
        mul = mul * num1;
    }
    if(i>0)
        mul = 1.0/mul;
    printf("Result is: %.2f", mul);
}
void Sin()
{
    int i, n;
    float x, sum, t;


    printf("Enter the value for x : ");
    scanf("%f",&x);

    printf("Enter the value for n : ");
    scanf("%d",&n);

    x=x*3.14159/180;
    t=x;
    sum=x;

    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }

    printf("The value of Sin(%f) = %.4f\n",x,sum);
    printf("Using library function the value of Sin(%f) = %.4f\n", x, sin(x));


}
void Cos()
{
    int i, n;
    float x, sum=1, t=1;

    printf("Enter the value for x: ");
    scanf("%f",&x);

    printf("Enter the value for n: ");
    scanf("%d",&n);

    x=x*3.14159/180;

    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+t;
    }
    printf("\n");

    printf("The value of Cos(%f) is : %.4f\n", x, sum);
    printf("Using library function the value of Cos(%f) is: %.4f\n", x, cos(x));

}
void Tan()
{
    float num1, result;
    printf("Enter a number(in degree's) to find it's Tangent value: ");
    scanf("%f", &num1);

    num1=num1*(3.1416/180.0);

    result = tan(num1);
    printf("Tan(%f)= %f", num1, result);
}
void Cube_root()
{
    float num1, result;
    printf("Enter the number to find it's Cube Root: ");
    scanf("%f", &num1);

    if(num1<0)
        num1= -num1;

    result = pow(num1, 0.333333333333333);
    if(num1<0)
        printf("Cube root of - %.2f= - %.2f\n", num1, result);
    else
        printf("Cube root of  %.2f=  %.2f\n", num1, result);
}
void Log()
{
  int i, j;
  float sum = 0.0f;
  float power;
  float x;
  printf("enter x for sum up to 7th term: ");
  scanf("%f", &x);
  for (i = 1; i <= 7; i++) {
    power = 1.0f;
    for (j = 0; j < i; j++) {
      power = power * ((x - 1.0f) / x);
    }
    sum += (1.0f / i) * power;
  }

  printf("ln(%f) = \n%f\n%lf\n", x, sum, log(x));

}
void Inverse_sin()
{
    float num1, result;
    printf("Enter a number to find it's Sine Inverse: ");
    scanf("%f", &num1);

    result = asin(num1);
    printf("Inverse Sine(%f)= %.2f", num1, result);
}
void Inverse_cos()
{
    float num1, result;
    printf("Enter a number to find it's Cosine Inverse: ");
    scanf("%f", &num1);

    result = acos(num1);
    printf("Inverse Cos(%f)= %.2f", num1, result);
}
void Inverse_tan()
{
    float num1, result;
    printf("Enter a number to find it's Tangent Inverse: ");
    scanf("%f", &num1);

    result = atan(num1);
    printf("Inverse Tan(%f)= %.2f", num1, result);
}
void Factorial()
{
    int num1,p=0, c1, result=1;

    printf("Enter a number to find it's Factorial: ");
    scanf("%d", &num1);

    if(num1<0)
        {
            ++p;
            num1 = -num1;
        }

    for(c1=1; c1<=num1; c1++)
    {
        result = result * c1;
    }
    if(p>0)
          printf("Factorial of - %d is: - %d\n", num1, result);
    else
        printf("Factorial of %d is: %d\n", num1, result);
}




