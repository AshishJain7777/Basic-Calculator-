// CREATED BY ASHISH JAIN , DATE - 19-9-2021
#include <stdio.h>
int main()
{
    char expression;
    double first, second;
    int remainder1, remainder2;
    float answer;
    // this is an calculator which is can evaluate your values by : adding , subtracting , multiplying and telling you the left remainder of the value.
    printf("WELCOME TO THE CALCULATOR, THIS CALCULATOR CAN CALCULATE BY ENTERING BELOW EXPRESSIONS \n 'P' OR 'p' FOR ADDITION \n 'S' OR 's' FOR SUBTRACTION \n 'M' OR 'm' FOR MULTIPLICATION \n 'D' OR 'd' FOR DIVISION \n 'R' OR 'r' FOR REMAINDER \n");
    printf("ENTER THE GIVEN EXPRESSION \n");
    scanf("%c", &expression);
    switch (expression)
    {
    case 'P':
        printf("ENTER TWO VALUES TO ADD \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%lf",&first);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%lf",&second);
        // scanf("%lf%lf", &first, &second);
        answer = first + second;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 'p':
        printf("ENTER TWO VALUES TO ADD \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%lf",&first);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%lf",&second);
        // scanf("%lf%lf", &first, &second);
        answer = first + second;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 'S':
        printf("ENTER TWO VALUES TO SUBTRACT \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%lf",&first);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%lf",&second);
        // scanf("%lf%lf", &first, &second);
        answer = first - second;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 's':
        printf("ENTER TWO VALUES TO SUBTRACT \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%lf",&first);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%lf",&second);
        // scanf("%lf%lf", &first, &second);
        answer = first - second;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 'M':
        printf("ENTER TWO VALUES TO MULTIPLY \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%lf",&first);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%lf",&second);
        // scanf("%lf%lf", &first, &second);
        answer = first * second;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 'm':
        printf("ENTER TWO VALUES TO MULTIPLY \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%lf",&first);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%lf",&second);
        // scanf("%lf%lf", &first, &second);
        answer = first * second;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 'D':
        printf("ENTER TWO VALUES TO DIVIDE \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%lf",&first);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%lf",&second);
        // scanf("%lf%lf", &first, &second);
        answer = first / second;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 'd':
        printf("ENTER TWO VALUES TO DIVIDE \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%lf",&first);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%lf",&second);
        // scanf("%lf%lf", &first, &second);
        answer = first / second;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 'R':
        printf("ENTER TWO VALUES TO FIND REMAINDER \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%d", &remainder1);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%d", &remainder2);
        answer = remainder1 % remainder2;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    case 'r':
        printf("ENTER TWO VALUES TO FIND REMAINDER \n");
        printf("ENTER YOUR FIRST VALUE \n");
        scanf("%d", &remainder1);
        printf("ENTER YOUR SECOND VALUE \n");
        scanf("%d", &remainder2);
        answer = remainder1 % remainder2;
        printf("YOUR ANSWER IS :  %.3f \n", answer);
        break;
    default:
        printf("ENTER A VALID EXPRESSION \n");
        break;
    }

    return 0;
}