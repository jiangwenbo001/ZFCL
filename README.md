# ZFCL
ZFCL(Zeta Function Completeness Language)(no related to ZFC),an ordinal language
## How to use it?
Enter your code to the excuser and it will run your code.
Here are some examples.
### Example1
Count from 1 to $\omega$
```text
function number 1
    printvar 1
end
function main 0
    sup 1
    number 1
end
```
### Example2
Count from 0 to $\omega$
```text
function number 1
    printvar 1
end
function main 0
    split
        printtext 0
    end
        sup 1
        number 1
    end
end
```
you can also do that by this
```text
function number 1 end
    printvar 1
end
function main 0 end
    sup 1
    set 2 -1
    add 1 2 1
    number 1
end
```
### No more example avalible now
## How to build?
You just need standard $\ge$ C++98 to run it.
## Grammra
No grammra now.
