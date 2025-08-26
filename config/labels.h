// clang-format off
/*
                                       Sofle key matrix / layout mapping

  ╭────────────────────────────┬────────────────────────────╮  ╭─────────────────────────────┬─────────────────────────────╮
  │  0   1   2   3   4   5     │     7   8   9   10  11  12 │  │ LN0 LN1 LN2 LN3 LN4 LN5     │     RN0 RN1 RN2 RN3 RN4 RN5 │
  │ 13  14  15  16  17  18     │     20  21  22  23  24  25 │  │ LT0 LT1 LT2 LT3 LT4 LT5     │     RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 26  27  28  29  30  31     │     33  34  35  36  37  38 │  │ LM0 LM1 LM2 LM3 LM4 LM5     │     RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 39  39  40  41  42  43     │     46  47  48  49  50  51 │  │ LB0 LB1 LB2 LB3 LB4 LB5     │     RB0 RB1 RB2 RB3 RB4 RB5 │
  ╰───────╮ 53  54  55  56  57 │ 59  60  61  62  63 ╭───────╯  ╰───────╮ LH4 LH3 LH2 LH1 LH0 │ RH0 RH1 RH2 RH3 RH4 ╭───────╯
          ╰────────────────────┴────────────────────╯                  ╰─────────────────────┴─────────────────────╯


  ╭─────────┬─────────┬─────────┬─────────┬─────────┬─────────╮                                 ╭─────────┬─────────┬─────────┬─────────┬─────────┬─────────╮
  │         │         │         │         │         │         │                                 │         │         │         │         │         │         │
  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                 ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  │         │         │         │         │         │         │                                 │         │         │         │         │         │         │
  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                 ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  │         │         │         │         │         │         │                                 │         │         │         │         │         │         │
  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────╮             ╭─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  │         │         │         │         │         │         │         │             │         │         │         │         │         │         │         │
  ╰─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────╯             ╰─────────┬─────────┬─────────┬─────────┬─────────┬─────────┬─────────╯
            │         │         │         │         │         │                                 │         │         │         │         │         │
            ╰─────────┴─────────┴─────────┴─────────┴─────────╯                                 ╰─────────┴─────────┴─────────┴─────────┴─────────╯
*/
// clang-format on

#pragma once

// Left-number row
#define LN0 0
#define LN1 1
#define LN2 2
#define LN3 3
#define LN4 4
#define LN5 5

// Right-number row
#define RN0 7
#define RN1 8
#define RN2 9
#define RN3 10
#define RN4 11
#define RN5 12

// Left-top row
#define LT0 13
#define LT1 14
#define LT2 15
#define LT3 16
#define LT4 17
#define LT5 18

// Right-top row
#define RT0 20
#define RT1 21
#define RT2 22
#define RT3 23
#define RT4 24
#define RT5 25

// Left-middle row
#define LM0 26
#define LM1 27
#define LM2 28
#define LM3 29
#define LM4 30
#define LM5 31

// Right-middle row
#define RM0 33
#define RM1 34
#define RM2 35
#define RM3 36
#define RM4 37
#define RM5 38

// Left-bottom row
#define LB0 39
#define LB1 40
#define LB2 41
#define LB3 42
#define LB4 43
#define LB5 44

// Right-bottom row
#define RB0 46
#define RB1 47
#define RB2 48
#define RB3 49
#define RB4 50
#define RB5 51

// Left thumb keys
#define LH0 53
#define LH1 54
#define LH2 55
#define LH3 56
#define LH4 57

// Right thumb keys
#define RH0 59
#define RH1 60
#define RH2 61
#define RH3 62
#define RH4 63
