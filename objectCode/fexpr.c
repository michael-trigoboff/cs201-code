// demonstrates passing floating point arguments,
// returning a floating point value,
// and doing a calculation using the FPU register stack

#pragma GCC diagnostic ignored "-Wunused-but-set-variable"

int main ()
{
    double  f;
    
    double	w = 213.0;
	double	x =  43.0;
	double	y =  20.0;
	double	z =   1.2;

    f = 3.0 * (w + x) / (y * z);
    
    return 0;
}
