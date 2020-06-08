#include <stdio.h>
#include <stdlib.h>
//CP ASSIGNMENT QUES 2
//Give input as space separated characters or each character in a different line.
void ques2()
{
    system("cls");
    int n;
    printf("Enter String Length-\n");
    scanf("%d", &n);
    char ch[n];

    printf("Enter string elements as space separated characters, or each in a new line.\n");
    for(int i=0; i<n; i++)
    {
        scanf(" %c", &ch[i]);
    }
    for(int i=n-1; i>0; i--)
    {
        int j=i;
        char temp;
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        {

            do{
                j--;
                temp=ch[j];
                if(ch[j]!='z')
                ch[j]=(char)(ch[j]+1);
            }while(temp!='a' && temp!='e' && temp!='i' && temp!='o' && temp!='u' && j!=0);

            do{
                j++;
                temp=ch[j];
                if(ch[j]!='z')
                ch[j]=(char)(ch[j]+1);
            }while(temp!='a' && temp!='e' && temp!='i' && temp!='o' && temp!='u' && j!=n-1);

        i=n-1;
        }
    }
    if(ch[0]=='a' || ch[0]=='e' || ch[0]=='i' || ch[0]=='o' || ch[0]=='u' && ch[0]!='z')
    ch[0]=(char)(ch[0]+1);

    for(int i=0; i<n; i++)
    {
        printf("%c ", ch[i]);
    }
}
