
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box {
    int l, b, h; 

    public:
    Box();
    Box(int,int,int);
    Box(Box&);
    int getLength(); 
    int getBreadth (); 
    int getHeight ();  
    long long CalculateVolume(); 

    bool operator<(Box& b);
    friend ostream& operator<<(ostream& out, Box& B);
};

Box :: Box () {
    l = b = h = 0;
}

Box :: Box (int length, int breadth, int height) {
    l = length;
    b = breadth;
    h = height;
}

Box :: Box (Box &B) {
    l = B.l;
    b = B.b;
    h = B.h;
}

int Box :: getLength() {
    return l;
}

int Box :: getBreadth () {
    return b;
}

int Box :: getHeight () {
    return h;
}

long long Box :: CalculateVolume() {
    return (long long)l * b * h;
}

bool Box :: operator<(Box& B) {
    if (l < B.l) return true;
    else if(b < B.b && l == B.l) return true;
    else if(h < B.h && b == B.b && l == B.l) return true;
    else return false;
}

ostream& operator<<(ostream& out, Box& B) {
    out << B.l << ' ' << B.b << ' ' << B.h;
    return out;
}

