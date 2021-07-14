1. 函数

2. 提供标准的输入输出流，C++的输入输出方案需要`iostream`文件中的定义才可以正常使用`cout`和`cin`

3. 程序可以使用std名称空间的定义

4. `cout << "Hello,world" << endl;`

5. `int cheeses;`

6. `cheeses = 32;`

7. `cin >> cheeses`

8. `cout << "we have " << cheeses << " varieties of cheese" << endl;`

9. `froop`函数的参数数据型是`double`类型，返回值的数据类型为`int`

   `rettle`函数的参数数据型是`int`类型，没有返回值

   `prune`函数的没有参数，返回值的数据类型为`int`类型

10. 函数没有返回值时可以不使用`return`关键字

11. 第一种：使用`std::cout;`

    第二种：加上`using namespace std;`

    第三种：加上`using std::cout`

12. ```c++
    #include <iostream>
    using namespace std;
    int main()
    {
    	//显示姓名和地址
    	cout << "姓名" << endl;
    	cout << "地址" << endl;
    	return 0;
    }
    ```

13. ```c++
    #include <iostream>
    using namespace std;
    int main()
    {
    	//将long距离转化为码
    	int A;
    	int B;
    	cout << "Please input one number:";
    	cin >> A;
    	cout << "your input is " << A << " long" << endl;
    	B = 220 * A;
    	cout << A << " long is " << B << " 码" << endl;
    	return 0;
    }
    ```

14. ```c++
    #include <iostream>
    using namespace std;
    
    void put1()
    {
    	cout << "Three blind mice" << endl;
    }
    
    void put2()
    {
    	cout << "See how they run" << endl;
    }
    
    int main()
    {
    	put1();put1();
    	put2();put2();
    	return 0;
    }
    ```

15. ```c++
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	int A;
    	int B;
    	cout << "Enter your age:";
    	cin >> A;
    	B = 12 * A;
    	cout << "your age include " << B << " months." << endl;
    	return 0;
    }
    ```

16. ```c++
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	int A;
    	int B;
    	cout << "Please enter a Celsius value:";
    	cin >> A;
    	B = 1.8 * A + 32.0;
    	cout << A << "degrees Celsius is " << B << " degrees Fahrenheit." << endl;
    	return 0;
    }
    ```

17. ```c++
    #include <iostream>
    using namespace std;
    
    int main()
    {
    	double A;
    	double B;
    	cout << "Enter the number of light years:";
    	cin >> A;
    	B = 63240 * A;
    	cout << A << " light years=" << B <<" astronomical units." << endl;
    	return 0;
    }
    ```

18. ```c++
    #include <iostream>
    using namespace std;
    
    void display(int h, int m)
    {
    	cout << "Time:" << h << ":" << m << endl;
    }
    
    int main()
    {
    	int H;
    	int M;
    	cout << "Enter the number of hours:";
    	cin >> H;
    	cout << "Enter the number of minutes:";
    	cin >> M;
    	display(H, M);
    	return 0;
    }
    ```

