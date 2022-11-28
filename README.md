# DHBW-Sorting
C implementation and benchmarking of the sorting algorithms from class.
It contains code for benchmarking serveral sorting algorithms. The algorithms are not designed to be the best version of them but to be simple and easy to understand. They do not share common charasteristics such as working in-place or being stable. Focus for this project was on simplicity and getting a basic comparison done.
All of them sort the same array of integers which is filled with values between `[0..len]` with `len`being the size of the array. Depending on the case the order is swapped, randomized or already sorted.
The output will look something like this:
```
+--------------+---------+---------+---------+
| Algorithm    | Best(ms)| Avg(ms) |Worst(ms)|
+--------------+---------+---------+---------+
| bubble       | 94      | 236     | 221     |
| gnome        | 0       | 172     | 355     |
| selection    | 99      | 97      | 94      |
| quick        | 221     | 2       | 165     |
| merge        | 3       | 5       | 3       |
| shell        | 0       | 2       | 0       |
| insertion    | 0       | 103     | 214     |
| radix        | 0       | 1       | 0       |
+--------------+---------+---------+---------+
```
Your will see a nice ascii table in which you can comapre each algorithms timings in the best (already sorted), average (randomized) and worst case (inverted).
Main confiuration can be found in `main.c`. You can alter `LEN` to specifiy the amount of elements in the array to be sorted and change the order of the algorithms to be benchmarked.
# Dependencies for quick build
Requires `cmake`and a C-compiler.
# Try yourself
Run the following commands:<br>
`git clone https://github.com/Servostar/DHBW-Sorting.git`<br>
`cd DHBW-Sorting`<br>
`cmake .`<br>
`cmake --build .`<br>
`./Main` or for Windows `Main.exe`
