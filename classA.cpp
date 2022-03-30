class A
{
	int* x;  size_t size;
    public:
	 A(size_t n): size(n) { x = new int[n]; }
	 A() { size=10; x = new int[10]; }
	 ~A() { delete x; }	
};

void foo (A a);

int main()
{
	A a;
	foo (a);
	return 0;
}  
