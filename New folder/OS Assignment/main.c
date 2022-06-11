//2022/06/11
//HMKP Herath
//20763
//Computer Science
//Operating System(CS201.3)

#include<stdio.h>
#include<stdbool.h>

struct process_struct //using a struct instead of several arrays
{
  int process_ID;
  int Arrival_T;
  int Busrt_T;
  int Completion_T,Waiting_T,Turnaround_T,Remaining_T,start_time;
}ps[10];

int main()//main
{
    int n;
    float Busrt_T_remaining[10];//remaining time
    bool is_completed[10]={false},is_first_process=true;//all processes are completed
    int current_time = 0;//initial time
    int completed = 0;
    float sum_tat=0,sum_Waiting_T=0,total_idle_time=0,prev=0;//calculations
    printf("Enter total number of processes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)//get burst time & arrival time
    {
        printf("\nEnter Process %d Arrival Time: ",i);
        scanf("%d",&ps[i].Arrival_T);
        ps[i].process_ID = i ;
        printf("\nEnter Process %d Burst Time: ",i);
        scanf("%d",&ps[i].Busrt_T);
        Busrt_T_remaining[i]= ps[i].Busrt_T;
    }
    while(completed!=n)
    {
        int min_index = -1;
        int minimum = 9999;
        for(int i = 0; i < n; i++) {
            if(ps[i].Arrival_T <= current_time && is_completed[i] == false) {
                if(Busrt_T_remaining[i] < minimum) {
                    minimum = Busrt_T_remaining[i];//updating remaining Burst time array
                    min_index = i;
                }
                if(Busrt_T_remaining[i]== minimum) {
                    if(ps[i].Arrival_T < ps[min_index].Arrival_T) {
                        minimum= Busrt_T_remaining[i];
                        min_index = i;
                    }
                }
            }
        }

        if(min_index==-1)
        {
            current_time++;
        }
        else
        {//calculations if a process arrived
            if(Busrt_T_remaining[min_index] == ps[min_index].Busrt_T)
            {
                ps[min_index].start_time = current_time;
                total_idle_time += (is_first_process==true) ? 0 : (ps[min_index].start_time -  prev);
                is_first_process=false;
            }
            Busrt_T_remaining[min_index] -= 1;
            current_time++;
            prev=current_time;
            if(Busrt_T_remaining[min_index] == 0)
            {
                ps[min_index].Completion_T = current_time;
                ps[min_index].Turnaround_T = ps[min_index].Completion_T - ps[min_index].Arrival_T;
                ps[min_index].Waiting_T= ps[min_index].Turnaround_T - ps[min_index].Busrt_T;
                ps[min_index].Remaining_T = ps[min_index].start_time - ps[min_index].Arrival_T;

                //total turnaround time, waiting time.
                sum_tat +=ps[min_index].Turnaround_T;
                sum_Waiting_T += ps[min_index].Waiting_T;
                completed++;
                is_completed[min_index]=true;
            }
        }
    }
    //outputs
    printf("\nProcess No.\tArrival Time\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n");
    for(int i=0;i<n;i++)
      printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",ps[i].process_ID,ps[i].Arrival_T,ps[i].Busrt_T,ps[i].Completion_T,ps[i].Turnaround_T,ps[i].Waiting_T);

    //average times calculate
    printf("\nAverage Turn Around time= %.2f ",(float)sum_tat/n);
    printf("\nAverage Waiting Time= %.2f ",(float)sum_Waiting_T/n);
    return 0;
}
