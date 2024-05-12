// IntCollection.h
#ifndef INTCOLLECTION_H
#define INTCOLLECTION_H
#include <vector>
using namespace std;

class IntCollection
{
  private:
    vector<int> data;
  public:
    void add(int value);
    int get(int index);
    int getSize();
    IntCollection& operator=(const IntCollection &c);    
    bool operator==(const IntCollection &c);        
    IntCollection& operator<<(int value);            
};

#endif