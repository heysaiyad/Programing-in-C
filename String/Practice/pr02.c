// count the in this sentence
#include<stdio.h>

int countThe(char arr[])
{
    int count = 0;
    for(int i=0;arr[i+2]!='\0';i++)
    {
        if(arr[i]=='t' && arr[i+1]=='h' && arr[i+2]=='e')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char arr1[100];
    fgets(arr1,100,stdin);
    printf("the no of the is %d\n",countThe(arr1));
    return 0;
}