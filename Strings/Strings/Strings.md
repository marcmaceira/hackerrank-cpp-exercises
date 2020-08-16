C++ provides a nice alternative data type to manipulate strings, and the data type is conveniently called string. Some of its widely used features are the following:

- Declaration:
``` c++
string a = "abc";
```

- Size:
``` c++
int len = a.size();
```

- Concatenate two strings:
``` c++
string a = "abc";
string b = "def";
string c = a + b; // c = "abcdef".
```

- Accessing $i^{nth}$ element:
``` c++
string s = "abc";
char   c0 = s[0];   // c0 = 'a'
char   c1 = s[1];   // c1 = 'b'
char   c2 = s[2];   // c2 = 'c'

s[0] = 'z';         // s = "zbc"
```

P.S.: We will use cin/cout to read/write a string.

**Input Format**

You are given two strings, **a** and **b**, separated by a new line. Each string will consist of lower case Latin characters ('a'-'z').

**Output Format**

In the first line print two space-separated integers, representing the length of **a** and **b** respectively.
In the second line print the string produced by concatenating **a** and **b** (**a+b**).
In the third line print two strings separated by a space,  **a'** and **b'**. **a'** and **b'** are the same as **a** and **b**, respectively, except that their first characters are swapped.

**Sample Input**
```
abcd
ef
```

**Sample Output**
```
4 2
abcdef
ebcd af
```

**Explanation**

- **a** = "abcd"
- **b** = "ef"
- **|a|** = 4
- **|b|** = 2
- **a+b** = "abcdef"
- **a'** = "ebcd"
- **b'** = "af"

**My Answer:**
``` c++
#include <iostream>
#include <string>

int main() {
	std::string a, b, swap_a, swap_b;
    std::cin >> a >> b;

    swap_a = a;
    swap_b = b;

    for(int i = 0; i > -1; --i) {
        swap_a[i] = b[i];
        swap_b[i] = a[i];
    }
    // swap_a[0] = b[0];
    // swap_a[-1] = b[-1];
    // swap_b[0] = a[0];
    // swap_b[-1] = a[-1];

    std::cout << a.length() << " " << b.length() << std::endl;
    std::cout << a + b << std::endl;
    std::cout << swap_a << " " << swap_b << std::endl;
    
    return 0;
}
```