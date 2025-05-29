##﻿# Train Even or Odd CC:



---
### ✅ **Purpose of the Code:**

This program processes multiple test cases. For each test case, it:

* Reads an array of integers.
* Sums elements at **even indices** and **odd indices** separately.
* Outputs the **maximum** of the two sums.

---

### 🔍 **Detailed Breakdown:**

```cpp
#include <iostream>
using namespace std;
```

* Includes the necessary library for input/output.
* Uses the `std` namespace to avoid prefixing `std::`.

---

```cpp
int main()
{
    int T;
    cin >> T;
```

* Reads the number of test cases `T`.

---

```cpp
    while (T--)
```

* Loops through each test case `T` times.

---

```cpp
        int N;
        cin >> N;
        int A[N];
```

* Reads the number of elements `N` in the array.
* Declares an array `A` of size `N`.

> 📝 Note: Using `int A[N];` is not standard C++ (Variable Length Arrays are not part of the C++ standard). It works in some compilers like GCC, but using `vector<int>` is safer and standard.

---

```cpp
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }
```

* Reads `N` integers into the array `A`.

---

```cpp
        int sum_odd_days = 0;
        int sum_even_days = 0;
```

* Initializes two variables to store the sums:

  * `sum_odd_days`: for elements at even indices (0, 2, 4...).
  * `sum_even_days`: for elements at odd indices (1, 3, 5...).

---

```cpp
        for (int i = 0; i < N; ++i)
        {
            if (i % 2 == 0)
            {
                sum_odd_days += A[i];
            }
            else
            {
                sum_even_days += A[i];
            }
        }
```

* Iterates through the array.
* Adds elements at even indices to `sum_odd_days`.
* Adds elements at odd indices to `sum_even_days`.

> ⚠️ This might seem confusing:

* Index 0 corresponds to Day 1 (odd day)
* Index 1 corresponds to Day 2 (even day), etc.
  So the naming is consistent with 1-based "day" logic.

---

```cpp
        cout << max(sum_odd_days, sum_even_days) << endl;
```

* Outputs the **larger** of the two sums.

---

```cpp
    }

    return 0;
}
```

* Ends the loop and returns from `main`.

---

### 🧠 Example:

**Input:**

```
1
5
3 2 7 10 1
```

**Processing:**

* Elements: `3 (i=0)`, `2 (i=1)`, `7 (i=2)`, `10 (i=3)`, `1 (i=4)`
* Even indices sum: `3 + 7 + 1 = 11`
* Odd indices sum: `2 + 10 = 12`
* Output: `12`

---

### ✅ Summary:

* The program calculates and compares the sum of elements at even vs odd positions for each test case.
* It outputs the maximum of the two sums.

This C++ program reads multiple test cases. For each test case, it takes an array of integers and calculates two sums: one for elements at even indices (representing "odd days") and one for elements at odd indices (representing "even days"). It then prints the larger of these two sums.

The logic works by looping through the array and using the index to separate even and odd positions. After summing the values accordingly, it uses the `max` function to determine which sum is greater and prints that value for each test case.


