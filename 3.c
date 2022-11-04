#include<stdio.h>

int main(){
    int r,l,b,cho;
    float perimeter,area;
    printf("\n press 1 to choose the circle:\n press 2 to choose square:\n press 3 to choose rectangle:");
    scanf("%d",&cho);
    switch (cho)
    {
    case 1:
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    perimeter=2*3.14*r;
    area=3.14*r*r;
    printf("The perimeter of circle is %f and area of circle is %f",perimeter,area);
        break;
    case 2:
    printf("Enter the side length of square:");
    scanf("%d",&l);
    perimeter=4*l;
    area=l*l;
    printf("The perimeter of square is %f and area of square is %f",perimeter,area);
        break;
    case 3:
    printf("Enter the lenght and breadth of retangle:");
    scanf("%d%d",&l,&b);
    perimeter=2*(l+b);
    area=l*b;
    printf("The perimeter of rectangle is %f and area of rectangle is %f",perimeter,area);
        break;
    
    }

    return 0;
}