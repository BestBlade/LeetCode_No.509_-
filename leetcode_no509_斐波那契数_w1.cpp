/* ------------------------------------------------------------------|
斐波那契数，通常用 F(n) 表示，形成的序列称为 斐波那契数列 。该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：

F(0) = 0，F(1) = 1
F(n) = F(n - 1) + F(n - 2)，其中 n > 1
给你 n ，请计算 F(n) 。

 

示例 1：

输入：2
输出：1
解释：F(2) = F(1) + F(0) = 1 + 0 = 1
示例 2：

输入：3
输出：2
解释：F(3) = F(2) + F(1) = 1 + 1 = 2
示例 3：

输入：4
输出：3
解释：F(4) = F(3) + F(2) = 2 + 1 = 3
 

提示：

0 <= n <= 30

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/fibonacci-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
-------------------------------------------------------------------*/

/*	双指针法
*
*	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
*	内存消耗：8.1 MB, 在所有 C++ 提交中击败了81.94%的用户
*/

#include <iostream>
#include <string> 
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>
#include <stack>
#include <queue>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}

};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/*	递归法
*
*	执行用时：12 ms, 在所有 C++ 提交中击败了26.54%的用户
*	内存消耗：6.2 MB, 在所有 C++ 提交中击败了52.88%的用户
*/

//int fib(int n) {
//    if (n < 2) {
//        return n;
//    }
//    return fib(n - 1) + fib(n - 2);
//}

/*	迭代法
*
*	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
*	内存消耗：6.1 MB, 在所有 C++ 提交中击败了64.41%的用户
*/

int fib(int n) {
    if (n < 2) {
        return n;
    }
    int pre = 0;
    int curr = 0;
    int res = 1;
    for (int i = 2; i <= n; i++) {
        pre = curr;
        curr = res;
        res = pre + curr;
    }
    return res;
}