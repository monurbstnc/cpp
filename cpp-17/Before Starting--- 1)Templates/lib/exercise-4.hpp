
template <unsigned int collection_size, typename T>
int find_value(T collection[], T value)
{
    for(unsigned int i = 0; i < collection_size; i++)
    {
        if(collection[i] == value)
            return i;
    }
    return -1;
}

