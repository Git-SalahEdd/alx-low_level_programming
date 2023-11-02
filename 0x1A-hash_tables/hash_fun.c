unsigned long int hash_djb2(const unsinged char *str)
{
        unsigned long hash = 5381;
        int c;

        while (c = *str++)
            hash = ((hash << 5) + hash) + c;

        return hash;
}
