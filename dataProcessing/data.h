#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

typedef struct data data;
struct data{
  unsigned long num;
  unsigned long time;
  unsigned long beat;
};

void fileManage();

#endif // DATA_H_INCLUDED
