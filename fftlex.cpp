#include <math.h>

void main()
{
	float real, pattsin,pattcos, ressin[90], rescos[90];
	for (int i = 1; i < 90; i++) { ressin[i] = 0; rescos[i] = 0; }
	for (float x = 0; x < 3.14; x = x + 0.01)
		for (int xj = 0; xj < 314; xj++)
		{
			x = (float)xj / 100;
			real = (1.2*cos(5.01*x) + 2.3*sin(17 * x)) / (1.2 + 2.3);
			for (int i = 1; i < 90; i++)
			{
				pattsin = sin((float)i*x);
				pattcos = cos((float)i*x);
				ressin[i] = ressin[i] + (real > pattsin ? real - pattsin : pattsin - real);
				rescos[i] = rescos[i] + (real > pattcos ? real - pattcos : pattcos - real);
			}
		}
	;
}
