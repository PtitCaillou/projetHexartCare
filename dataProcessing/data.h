#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED
#define SIZE 5000

typedef struct data data;
struct data{
  int num;
  long time;
  long pulse;
};

data *fileManage();
void write(char fileData, int i;);
void translate(data *toProcess, char tempPulse[SIZE], char tempTime[SIZE]);

void dataFileOrder(data *chain);
void dataPulseAscendingWay(data *chain);
void dataTimeAscendingWay(data *chain);
void dataPulseDescendingWay(data *chain);
void dataTimeDescendingWay(data *chain);
void dataSpecificTime(data *chain, int timeZero, int timeOne);
void dataAverageInTimeRange(data *chain);
void dataNumberGathered(data *chain);
void dataExtremePulse(data *chain);

#endif // DATA_H_INCLUDED
