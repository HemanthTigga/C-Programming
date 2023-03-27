#include<stdio.h>
#include<string.h>
struct lib{
    char name[100];
    int id;
};
int main()
{
    int size;
    printf("Enter size");
    scanf("%d", &size);

    int i;
    struct lib books[size];
    for(i=0;i<size;i++)
    {
        char str[100];
        scanf("%d",&books[i].id);
        //scanf("%s",str);
        scanf("%s",books[i].name);
        //strcpy(books[i].name,str);
    }
    printf("Bookname          Book_id\n");
    for(int i =0;i<size;i++)
    {
        printf("%s                  %d\n",books[i].name,books[i].id);
    }
    return 0;
}
