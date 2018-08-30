template <class T>
class Collection{
    T *values;
    int maxSize;
    int currIndex;
    public:
        Collection(){
            maxSize = 10;
            currIndex = 0;
            values = new T[maxSize];
        }
        Collection(int maxSize){
            maxSize = maxSize;
            currIndex = 0;
        }
        void add(T elem){
            if(currIndex < maxSize){
                values[currIndex++] = elem;
            } else {
                throw "Container filled!";
            }
        }
        T remove(){
            if(currIndex > 0){
                return values[--currIndex];
            } else {
                throw "Container empty!";
            }
        }
        
        ~Collection(){
            delete [] values;
            values = nullptr;
        }
};
