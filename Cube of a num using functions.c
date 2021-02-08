double cube(int num)
{
    return(num*num*num);
}
int main()
{
    int num,pow3;
    printf("Enter num\n");
    scanf("%d",&num);
    pow3=cube(num);
    printf("%d",pow3);
}