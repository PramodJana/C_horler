# include "stdio.h"
int main()
{
    int myNumber;
    myNumber=500;
    printf("My number is %d \n", myNumber); // this line prints my number
    myNumber=20;
    printf("My number is %d \n", myNumber);
    int myOtherNumber;
    myOtherNumber=myNumber;
    printf("My OtherNumber is %d \n", myOtherNumber);
    int myThirdNumber = 5 * myNumber;
    printf("my ThirdNumber is %d \n", myThirdNumber);
    char myChar= 'A';
    printf("my char = %c\n", myChar);
    myChar += 1;
    printf("Added one character to my char and the new char is %c\n", myChar);
    return 0;
}
