/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* 
 * Mantainer: Luca Valente, luca.valente2@unibo.it
 */
const char m_a[] = {
-2,
3,
2,
2,
-1,
-2,
3,
0,
0,
-3,
-3,
-4,
-3,
2,
1,
3,
-3,
-2,
3,
-1,
0,
-2,
-1,
1,
-3,
-3,
-1,
1,
-3,
1,
-1,
3,
0,
0,
1,
0,
3,
-1,
-3,
0,
0,
3,
3,
0,
3,
-1,
-2,
3,
-1,
-2,
-2,
2,
-2,
-3,
-1,
-2,
2,
2,
0,
2,
-1,
-2,
1,
-3,
2,
-4,
3,
0,
2,
-3,
2,
1,
-1,
-4,
3,
-2,
-4,
2,
0,
1,
-2,
-2,
-3,
2,
-4,
-3,
2,
2,
1,
-2,
3,
2,
3,
-4,
0,
1,
-3,
3,
1,
1,
0,
0,
2,
-1,
0,
3,
-3,
2,
3,
0,
1,
-4,
1,
1,
-1,
-4,
-3,
2,
2,
2,
-2,
-2,
2,
3,
0,
-2,
-1,
-4,
0,
2,
-4,
3,
-2,
-3,
-4,
-3,
3,
3,
-4,
-2,
3,
0,
3,
0,
2,
0,
-2,
3,
-4,
0,
3,
-1,
1,
3,
-3,
3,
1,
-4,
-2,
-2,
2,
1,
3,
-4,
0,
-1,
0,
0,
-2,
-4,
-1,
0,
3,
3,
1,
-3,
0,
-4,
-3,
-3,
2,
0,
-4,
0,
-3,
1,
-4,
-2,
0,
2,
-1,
1,
1,
0,
-3,
1,
-1,
1,
-1,
3,
2,
2,
2,
-2,
-1,
2,
1,
0,
-3,
-1,
-2,
2,
-1,
-3,
-2,
-4,
0,
3,
2,
-1,
1,
-1,
-3,
-2,
3,
0,
3,
0,
-1,
-4,
-1,
0,
2,
0,
3,
-3,
-2,
3,
1,
-3,
-4,
3,
1,
-4,
3,
3,
3,
-2,
-2,
0,
1,
2,
-2,
-4,
-2,
1,
1,
-4,
-1,
3,
-3,
2,
3,
0,
1,
-3,
1,
0,
2,
-4,
-4,
-4,
-3,
2,
-4,
2,
1,
1,
0,
-1,
0,
-3,
3,
-4,
-2,
-2,
-1,
1,
-1,
-1,
1,
0,
0,
1,
-3,
-1,
3,
2,
1,
2,
1,
-1,
3,
3,
-2,
2,
0,
0,
-1,
-4,
-4,
-3,
1,
-4,
-2,
-1,
1,
1,
-2,
-4,
-3,
-4,
0,
-4,
0,
-4,
-4,
3,
-4,
3,
0,
2,
-3,
0,
-2,
3,
1,
-1,
2,
3,
0,
-1,
-3,
-1,
1,
3,
3,
-3,
0,
0,
-4,
-2,
2,
-2,
-2,
-3,
-2,
-4,
2,
-2,
2,
2,
-2,
0,
-2,
2,
3,
0,
2,
0,
-3,
-1,
2,
-3,
-4,
1,
-4,
-3,
-2,
2,
2,
1,
-1,
-4,
2,
1,
2,
0,
0,
-3,
2,
-1,
0,
0,
-4,
1,
-3,
-3,
0,
-1,
1,
3,
2,
-2,
-4,
-2,
2,
-4,
0,
-2,
-4,
-1,
3,
1,
0,
1,
3,
3,
1,
2,
-4,
2,
-2,
-3,
2,
-3,
2,
-1,
-3,
-1,
-1,
-2,
1,
2,
-2,
-4,
1,
-3,
3,
-3,
-3,
0,
1,
3,
1,
-3,
0,
-2,
0,
-4,
0,
1,
2,
-4,
0,
0,
-4,
-1,
0,
-2,
-2,
-4,
-2,
-1,
3,
-1,
3,
2,
-3,
-4,
-2,
3,
-1,
1,
-3,
2,
-2,
3,
0,
3,
-3,
-4,
-1,
0,
1,
-2,
2,
3,
1,
3,
-2,
-3,
-1,
-1,
1,
-1,
-1,
1,
0,
-4,
-1,
-1,
-3,
0,
3,
-3,
-4,
-1,
1,
-4,
3,
1,
1,
0,
-3,
1,
-3,
2,
-2,
-2,
0,
-4,
3,
-2,
3,
-2,
1,
1,
-3,
0,
0,
-3,
1,
1,
0,
-1,
1,
0,
-1,
-3,
-3,
-2,
-4,
2,
-2,
3,
0,
-3,
3,
3,
-3,
-2,
3,
-2,
-2,
0,
1,
-3,
-2,
3,
2,
1,
-2,
-2,
0,
-1,
2,
3,
1,
-1,
0,
-2,
2,
-3,
-2,
2,
3,
-2,
1,
1,
-4,
-2,
2,
-1,
3,
-3,
-3,
2,
1,
1,
0,
-3,
0,
-2,
2,
0,
1,
-1,
-4,
1,
0,
0,
1,
2,
-3,
3,
-3,
2,
-4,
0,
1,
-2,
2,
-3,
3,
0,
0,
0,
-3,
-1,
2,
-3,
-1,
1,
3,
0,
-1,
-4,
3,
0,
-3,
2,
3,
-4,
2,
0,
-1,
2,
-4,
-1,
1,
-2,
-4,
-4,
3,
1,
2,
-2,
-3,
-3,
-2,
3,
3,
2,
-2,
-1,
3,
-3,
-4,
2,
3,
3,
-2,
2,
-1,
-3,
0,
3,
-2,
-3,
0,
-3,
-1,
-3,
-4,
3,
-2,
-2,
-1,
3,
2,
-1,
-1,
-1,
2,
-1,
1,
2,
-1,
-3,
3,
-2,
-3,
-1,
0,
-3,
-2,
1,
3,
-2,
2,
1,
-3,
-1,
0,
-1,
-3,
1,
3,
-4,
-3,
1,
1,
2,
-4,
2,
-2,
0,
3,
0,
-2,
-1,
-1,
1,
-2,
-2,
2,
-3,
0,
-4,
-1,
3,
-4,
3,
-1,
-2,
0,
1,
3,
-4,
0,
-4,
-4,
-2,
1,
-2,
3,
-3,
-2,
-1,
-4,
-2,
-3,
-4,
2,
-2,
0,
2,
0,
-4,
-4,
-4,
-3,
3,
3,
-1,
0,
0,
-3,
3,
-4,
-2,
3,
-3,
2,
1,
-2,
3,
-2,
-1,
3,
-3,
2,
0,
-1,
-3,
0,
0,
-3,
0,
3,
2,
3,
-2,
-3,
2,
-1,
0,
-3,
-2,
1,
2,
0,
-3,
-4,
-3,
0,
0,
-3,
-1,
0,
1,
0,
-2,
0,
2,
-1,
3,
-4,
3,
-4,
0,
-3,
1,
3,
2,
-3,
-4,
-1,
-1,
-3,
0,
-3,
-2,
-1,
-3,
-1,
1,
-2,
-3,
2,
-2,
-4,
-1,
0,
2,
-2,
1,
0,
1,
0,
3,
-4,
2,
0,
3,
0,
-3,
1,
0,
-2,
3,
1,
1,
-1,
-1,
-2,
-3,
-4,
-3,
1,
2,
-2,
2,
-1,
1,
-3,
-3,
-4,
-2,
-3,
-1,
1,
0,
-1,
-3,
-2,
-3,
-2,
2,
-4,
-3,
0,
2,
-1,
-4,
-3,
3,
1,
3,
3,
-1,
-1,
-3,
3,
-4,
-3,
3,
-1,
3,
-4,
1,
1,
-4,
-2,
-3,
3,
1,
-1,
-4,
-2,
-4,
2,
2,
1,
-3,
2,
-3,
1,
0,
3,
0,
-2,
-2,
-1,
3,
2,
0,
3,
1,
-4,
-1,
-3,
-1,
-4,
0,
1,
-1,
-2,
2,
2,
-4,
-1,
2,
-4,
0,
-2,
2,
2,
1,
-3,
-2,
-1,
3,
-2,
3,
1,
2,
-2,
-4,
0,
3,
0,
-1,
1,
-3,
-4,
0,
-4,
0,
-1,
-4,
2,
-3,
1,
-1,
2,
-3,
0,
0,
-2,
3,
-4,
0,
-3,
-3,
-2,
-1,
-3,
-4,
-2,
-4,
-4,
-1,
-4,
0,
3,
3,
-4,
-3,
-1,
-1,
2,
-4,
1,
-2,
-3,
-3,
-1,
3,
0,
-4,
0,
3,
};

const char m_b[] = {
0,
1,
-4,
0,
3,
-1,
-4,
2,
-1,
3,
-1,
1,
-2,
-1,
-4,
-3,
2,
-3,
-3,
-1,
1,
-2,
2,
-1,
-2,
3,
-2,
-3,
0,
1,
2,
3,
3,
-2,
1,
-2,
2,
-1,
1,
-4,
3,
0,
-1,
2,
-1,
-1,
-4,
1,
1,
-2,
-4,
3,
-2,
-2,
2,
0,
-2,
3,
-4,
0,
3,
2,
-3,
-2,
-2,
2,
2,
-4,
-4,
1,
-3,
-4,
1,
-3,
-4,
0,
-2,
0,
-2,
-3,
-1,
0,
-2,
3,
-4,
-1,
-2,
-3,
-1,
-2,
-4,
0,
-2,
0,
3,
0,
-3,
3,
-1,
-2,
-4,
2,
0,
-1,
-2,
3,
-2,
3,
-4,
-4,
-1,
-2,
3,
2,
1,
1,
3,
-1,
-2,
0,
1,
-4,
-3,
3,
1,
1,
2,
2,
-3,
-2,
3,
3,
-3,
-4,
1,
-1,
-1,
0,
-2,
-3,
1,
-3,
-1,
-2,
1,
-1,
3,
-1,
2,
3,
1,
-2,
-3,
-2,
-2,
0,
0,
2,
1,
0,
2,
-4,
-4,
-1,
0,
0,
1,
-1,
0,
0,
2,
0,
-4,
2,
0,
1,
-3,
0,
1,
-1,
1,
2,
1,
-3,
-1,
-3,
-3,
-1,
0,
3,
3,
1,
-2,
2,
-2,
-4,
-4,
1,
-4,
3,
-3,
-4,
2,
-3,
-1,
-3,
-1,
-2,
3,
2,
-1,
1,
3,
-1,
2,
3,
-3,
-1,
-1,
1,
3,
-1,
-4,
0,
0,
3,
1,
-4,
0,
0,
-1,
1,
2,
2,
-1,
1,
2,
-4,
-1,
1,
3,
0,
-1,
3,
-4,
1,
1,
1,
-2,
1,
-1,
-3,
0,
-3,
0,
-1,
0,
-1,
1,
-1,
-2,
-3,
1,
-1,
3,
3,
2,
3,
2,
-1,
-4,
1,
2,
-3,
-3,
-3,
3,
1,
3,
3,
3,
-3,
-1,
1,
0,
-3,
2,
2,
-3,
-4,
2,
2,
-4,
-2,
-2,
2,
1,
2,
0,
-3,
3,
-4,
-3,
3,
-1,
-1,
-2,
1,
-1,
-3,
-4,
-1,
3,
-1,
2,
1,
3,
-2,
2,
1,
1,
-4,
-2,
-1,
0,
2,
3,
-3,
2,
2,
-4,
1,
3,
1,
2,
2,
-2,
-2,
3,
-3,
-4,
2,
-3,
-1,
-1,
-1,
-2,
-2,
1,
3,
0,
1,
0,
-2,
-2,
-1,
-3,
-4,
-2,
0,
-1,
1,
-3,
-3,
-4,
3,
-3,
-4,
3,
-3,
3,
-2,
0,
-2,
1,
-1,
3,
-1,
3,
1,
-3,
0,
0,
2,
1,
-3,
-4,
1,
-1,
-2,
2,
2,
-4,
-2,
2,
-3,
-1,
-3,
3,
0,
-3,
2,
-4,
2,
3,
-3,
2,
2,
3,
-3,
-1,
-2,
-4,
-2,
1,
-1,
-1,
-2,
-2,
-2,
-1,
-2,
-1,
1,
0,
-1,
-3,
2,
-4,
-4,
2,
0,
3,
-3,
-3,
3,
1,
1,
0,
3,
-3,
-4,
2,
-2,
-4,
1,
2,
0,
2,
2,
1,
0,
-3,
-1,
3,
1,
-3,
1,
2,
-4,
1,
1,
3,
-2,
3,
-4,
1,
-1,
-4,
-1,
3,
3,
-1,
-4,
-4,
0,
-4,
0,
1,
-3,
-3,
1,
-2,
0,
3,
-3,
-4,
-4,
0,
-3,
1,
-2,
-1,
1,
-4,
-3,
-1,
2,
0,
-3,
0,
-1,
3,
2,
2,
0,
0,
-4,
-4,
1,
-3,
3,
0,
3,
-3,
-1,
2,
2,
2,
-2,
-3,
-2,
-3,
3,
-2,
3,
3,
1,
0,
-2,
-1,
0,
-2,
3,
-4,
-1,
2,
0,
-3,
-4,
2,
-3,
-1,
-1,
0,
2,
-4,
2,
-3,
-1,
0,
2,
1,
2,
-2,
2,
0,
1,
0,
0,
-3,
0,
0,
0,
-1,
-4,
-2,
-3,
0,
3,
0,
1,
-1,
3,
0,
3,
-1,
3,
-1,
-4,
-2,
-4,
2,
-4,
3,
3,
1,
2,
-2,
2,
3,
-2,
1,
3,
-1,
3,
2,
-4,
-1,
0,
0,
0,
-3,
-3,
1,
-3,
-3,
-1,
2,
-1,
-4,
-4,
-2,
-4,
2,
-3,
-3,
-4,
2,
2,
-4,
3,
-1,
-1,
0,
1,
0,
2,
0,
0,
3,
3,
0,
-2,
2,
0,
-3,
1,
2,
-2,
0,
-3,
3,
-3,
-4,
1,
-1,
-4,
3,
-2,
2,
0,
-2,
-4,
0,
-3,
2,
-3,
0,
3,
2,
-4,
-4,
0,
1,
3,
-3,
-3,
0,
-3,
3,
-1,
-4,
3,
1,
2,
3,
-2,
2,
3,
0,
-3,
-4,
3,
-4,
-1,
2,
1,
3,
-3,
-4,
3,
1,
0,
0,
-3,
-4,
-3,
2,
0,
1,
-4,
3,
-4,
-2,
-1,
-4,
2,
-4,
2,
0,
1,
0,
-4,
-4,
0,
-4,
0,
-4,
-1,
2,
0,
0,
-2,
-1,
-2,
0,
3,
-1,
3,
1,
-4,
-1,
1,
-1,
2,
0,
3,
-4,
-4,
-2,
-3,
-2,
1,
0,
-4,
3,
0,
-4,
-1,
0,
3,
-4,
2,
-4,
-1,
2,
-2,
0,
1,
1,
-3,
-2,
3,
-4,
-4,
0,
3,
-4,
-2,
0,
1,
-4,
-4,
2,
-2,
-3,
-4,
-4,
3,
-1,
-4,
2,
0,
2,
3,
2,
0,
3,
-1,
3,
2,
-4,
-1,
-2,
-1,
1,
3,
-1,
-2,
2,
3,
-4,
-3,
-1,
2,
-2,
2,
-2,
2,
-1,
0,
-1,
-4,
-4,
1,
-3,
2,
3,
-2,
0,
0,
-2,
-4,
1,
0,
3,
2,
-2,
0,
1,
-3,
-3,
3,
1,
-2,
0,
-1,
3,
-1,
-4,
-1,
3,
-3,
2,
-4,
-1,
2,
-1,
-2,
2,
-3,
0,
3,
-2,
2,
2,
-3,
3,
-1,
-4,
-1,
-4,
-2,
-2,
1,
-4,
-2,
3,
1,
-1,
3,
2,
3,
-4,
1,
-4,
-4,
0,
1,
3,
2,
-1,
-2,
-2,
1,
-1,
-1,
0,
-1,
0,
-4,
0,
0,
2,
-4,
2,
2,
-1,
2,
1,
2,
1,
2,
-2,
1,
-1,
-4,
-1,
1,
3,
-4,
-1,
1,
-1,
3,
-3,
-3,
2,
-2,
1,
1,
3,
3,
-3,
0,
0,
2,
2,
3,
0,
-3,
1,
1,
2,
-4,
0,
0,
2,
-1,
-2,
2,
0,
-1,
1,
2,
-4,
-2,
3,
2,
3,
-3,
-2,
1,
-2,
3,
1,
-2,
-2,
2,
1,
-4,
-3,
-2,
-4,
1,
-1,
0,
3,
-1,
2,
-1,
-1,
0,
1,
0,
-4,
3,
-2,
1,
3,
0,
2,
-2,
0,
-3,
0,
0,
0,
2,
-4,
3,
0,
1,
-4,
-4,
3,
-1,
-4,
0,
-2,
2,
-3,
-3,
-3,
-2,
-4,
-4,
3,
-3,
1,
-4,
-2,
-1,
-4,
1,
0,
3,
-4,
1,
1,
2,
-3,
0,
};

const char m_exp[] = {
-7,
54,
40,
-69,
27,
6,
-46,
-45,
42,
-3,
39,
8,
-11,
-7,
-25,
-28,
50,
20,
-34,
14,
6,
-2,
11,
53,
-28,
14,
-64,
5,
21,
-7,
-49,
-4,
-15,
-72,
5,
35,
-9,
-19,
5,
-19,
-2,
8,
-17,
-9,
49,
-28,
-23,
27,
-47,
35,
36,
-19,
-9,
24,
12,
-4,
30,
-28,
30,
-27,
-17,
41,
21,
-5,
-36,
33,
-18,
-8,
6,
19,
-33,
26,
-38,
-29,
-40,
-21,
13,
-15,
-6,
-22,
13,
10,
51,
-38,
-53,
48,
17,
53,
-35,
-21,
28,
-10,
-54,
54,
-17,
19,
-27,
8,
20,
42,
-31,
8,
22,
73,
-6,
-9,
-11,
-17,
-2,
-29,
20,
52,
0,
-5,
-44,
31,
-6,
-12,
-11,
-1,
19,
-46,
24,
19,
6,
-40,
11,
-23,
8,
-2,
-36,
77,
15,
-9,
31,
66,
-39,
24,
-19,
40,
-6,
-12,
-12,
37,
8,
9,
-18,
-1,
-8,
-26,
25,
45,
50,
-15,
49,
3,
-16,
2,
48,
-37,
67,
-6,
40,
-13,
60,
38,
-27,
11,
1,
-8,
12,
-27,
5,
12,
33,
-24,
4,
-40,
-41,
39,
-13,
17,
13,
-25,
-29,
21,
-28,
18,
-8,
-23,
32,
-22,
26,
-22,
29,
13,
16,
11,
21,
12,
-11,
64,
27,
3,
75,
-37,
-21,
30,
6,
-18,
43,
-10,
-26,
32,
16,
27,
8,
-6,
47,
7,
-8,
28,
29,
-18,
-40,
10,
40,
16,
-7,
29,
-19,
38,
65,
53,
-71,
42,
28,
-69,
-22,
4,
52,
-74,
-9,
12,
-46,
-32,
-72,
5,
-33,
34,
-6,
-38,
14,
0,
47,
-23,
-4,
-14,
-2,
14,
-17,
29,
7,
32,
-39,
-21,
40,
14,
21,
4,
-3,
9,
-15,
-2,
35,
-13,
47,
9,
-11,
22,
10,
5,
23,
39,
20,
14,
13,
26,
19,
-49,
60,
57,
-18,
-35,
33,
-43,
20,
46,
35,
-17,
72,
62,
25,
-13,
-18,
-2,
20,
-6,
-13,
-9,
49,
6,
41,
-20,
-7,
14,
-20,
26,
32,
37,
-16,
34,
66,
10,
23,
-32,
11,
-37,
-18,
-9,
7,
-15,
69,
28,
14,
19,
-27,
11,
71,
5,
-47,
22,
-41,
-8,
35,
25,
92,
-7,
-34,
-33,
-9,
-33,
33,
9,
45,
28,
28,
24,
-24,
43,
16,
23,
63,
-28,
53,
32,
33,
5,
12,
-34,
-40,
6,
-10,
0,
16,
23,
38,
12,
33,
16,
-5,
-49,
22,
23,
4,
45,
16,
43,
1,
24,
-32,
16,
8,
37,
-38,
-7,
15,
65,
-23,
-61,
34,
18,
-4,
12,
-24,
-38,
22,
-23,
-13,
80,
-10,
29,
58,
26,
-40,
40,
33,
-13,
-14,
26,
37,
97,
-1,
4,
51,
65,
-33,
47,
10,
25,
-30,
10,
-11,
-34,
18,
-28,
-47,
5,
-42,
-27,
24,
55,
-10,
-26,
28,
50,
17,
24,
9,
72,
-27,
-41,
29,
23,
-24,
-15,
-14,
22,
3,
3,
3,
42,
17,
-5,
-21,
77,
29,
-33,
-1,
27,
-38,
-26,
7,
36,
-30,
24,
39,
-10,
-39,
8,
-32,
-14,
63,
48,
-41,
2,
-24,
58,
24,
21,
11,
-15,
82,
-33,
53,
14,
-1,
34,
12,
31,
7,
-14,
-4,
16,
-6,
-9,
-7,
28,
50,
-6,
-10,
15,
20,
-19,
2,
40,
54,
12,
24,
-5,
-6,
19,
14,
22,
27,
15,
14,
7,
-8,
-19,
34,
-36,
12,
-11,
-5,
23,
-1,
30,
-34,
-11,
8,
27,
9,
-8,
8,
-26,
-1,
51,
30,
-29,
3,
-26,
0,
-37,
3,
-12,
3,
33,
-36,
2,
-48,
-15,
9,
-38,
-6,
-2,
10,
2,
33,
32,
-22,
-2,
-19,
16,
-12,
28,
8,
63,
-6,
-77,
23,
-13,
-23,
0,
-20,
28,
33,
23,
-34,
-12,
-3,
-22,
59,
-10,
-33,
-13,
48,
0,
3,
28,
14,
-9,
-25,
18,
-2,
-57,
9,
-21,
-46,
36,
91,
18,
2,
-14,
13,
-24,
-20,
-61,
31,
-24,
47,
-27,
40,
12,
12,
13,
-16,
10,
28,
7,
-11,
20,
8,
13,
-34,
4,
28,
-66,
-32,
-25,
-8,
-51,
-13,
34,
43,
-26,
3,
51,
-37,
-80,
20,
-10,
-43,
3,
57,
17,
8,
-25,
-5,
16,
49,
41,
20,
19,
-8,
-31,
47,
-46,
-23,
-28,
34,
-39,
0,
64,
32,
20,
43,
15,
36,
15,
-31,
59,
49,
-21,
60,
0,
18,
0,
21,
21,
22,
-19,
7,
19,
22,
42,
44,
-9,
43,
5,
-19,
-43,
-30,
-4,
-24,
-11,
65,
55,
-5,
-33,
17,
8,
14,
38,
3,
-5,
33,
8,
-23,
-2,
78,
-11,
14,
-30,
10,
27,
46,
42,
-1,
6,
24,
-7,
13,
2,
9,
-4,
16,
-29,
87,
49,
97,
50,
14,
-17,
101,
45,
-42,
23,
53,
52,
28,
-4,
10,
-16,
-23,
31,
-54,
17,
-19,
-34,
-14,
62,
19,
-19,
53,
-3,
17,
-16,
-19,
-17,
34,
59,
-3,
-36,
27,
36,
-20,
-42,
8,
-30,
31,
-20,
15,
36,
27,
43,
-14,
9,
6,
-13,
55,
55,
-21,
10,
3,
-4,
33,
-22,
-26,
-43,
38,
19,
-12,
28,
47,
-17,
-23,
15,
-39,
-35,
-4,
14,
34,
56,
-16,
13,
-38,
14,
13,
-1,
-37,
-21,
38,
5,
-10,
51,
34,
44,
-9,
36,
-14,
-3,
-1,
14,
-25,
7,
38,
-49,
24,
-3,
-7,
-55,
42,
23,
-35,
61,
21,
33,
-30,
26,
-44,
-24,
50,
37,
43,
22,
3,
-34,
36,
24,
-32,
-14,
-20,
12,
53,
-3,
67,
24,
23,
48,
-21,
14,
49,
40,
49,
2,
89,
62,
-3,
24,
-27,
51,
22,
30,
-5,
-8,
7,
-29,
17,
85,
78,
49,
66,
-18,
-19,
14,
-35,
-45,
85,
31,
16,
13,
8,
-35,
38,
-11,
-19,
19,
-14,
-15,
1,
-25,
47,
-32,
3,
31,
39,
42,
5,
7,
19,
-31,
25,
-17,
7,
1,
7,
-6,
2,
-2,
19,
-15,
8,
34,
-35,
-8,
84,
57,
-65,
47,
18,
17,
-60,
-7,
29,
3,
1,
-5,
-28,
4,
-6,
-46,
-34,
47,
12,
9,
59,
19,
6,
18,
29,
-14,
5,
3,
-24,
43,
10,
13,
-53,
8,
9,
-41,
14,
12,
-8,
-28,
21,
-2,
92,
-36,
-16,
23,
10,
34,
-2,
13,
14,
45,
-15,
64,
-16,
11,
34,
-29,
48,
40,
71,
30,
-21,
0,
34,
8,
46,
-45,
24,
54,
3,
-29,
17,
-9,
61,
-36,
-38,
5,
6,
56,
28,
55,
28,
-13,
-21,
44,
-31,
-20,
};

#define SIZE 32
__attribute__ ((section(".heapsram"))) char g_mA[SIZE][SIZE];
__attribute__ ((section(".heapsram"))) char g_mB[SIZE][SIZE];
__attribute__ ((section(".heapsram"))) char g_mC[SIZE][SIZE];
__attribute__ ((section(".heapsram"))) char g_mB_tmp[SIZE][SIZE];