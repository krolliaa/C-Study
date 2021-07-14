1. 多种整型是为了满足不同的计算要需求。

2. `short value = 80;`

   `unsigned int value = 42110;`

   `long long value =3000000000; `

   `unsigned long value = 3000000000;`

3. C++本身不能限制某个数据类型是否超出了该类型的范围。但是我们可以使用`limits`头文件来查看某种类型具体的范围，比如查看`short`数据类型的最大范围：`cout << "short 最大值：" << (numeric_limits<short>::max)();`

4. `33L`代表的是`long value = 33;`，而`33`代表的是`int value = 33;`

5. 并不一定等价。如果使用ASCII编码系统则是一样的，但如果不是该编码系统则可能不一样

6. `char c = 88; cout << c << endl;`
   `cout << (char)88 << endl;`
   `cout.put(88) << endl;`

7. 得视系统而定，取决于两种类型的长度。double提供了至少十三位的数组，所以将long值赋给double变量就没有舍入误差，但是long long类型提供了十九位数字，超过了double类型的有效位数，这种情况下就有舍入误差

8. `(a) 74 (b) 4 (c) 0 (d) 4.5 (e) 3`

9. `(int)x1+(int)x2; (int)(x1+x2); int(x1+x2);`

10. `int float char char32_t double `

11. ```c++
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	cout << "Enter your height:________\b\b\b\b\b\b\b\b ";
    	int height;
    	cin >> height;
    	const int Ft_per_in = 12;
    	int ft, in;
    	ft = height / Ft_per_in;
    	in = height % Ft_per_in;
    	cout << "That means you are " << ft << " feet and " << in << " inches height." << endl;
    	system("pause");
    	return 0;
    }
    ```

12. ```c++
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	cout << "Enter your feet:________\b\b\b\b\b\b\b\b";
    	int feet;
    	cin >> feet;
    	cout << "Enter your inches:________\b\b\b\b\b\b\b\b";
    	int inch;
    	cin >> inch;
    	cout << "Enter your weight: ________\b\b\b\b\b\b\b\b";
    	int weight_p;
    	cin >> weight_p;
    	cout << "So you are " << feet << " feet and " << inch << " inches height and " << weight_p << " pounds weight." << endl;
    	int height_inch;
    	const int Ft_per_in = 12;
    	height_inch = feet * Ft_per_in + inch;
    	const double M_per_in = 0.0254;
    	double height_meter;
    	height_meter = height_inch * M_per_in;
    	const double Kg_per_p = 2.2;
    	double weight_kg;
    	weight_kg = weight_p / Kg_per_p;
    	cout << "That means you are " << height_meter << " meters height and " << weight_kg << " kilograms weight." << endl;
    	double BMI;
    	BMI = weight_kg / (height_meter * height_meter);
    	cout << "And your BMI is " << BMI << endl;
    	system("pause");
    	return 0;
    }
    ```

13. ```c++
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    	cout << "First, enter the degrees:__\b\b";
    	int degree;
    	cin >> degree;
    	cout << "Next, enter the minutes:__\b\b";
    	int minute;
    	cin >> minute;
    	cout << "Finally, enter the seconds:__\b\b";
    	int second;
    	cin >> second;
    	const int Convert = 60;
    	double latitude;
    	latitude = degree + double(minute) / Convert + double(second) / Convert / Convert;
    	cout << degree << " degrees, " << minute << " minute, " << second << " seconds = " << latitude << " degrees" << endl;
    	system("pause");
    	return 0;
    }
    ```

14. ```c++
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	cout << "Enter the world's population:__________\b\b\b\b\b\b\b\b\b\b";
    	long long wp;
    	cin >> wp;
    	cout << "Enter the population of the US:__________\b\b\b\b\b\b\b\b\b\b";
    	long long usp;
    	cin >> usp;
    	float rate;
    	rate = float(usp) / float(wp) * 100;
    	cout << "The population of the US is " << rate << "% of the world population." << endl;
    	system("pause");
    	return 0;
    }
    ```
    
15. ```c++
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	cout << "Enter your kilometers:";
    	float kilometer;
    	cin >> kilometer;
    	cout << "Enter your litros:";
    	float litro;
    	cin >> litro;
    	float eux;
    	eux = litro / (kilometer / 100);
    	cout << "Every 100 kilometers cost " << eux << " litros gas in Europe." << endl;
    	const float Mile_per_100kilometers = 62.14;
    	float mile;
    	mile = (kilometer / 100) * Mile_per_100kilometers;
    	const float Calon_per_litro = 3.875;
    	float calon;
    	calon = litro / Calon_per_litro;
    	float usx;
    	usx = mile / calon;
    	cout << "That means you drive " << usx << " miles  using 1 calon gas in the US." << endl;
    	cout << eux << "/100km = " << usx << "mpg" << endl;
    	system("pause");
    	return 0;
    }
    ```

