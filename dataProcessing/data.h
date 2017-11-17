#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

typedef struct data data;
struct data{
  int num;
  char time[20];
  char pulse[20];
};

data *fileManage();

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
