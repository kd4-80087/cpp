#include<stdio.h>
struct date{
    int day;
    int mon;
    int yr;
    
};
void initdate(struct date* ptrdate)
{
    ptrdate->day=22;
    ptrdate->mon=02;
    ptrdate->yr=2000;
        
}
void acceptdatefromconsole(struct date* ptrdate)
{
    printf("enter day=");
    scanf("%d",&ptrdate->day);
    printf("enter month=");
    scanf("%d",&ptrdate->mon);
    printf("enter year=");
    scanf("%d",&ptrdate->yr);

}    
void printdateonconsole(struct date* ptrdate)
{
    printf("the date is=%d:%d:%d\n", ptrdate->day, ptrdate->mon, ptrdate->yr);
    
}
int main()
{
    struct date d1;
    int choice;
    do{
        printf("choose option 1.initdate 2.showdate ");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:  initdate(&d1);
                printdateonconsole(&d1);
                break;
        case 2: acceptdatefromconsole(&d1);
                printdateonconsole(&d1);
            break;
        default:printf("exit");
            break;
        }
    }while (choice!=0);
}