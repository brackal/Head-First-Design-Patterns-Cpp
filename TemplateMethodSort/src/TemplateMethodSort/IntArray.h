///////////////////////////////////////////////////////////
//  IntArray.h
//  Implementation of the Class IntArray
//  Created on:      29-Nov-2023 22:02:37
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_8E05A6A7_86E6_4785_893B_31EFCE6A83BF__INCLUDED_)
#define EA_8E05A6A7_86E6_4785_893B_31EFCE6A83BF__INCLUDED_

#include "Comparable.h"

class IntArray : public Comparable
{

public:
    IntArray();
    IntArray(int value);
    virtual ~IntArray();
    virtual int compareTo(Comparable* comp);
    int getValue();

private:
    int mData;

};
#endif // !defined(EA_8E05A6A7_86E6_4785_893B_31EFCE6A83BF__INCLUDED_)
