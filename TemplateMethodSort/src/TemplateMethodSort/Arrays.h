///////////////////////////////////////////////////////////
//  Arrays.h
//  Implementation of the Class Arrays
//  Created on:      19-Jan-2024 08:17:01
//  Original author: abrack
///////////////////////////////////////////////////////////

#if !defined(EA_76DDC13C_14DA_4ff0_9539_A8B13C7030D9__INCLUDED_)
#define EA_76DDC13C_14DA_4ff0_9539_A8B13C7030D9__INCLUDED_

template<class T>
class Arrays
{

public:
    Arrays(){

    }

    virtual ~Arrays(){

    }

    static void sort(T* a, int size);

private:
    static void mergeSort(T* dest, int low, int high, int off);
};



template <class T> 
void Arrays<T>::sort(T* a, int size) {

    T* aTmp;
    aTmp = a;

    //clone
    //T* src;
    //if (size > 0)
    //{
        //src = new T[size];
    //}
    //else
    //{
        //src = nullptr;
    //}

    mergeSort(aTmp, 0, size, 0);
}


template <class T> 
void Arrays<T>::mergeSort(T * dest, int low, int high, int off) {

    T* destAct = dest;
    T* destTmp = dest;
    T* destPrev = dest;
    T tmp;


    for (int i = low; i < high; i++, destTmp++)
    {
        destAct = destTmp;
        destPrev = destTmp;

        destPrev--;
        for (int j = i; j > low && destPrev->compareTo(destAct) > 0; j--, destAct--, destPrev--)
        {
            //swap
            tmp = *destPrev;
            *destPrev = *destAct;
            *destAct = tmp;
        }


#if 0
        for (int j = i; j > low && dest[j - 1].compareTo(destTmp) > 0; j--, destTmp--)
        {
            //swap
            T tmp = dest[j-1];
            dest[j-1] = dest[j];
            dest[j] = tmp;
        }
#endif
    }
}

#endif // !defined(EA_76DDC13C_14DA_4ff0_9539_A8B13C7030D9__INCLUDED_)
