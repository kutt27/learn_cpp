# C++ Control Flow

In C++, control flow statements are used to control the order in which statements are executed. There are four main types of control flow statements:

- If statements are used to execute a block of code if a condition is true.
- While loops are used to repeatedly execute a block of code while a condition is true.
- Do-while loops are similar to while loops, but the block of code is executed at least once, even if the condition is false.
- For loops are used to execute a block of code a specific number of times.

### If statements

```plain-text
if (condition) {
    // Execute this block of code if the condition is true.
} else {
    // Execute this block of code if the condition is false.
}
```

The condition can be any expression that evaluates to a boolean value. If the condition is true, the block of code inside the if statement is executed. If the condition is false, the block of code inside the else statement is executed.

### While loops

```
while (condition) {
    // Execute this block of code while the condition is true.
}
```

The condition can be any expression that evaluates to a boolean value. As long as the condition is true, the block of code inside the while loop will be executed repeatedly. Once the condition becomes false, the loop will terminate.

### Do-while loops

```
do {
    // Execute this block of code at least once, even if the condition is false.
} while (condition);
```

The condition can be any expression that evaluates to a boolean value. The block of code inside the do statement will be executed at least once, even if the condition is false. The loop will then continue to execute as long as the condition is true.

### For loops

```
for (init; condition; increment/decrement) {
    // Execute this block of code repeatedly.
}
```

The init statement is executed once, before the loop starts. The condition is evaluated before each iteration of the loop. If the condition is true, the block of code inside the for loop is executed. The increment statement is then executed, and the process repeats. Once the condition becomes false, the loop terminates.

#### Break and continue statements

The break statement can be used to terminate a loop or switch statement. The continue statement can be used to skip the remainder of the current iteration of a loop.

```
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        // Break out of the loop.
        break;
    }
    // Do something...
}

switch (x) {
    case 1:
        // Do something...
        break;
    case 2:
        // Do something else...
        break;
    default:
        // Do something else...
}
```

[Code Example](code_example_constate.md)