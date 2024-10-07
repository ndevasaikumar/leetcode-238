**238. Product of Array Except Self**

First create two dynamic arrays and store 1 in all the indexes.

Now calculate the post product and pre product accordingly by iterating through the given array.

Now iterate any through any array (post or pre or given array) and calucate the product of post[i] * pre[i] and store it in orignal array  array[i].

Now return the array.Our task is done.

**Time Complexity :**

O(N)

**Space Complexity :**

O(1)

