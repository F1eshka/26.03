#include <iostream>
#include <conio.h>
using namespace std;

class Animal {
public:
    virtual void Action1() {
        cout << "Pour water\n";
    }

    virtual void Action2() {
        cout << "Give food\n";
    }
};

class Kangaroo : public Animal {
public:
    void Action1()  {
        cout << "Pour water\n";
    }

    void Action2()  {
        cout << "Give food\n";
    }
};

class Monkey : public Animal {
public:
    void Action1()  {
        cout << "Pour water\n";
    }

    void Action2()  {
        cout << "Give food\n";
    }
};

class Bird : public Animal {
public:
    void Action1()  {
        cout << "Pour water\n";
    }

    void Action2()  {
        cout << "Give food\n";
    }
};

class Tiger : public Animal {
public:
    void Action1()  {
        cout << "Pour water\n";
    }

    void Action2()  {
        cout << "Give food\n";
    }
};

class Lion : public Animal {
public:
    void Action1()  {
        cout << "Pour water\n";
    }

    void Action2()  {
        cout << "Give food\n";
    }
};

class  Penguin : public Animal {
public:
    void Action1()  {
        cout << "Pour water\n";
    }

    void Action2()  {
        cout << "Give food\n";
    }
};

class  WhiteBear : public Animal {
public:
    void Action1()  {
        cout << "Pour water\n";
    }

    void Action2()  {
        cout << "Give food\n";
    }
};
class  Otter : public Animal {
public:
    void Action1() {
        cout << "Pour water\n";
    }

    void Action2() {
        cout << "Give food\n";
    }
};

Animal* WhatAnimal() {
    int a = rand() % 8;

    if (a == 0) {
        return new Bird();
    }
    else if (a == 1) {
        return new Kangaroo();
    }
    else if (a == 2) {
        return new Lion();
    }
    else if (a == 3) {
        return new Monkey();
    }
    else if (a == 4) {
        return new Otter();
    }
    else if (a == 5) {
        return new Penguin();
    }
    else if (a == 6) {
        return new Tiger();
    }
    else {
        return new WhiteBear();
    }
}


int main() {
	srand(time(0));

	int count = 8;

	Bird b;
	Kangaroo k;
	Lion l;
	Monkey m;
	Otter o;
	Penguin p;
	Tiger t;
	WhiteBear w;

	while (true) {
		int code = _getch();
		if (code == 49) {
			cout << "Bird\n";
			code = _getch();
			if (code == 32) {
				b.Action1();
			}
			else if (code == 13) {
				b.Action2();
			}
		}
		else if (code == 50) {
			cout << "Kangaroo\n";
			code = _getch();
			if (code == 32) {
				k.Action1();
			}
			else if (code == 13) {
				k.Action2();
			}
		}
		else if (code == 51) {
			cout << "Lion\n";
			code = _getch();
			if (code == 32) {
				l.Action1();
			}
			else if (code == 13) {
				l.Action2();
			}
		}
		else if (code == 52) {
			cout << "Monkey\n";
			code = _getch();
			if (code == 32) {
				m.Action1();
			}
			else if (code == 13) {
				m.Action2();
			}
		}
		else if (code == 53) {
			cout << "Otter\n";
			code = _getch();
			if (code == 32) {
				o.Action1();
			}
			else if (code == 13) {
				o.Action2();
			}
		}
		else if (code == 54) {
			cout << "Penguin\n";
			code = _getch();
			if (code == 32) {
				p.Action1();
			}
			else if (code == 13) {
				p.Action2();
			}
		}
		else if (code == 55) {
			cout << "Tiger\n";
			code = _getch();
			if (code == 32) {
				t.Action1();
			}
			else if (code == 13) {
				t.Action2();
			}
		}
		else if (code == 56) {
			cout << "WhiteBear\n";
			code = _getch();
			if (code == 32) {
				w.Action1();
			}
			else if (code == 13) {
				w.Action2();
			}
		}
	}
}