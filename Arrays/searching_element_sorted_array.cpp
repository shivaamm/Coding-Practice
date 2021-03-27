int search(int[] array, int length, int valueToFind)
{
    int pos=0;
    int limit=min(length,1);
    while(limit < length && array[limit] < valueToFind)
    {
        pos=limit+1;
        limit = min(length, limit*2+1);
    }
    while(pos<limit)
    {
        int testpos = pos+((limit-pos)>>1);

        if (array[testpos]<valueToFind)
            pos=testpos+1;
        else
            limit=testpos;
    }
    return (pos < length && array[pos]==valueToFind ? pos : -1);
}
