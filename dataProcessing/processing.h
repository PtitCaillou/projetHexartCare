#ifndef PROCESSING_H_INCLUDED
#define PROCESSING_H_INCLUDED


void dataFileOrder(data *chain);
void dataPulseAscendingWay(data *chain);
void dataTimeAscendingWay(data *chain);
void dataPulseDescendingWay(data *chain);
void dataTimeDescendingWay(data *chain);
void dataSpecificTime(data *chain, int timeZero, int timeOne);
void dataAverageInTimeRange(data *chain, int timeZero, int timeOne);
void dataNumberGathered(data *chain);
void dataExtremePulse(data *chain);

#endif // PROCESSING_H_INCLUDED
