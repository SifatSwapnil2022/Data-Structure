#include <bits/stdc++.h>
using namespace std;
#define MAX 7
int q1[MAX],q2[MAX],f1=-1,r1=-1,f2=-1,r2=-1;
void enq(int q[],int *f,int *r,int val)
{
                if(*r == MAX-1)
                                printf("queue is full and hence cannot insert");
                else if(*f == -1 && *r == -1)
                                *f=*r=0;
                else
                                *r=*r+1;
                q[*r]=val;
}
void display(int q[],int *f, int *r)
{
                int i;
                if(*f == -1)
                                printf("queue is empty ");
                else
                {
                                for(i=*f;i<=*r;i++)
                                                printf("%d\t",q[i]);
                }
}
int main()
{
                int i,val;
                for(i=0;i<MAX;i++)
                {
                                printf("\nenter a value\n");
                                scanf("%d",&val);
                                enq(q1,&f1,&r1,val);
                }
                printf("\nelements in queue 1 are\n");
                display(q1,&f1,&r1);

                for(i=f1;i<=r1;i++)
                                enq(q2,&f2,&r2,q1[i]);
                printf("\nelements in queue 2 are\n");
                display(q2,&f2,&r2);

}
