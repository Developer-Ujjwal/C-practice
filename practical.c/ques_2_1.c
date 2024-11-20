// In a town, the percentage of men is 52. The percentage of total literacy is 48. If total 
//percentage of literate men is 35 of the total population, write a program to find the total 
//number of illiterate men and women if the population of the town is 80,000.
#include<stdio.h>
#include<math.h>
int main()
{
    int total = 80000;
    float menPercentage = 52;
    float literacyPercentage = 48;
    float literateMenPercentage = 35;

    int men = (menPercentage / 100) * total;
    int literatePeople = (literacyPercentage / 100) * total;
    int literatemen = (literateMenPercentage / 100) * total;

    int illiterateMen = men - literatemen;
    int illiteratePeople = total - literatePeople;
    int women=total-men;
    int literatewomen= literatePeople-literatemen;
    int illiteratewomen=women-literatewomen;
    printf("Sr. No.\t\t");
    printf("Get Outcome\t\t\t\t\t");
    printf("Value\n");
    printf("1\t\t");
    printf("Total Population\t\t\t\t");
    printf("%d\n",total);
    printf("2\t\t");
    printf("Number of Literate(Men + Women)\t\t\t");
    printf("%d\n",literatePeople);
    printf("3\t\t");
    printf("Number of Men\t\t\t\t\t");
    printf("%d\n",men);
    printf("4\t\t");
    printf("Number of Literate Men\t\t\t\t");
    printf("%d\n",literatemen);
    printf("5\t\t");
    printf("Number of Illiterate Men\t\t\t");
    printf("%d\n",illiterateMen);
    printf("6\t\t");
    printf("Number of Women\t\t\t\t\t");
    printf("%d\n",women);
    printf("7\t\t");
    printf("Number of Literate Women\t\t\t");
    printf("%d\n",literatewomen);
    printf("8\t\t");
    printf("Number of Illiterate Women\t\t\t");
    printf("%d\n",illiteratewomen);
    return 0;
}