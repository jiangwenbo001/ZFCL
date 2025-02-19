# ZFCL
ZFCL(Zeta Function Completeness Language)(no related to ZFC),an ordinal language
## How to use it?
Enter your code to the excuser and it will run your code.
Here are some examples.
### Example1
Count from 1 to $\omega$
```text
Do you want Guide?(0/1)1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]4
Supvar:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]2
OutPutvar:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]0
Instruction is prepared.
```
```text
Do you want Guide?(0/1)0
4 1 2 1 0
```
### Example2
Count from 0 to $\omega$
```text
Do you want Guide?(0/1)1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]4
Supvar:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]5
Setvar:2
Setval:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]6
Operator[1:add 2:sub]2
VarA:1
VarB:2
Varres:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]2
OutPutvar:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]0
Instruction is prepared.
```
```text
Do you want Guide?(0/1)0
4 1 5 2 1 6 2 1 2 1 2 1 0
```
### Example3
Count from 0 to $\omega^2$
```text
Do you want Guide?(0/1)1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]4
Supvar:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]4
Supvar:2
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]5
Setvar:3
Setval:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]6
Operator[1:add 2:sub]2
VarA:1
VarB:3
Varres:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]6
Operator[1:add 2:sub]2
VarA:2
VarB:3
Varres:2
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]1
OutPuttext:ω
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]2
OutPutvar:1
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]1
OutPuttext:+
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]2
OutPutvar:2
insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate]0
Instruction is prepared.
```
```text
Do you want Guide?(0/1)0
4 1 4 2 5 3 1 6 2 1 3 1 6 2 2 3 2 1 ω 2 1 1 + 2 2 0
```
### No more example avalible now
## How to build?
You just need standard $\ge$ C++98 to run it.
## Grammra
No grammra now.
