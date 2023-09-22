/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */

class LinkedList {
    constructor() {}
    getLength(l1) {
        let length = 0;
        let temp = l1;
        while (temp) {
            length++;
            temp = temp.next;
        }
        return length;
    }
    getArray() {
        let A = [];
        let temp = l1;
        while (temp) {
            A.push(temp.val);
            temp = temp.next;
        }
        return A;
    }
}

var splitListToParts = function (root, k) {
    let ll = new LinkedList();
    let N = ll.getLength(root);

    let each = Math.trunc(N / k);
    let extra = N % k;

    // console.log(N, k, "  ", each, extra);

    let ans = new Array(k);
    let i = 0;

    let temp = root;
    while (temp) {
        // console.log(temp.val);

        ans[i] = temp;
        let prev = null;
        let temp_small = temp;

        let e = each;
        while (e && temp_small) {
            prev = temp_small;
            temp_small = temp_small.next;
            e--;
        }
        if (extra && temp_small) {
            prev = temp_small;
            temp_small = temp_small.next;
            extra--;
        }

        if (prev) {
            prev.next = null;
        }

        temp = temp_small;
        i++;
    }
    for (; i < ans.length; i++) {
        ans[i] = null;
    }

    return ans;
};
