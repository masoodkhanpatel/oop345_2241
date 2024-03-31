#define PI 3.1415\
92654\
00000
#define db double
#define print std::cout
#define newline std::endl
int main(){
    db r = 2.35;
    db area = PI * r * r;
    db volume = (4.0/3.0) * PI * r * r * r;
    print << "PIr^2 is " << area << newline;
    print << "(4/3)PIr^3 is " << volume << newline;
}