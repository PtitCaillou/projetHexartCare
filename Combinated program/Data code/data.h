#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

typedef struct data data;
struct data{
  int num;
  long time;
  long pulse;
};

data *fileManage();
data translate(char actData[10]);

#endif // DATA_H_INCLUDED
