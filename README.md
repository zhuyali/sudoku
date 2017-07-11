# Sudoku

## 1.开发思路

首先，编写解数独算法，就要知道机器在解数独时的逻辑。解数独的顺序是自上而下，从左往右。因而，向空格内填入候选数字时也应该先从第一个空格开始填起。那么如何得知哪里是空格呢？我采用了引入数字0来作为数组中的空格的方法。向数独内填数的时候应该填哪些数呢？因而需要一个能够判断该空格的候选数字的方法并且需要一个数组存储这些候选数字。如此向一个一个空格内填入候选数字，直到某一个空格内没有候选数字，则返回上一个空格填入下一个候选数字，直到遍历到第9×9个方格，退出函数，输出最终的答案。而生成数独的算法只需要在解数独的基础上稍作改变：使用rand()和srand()方法随机生成数组的第一行，后续生成则由解数独算法来完成。

## 2.流程图

![](http://cdn1.showjoy.com/images/74/7428988f2b984077a29b10373baf1106.png)

## 3.数据结构和算法思路

数独算法使用的核心数据结构为回溯法，回溯法的基本思想是：从一条路往前走，能进则进，不能进则退回来，换一条路再试，以此反复，最终可以得出一条最优路径，在数独中来说，即可以得到数独的解。用回溯法解决问题的一般步骤为：针对所给问题，定义问题的解空间，它至少包含问题的一个解—确定易于搜索的解空间结构，使得能用回溯法方便地搜索整个解空间—以深度优先的方式搜索解空间，并在搜索过程中用剪枝函数避免无效搜索。在回溯法中，问题的解空间是在搜索问题解的过程中动态产生的，这是回溯算法的一个重要特性。我采用的算法思路为：将开始节点（第一个填入候选数字的节点）作为扩展节点，向纵深方向移至一个新节点，这个新节点就成为新的扩展节点，当当前扩展节点不能向纵深方向移动，则该节点就成为死节点，此时，回溯至最近的一个活结点处，并将这个活节点作为当前的扩展节点。最终，以这种工作方式递归地在解空间中搜索，直至求解出该数独。
