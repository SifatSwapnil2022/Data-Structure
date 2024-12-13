#include<stdio.h>
#include<conio.h>
#define max 20
int adj[max][max];
int n;
main() {
    int choice;
    int node, origin, destination;
    create_graph();
    while (1) {

        printf("1.Dispaly\n");
        printf("2.Exit\n");
         printf("3.Edges\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            display();
            break;
          case 2:
            Degrees();
            break;

        case 3:
            exit(0);
        default:
            printf("Wrong choice\n");
            break;
        }
    }
    getch();
}

create_graph() {
    int i, max_edges, origin, destination;

    printf("Enter number of nodes : ");
    scanf("%d", &n);
    max_edges = n * (n - 1);

    for (i = 1; i <= max_edges; i++) {
        printf("Enter edge %d( 0 0 ) to quit : ", i);
        scanf("%d %d", &origin, &destination);
        if ((origin == 0) && (destination == 0))
            break;
        if (origin > n || destination > n || origin <= 0 || destination <= 0) {
            printf("Invalid edge!\n");
            i--;
        } else
            adj[origin][destination] = 1;
    }
}

display() {
    int i, j,indegree1[90]={0},outdegree1[90];
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++)
            printf("%4d", adj[i][j]);
        printf("\n");


}
}


Degrees(){

           int i,j, p,a,indegree1[90]={0},outdegree1[90];
printf("The degrees of each vertex ::: ");
        for(i=1;i<=n;i++)
    {
         for(j=1;j<=n;j++)
         {
              if(adj[i][j]==1)
              {
                    outdegree1[i]++;
                    indegree1[j]++;
              }
         }

    }
    printf("Indegree\n");
    for(p=1;p<=n;p++)
    {
        printf("%d : %d\n",p,indegree1[p]);
    }
    printf("Outdegree\n");
    for(a=1;a<=n;a++)
    {
        printf("%d : %d\n",a,outdegree1[a]);
    }

}



