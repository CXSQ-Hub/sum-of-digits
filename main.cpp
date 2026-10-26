#include <iostream>
using namespace std;
int a1(int n) {     //返回这是几位数
	int i = 0;
	for (i;n != 0;i++)
	{
		n = n / 10;

	}
	return i;
}
int a2(int n) {         //10的n次方
	int i = 1,result=1;
		for (i;i < n;i++)
		{
			result *= 10;

		}
		return result;



}





int a3(int n) { 
	//n是输入的数
	int x = 0, i = 1,sum=0;   //x是余数
	int a = a1(n); //a是“这是几位数”
		while (true)
		{
			x = (n - n % a2(a)) / a2(a); cout << x << "+";
			sum += x;						//比方说1234 x=(1234-234)/1000
			n = n % a2(a);
			if (n / 10 == 0) { cout << n; break; }
			--a;

		}
		sum += n;
		cout << "=" << sum << endl;
		return sum;


}

int main() {
	int n = 0;
	cin >> n;
	if (n < 0) { n = -n; }
	a3(n);
	return 0;
}
