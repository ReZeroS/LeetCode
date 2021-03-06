Prove
https://segmentfault.com/a/1190000008824222



减少循环的核心思路是省去没有必要的遍历，并且确保所需的答案一定能被遍历到
假设现在有一个容器，则容器的盛水量取决于容器的底和容器较短的那条高
则我们可以从最大的底长入手，即当容器的底等于数组的长度时，则容器的盛水量为较短边的长乘底
可见 只有较短边会对盛水量造成影响，因此移动较短边的指针，并比较当前盛水量和当前最大盛水量。直至左右指针相遇。

主要的困惑在于如何移动双指针才能保证最大的盛水量被遍历到
假设有左指针left和右指针right，且left指向的值小于right的值，假如我们将右指针左移，则右指针左移后的值和左指针指向的值相比有三种情况

右指针指向的值大于左指针
这种情况下，容器的高取决于左指针，但是底变短了，所以容器盛水量一定变小

右指针指向的值等于左指针
这种情况下，容器的高取决于左指针，但是底变短了，所以容器盛水量一定变小

右指针指向的值小于左指针
这种情况下，容器的高取决于右指针，但是右指针小于左指针，且底也变短了，所以容量盛水量一定变小了

综上所述，容器高度较大的一侧的移动只会造成容器盛水量减小
所以应当移动高度较小一侧的指针，并继续遍历，直至两指针相遇。

更新：更严谨的证明
之前证明的只是在左指针不改变的情况下，左移右指针只会造成容器的容量减小。但是一旦紧接着左指针发生变化，就无法证明以该左指针为一侧高，右指针右侧的值生成的容器的容量比当前值小。
以下补充一个简单的反证法证明算法的合理性
当前的算法为：使用两个指针分别指向数组的头和尾。指向的值较小的那个指针移动，即左指针右移，右指针左移。当左右指针相遇时，指针
假设：该算法并没有遍历到容量最大的情况
我们令容量最大时的指针为p_left和p_right。根据题设，我们可以假设遍历时左指针先到达p_left，但是当左指针为p_left时，右指针还没有经过p_right左指针就移动了
已知当左指针停留在p_left时，它只有在两种场景下会发生改变

左指针和右指针在p_left相遇，则右指针一定在前往p_left的途中经过p_right，与题设矛盾

右指针位于p_right右侧且当前的值大于左指针。则在这种情况下，此时容器的盛水量比题设中最大的盛水量还要大，与题设矛盾
因此该算法的遍历一定经过了最大的盛水量的情况
