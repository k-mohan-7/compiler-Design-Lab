#include<stdio.h>
int main()
{
     int n;
     FILE *fp,*fp2;
     char file[100],ch,dest[100],c;
     printf("enter the file location you need to acess ")
     ;
     scanf("%s",file);
     printf("Enter the text you need to replace");
     scanf("%s",dest);
     fp=fopen(file,"w");
     if(fp==NULL)
     {
          printf("The file is empty");

     }
     fprintf(fp,"%s",dest);
     fclose(fp)
     ;
}
