## Execution Rules
0.   starting from main
1.   from top to down
2.   from right to left
3.   from inside to outside


## Logic Rules:

4.   NOR
```
    a | result nor a -> !a
    0    1
    1    0
```

5.   OR
```
    a | b | result a or b -> ||
    0   0   0
    0   1   1
    1   0   1
    1   1   1
```

6.  AND
```
    a | b | result a and b -> &&
    0   0   0
    0   1   0
    1   0   0
    1   1   1
```

## Conditionals:

7. Regarding if,else if, else statements

    They are mutually exclusive, meaning that, in case of one being evaluated
    then, the others will not be executed at all.

```
    if(condition1) -> needs to be a boolean value-> true or false
        
        //body that executes in case the condition is true
    }

    else if(condition2) 
    {
        //body that executes in case the condition 2 is true

    }

    else
    {
        //body that executes in case of any previous condition being true
    }

```

## Loops

8. While Loops
```
    while(condition)
    {
        //body that repeats under the condition being true
    }

```


9. For Loops

    The execution order is initialization, comparison, body, increment, then, again comparision
    
```
    for (initialization; comparison; increment)
    {
        //body to repeat
    }
```

## Functions

10. Functions
```
    [return type] function_name (parameters)
    {
        //body

        return [a variable that is of the return type you specified]
    }
```