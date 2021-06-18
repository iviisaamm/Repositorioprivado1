using namespace std;

int main() {
    int a,b,c,d,x1,x2=0;

    cout << "Ingrese a, b, c:" << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    if (a==0) 
        return 1;

    d=b^2-2*a*c;

    if (d=0) {
        x1=x2=-b/(2*a);
    } else {
        if (d>0) {
            x1=-b+sqrt(d)/(2*a);
            x1=-b-sqrt(d)/(2*a);
        } else {
            x1=-b+sqrt(d)/(2*a); //mas imaginario
            x1=-b-sqrt(d)/(2*a); //mas imaginario
        }
    }

    cout << "x1=:"+x1 << endl;
    cout << "x2=:"+x2 << endl;

    return 0;
}