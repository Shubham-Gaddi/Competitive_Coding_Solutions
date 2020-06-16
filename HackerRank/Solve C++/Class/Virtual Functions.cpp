
class Person {
    protected:
    string name;
    int age;
    public:
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person {
    int publications;
    static int cur_id;
    int id = cur_id;
    public:
    void getdata(){
        cur_id ++;
        cin >> name;
        cin >> age;
        cin >> publications;
    }
    void putdata() {
        cout << name << ' ' << age << ' ' << publications << ' ' << id << endl;
    }

};
int Professor :: cur_id = 1;

class Student : public Person {
    int marks[6];
    int sum = 0;
    static int cur_id;
    int id = cur_id;
    public:
    void getdata(){
        cur_id ++;
        cin >> name;
        cin >> age;
        for(int i = 0; i < 6; i ++) {
            cin >> marks[i];
            sum += marks[i];
        }
    }
    void putdata() {
        cout << name << ' ' << age << ' ' << sum << ' ' << id << endl;
    }
};
int Student :: cur_id = 1;
