#ifndef PROCESSING_H_INCLUDED
#define PROCESSING_H_INCLUDED

void division(data *chain, data *chainOne, long sizeOne, data *chainTwo, long sizeTwo);
void fusionSort(data *chain, long Size);
void fusion(data *chain, data *chainOne, long sizeOne, data *chainTwo, long sizeTwo);
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
