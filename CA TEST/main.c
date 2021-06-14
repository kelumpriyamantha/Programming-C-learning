#include <stdio.h>
#include <stdlib.h>

void delay(int seconds)
{
    int mseconds=1000*seconds;

    while (clock() < stime + mseconds);
}

int main(){
    printf("Student Number :\n[Your Student Number]\n\nName :\n[Your Name]\n\nMAC ADDRESSES :");
    system("getmac");
    printf("\nCOMPUTER NAME:\n");
    system("hostname");
    printf("\n");

    FILE *fp;
    int n,i;
    int inputs[20];
    fp = fopen("log.txt", "w");

    for (int i=0;i<20;i++){
            printf("Enter input %d ",i+1);
            scanf("%d",&inputs[i]);
    }
    printf("\n");
    for (int i=0;i<20;i++){
            time_t wt;
            time(&wt);
            delay(1);
            int sqr = inputs[i]*inputs[i];
            printf("%d\t%d\t%d\t%s\n",i+1,inputs[i],sqr,ctime(&wt));
            fprintf(fp, "%d\t%d\t%d\t%s",i+1,inputs[i],sqr,ctime(&wt));
            }
fclose(fp);
    fp = fopen("log.txt", "r");
    char c = getc(fp);
    while (c != EOF) {
        if(c == '\n'){
            time_t rt;
            time(&rt);
            delay(1);
            printf("\t%s",ctime(&rt));
        }
        putchar(c);
        c = getc(fp);
    }
fclose(fp);
    getchar();
    return 0;
}
