

/*Write the class AddElements here*/
template <class T>
class AddElements {
    T element;
    public:
    AddElements(T val) : element(val){}
    T add(T val) {
        return element + val;
    }
    T concatenate(T val) {
        return element + val;
    }
};

