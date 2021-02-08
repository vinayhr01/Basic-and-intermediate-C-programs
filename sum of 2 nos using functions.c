int sum(int a,int b)
{
    return(a+b);
}
int main()
{
    int a,b,add;
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    add=sum(a,b);
    printf("%d",add);
}