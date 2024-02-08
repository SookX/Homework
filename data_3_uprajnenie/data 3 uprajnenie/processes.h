#ifndef PROCESSES_H
#define PROCESSES_H

#ifndef n
#define n 5
#endif

struct Process
{
  int ID;
  char name[30];  
};

extern int processescount;
extern struct Process processes[n];
extern int createnewprocess(char name[30]);
extern void stopprocess(int stop_id); 
#endif