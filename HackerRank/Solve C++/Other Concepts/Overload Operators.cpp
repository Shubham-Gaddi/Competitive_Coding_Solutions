

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator + (Complex x, Complex y) {
    x.a += y.a;
    x.b += y.b;
    return x;
}

ostream& operator << (ostream& out, Complex x) {
    out << x.a << "+i" << x.b;
    return out;
}
