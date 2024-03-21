#include<stdio.h>
int main()
{
     int n,i,j,k,ind;
     char be,al;
     char r[100][100];
     printf("Enter no.of productions");
     scanf("%d",&n);
     ind=3;
     for(i=0;i<n;i++)
     {
          printf("Enter the production as A->Ab|bv format");
          scanf("%s",r[i]);
     }
     for(i=0;i<n;i++)
     {
          if(r[i][0]==r[i][ind])
          {
               printf("%c->%c follows Left Recursionn\n",r[i][0],r[i][ind]);
               al=r[i][ind+1];
               while(r[i][ind]!='|')
               {
                    ind++;
               }
               be=r[i][ind+1];
               printf("%c->%c%c'\n",r[i][0],be,r[i][0]);
               printf("%c'->%c%c'|E\n",r[i][0],al,r[i][0]);
          }
          else{
               printf("There is no Left Recursion for:%c->%c",r[i][0],r[i][ind]);
          }
     }
}
