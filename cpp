
class BadLengthException 
{
    int size;
    public:
    BadLengthException(int n){  
    size=n;
    }
    int what()
    {
        return size;
    }
};
