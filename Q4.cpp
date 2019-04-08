#include <stdio.h>
#include <stdlib.h>

int main() 
{     int arrival_time[10], burst_time[10], temp[10],x=0;
double a[100],b[100];
      int i, smallest, count = 0, time, limit;
      double wait_time = 0, turnaround_time = 0, end;
      float average_waiting_time, average_turnaround_time;
      printf("\n\n\t\t\t\t\t\t\t\t**QUESTION STATEMENT**\t\n\n");
      printf("\t\t\tQ.4: Consider a scheduling approach which is non pre-emptive similar to shortest job next in\n\t\t\t\tnature. The priority of each job is dependent on its estimated run time, and also the amount of\n\t\t\t\ttime it has spent waiting. Jobs gain higher priority the longer they wait, which prevents\n\t\t\t\tindefinite postponement. The jobs that have spent a long time waiting compete against those\n\t\t\t\testimated to have short run times. The priority can be computed as :\n\n\t\t\t\tPriority = 1+ Waiting time / Estimated run time\n\n");
      system("pause");
      system("cls");
      printf("\nEnter the Total Number of Processes:\t");
      scanf("%d", &limit); 
      printf("\nEnter Details of %d Processes\n", limit);
      for(i = 0; i < limit; i++)
      {     printf("\n\t\t\tENTER FOR P%d",i);
            printf("\n\n\t\t\t\tEnter Arrival Time:\t");
            scanf("%d", &arrival_time[i]);
            printf("\n\t\t\t\tEnter Burst Time:\t");
            scanf("%d", &burst_time[i]); 
            temp[i] = burst_time[i];
      }
      
      
    	printf("\n\n\n                YOUR ENTERED DATA IS=\n");
         printf("\t *******************************************************");
            printf("\n\t *  PROCESS   :   BURST TIME   :   ARRIVAL TIME         *");
        for(i=0;i<limit;i++)
        {
            printf("\n\t *  P%d        :    %d             :         %d           *",i,burst_time[i],arrival_time[i]);

        }
printf("\n\t *******************************************************");    	
	
      
      
      
      
      burst_time[9] = 9999;  
      for(time = 0; count != limit; time++)
      {
            smallest = 9;
            for(i = 0; i < limit; i++)
            {
                  if(arrival_time[i] <= time && burst_time[i] < burst_time[smallest] && burst_time[i] > 0)
                  {
                        smallest = i;
                  }
            }
            burst_time[smallest]--;
            if(burst_time[smallest] == 0)
            {     
                  count++;
                  end = time + 1;
                  wait_time = wait_time + end - arrival_time[smallest] - temp[smallest];
                  a[x]=end - arrival_time[smallest] - temp[smallest];;
                  turnaround_time = turnaround_time + end - arrival_time[smallest];
                  b[x]=end - arrival_time[smallest];
                  x++;
            }
            
      }
      
      
      
      
      
      	printf("\n\n\n                FINAL DATA IS=\n");
      	
      	
      	
         printf("\t ************************************************************");
            printf("\n\t *  PROCESS   :   TURNAROUND TIME   :   WAITING TIME       *");
        for(i=0;i<limit;i++)
        {
            printf("\n\t *  P%d        :    %f             :         %f *",i,b[i],a[i]);

        }
printf("\n\t ***********************************************************");
	
      
       average_waiting_time = wait_time / limit; 
      average_turnaround_time = turnaround_time / limit;
      printf("\n\nAverage Waiting Time:\t%lf\n", average_waiting_time);
      printf("Average Turnaround Time:\t%lf\n", average_turnaround_time);
      return 0;
}
