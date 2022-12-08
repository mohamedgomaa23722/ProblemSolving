//Link : https://leetcode.com/problems/leaf-similar-trees/description/
class Solution {
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
        List<Integer> leaf1 = leafs(root1);
        List<Integer> leaf2 = leafs(root2);
        return leaf1.equals(leaf2);
    }

    public  List<Integer> leafs(TreeNode tree){
        List<Integer> result = new ArrayList<>();
        if(tree.left == null && tree.right == null){
            return Arrays.asList(tree.val);
        }
        if(tree.left != null)
            result.addAll(leafs(tree.left));
        if(tree.right != null)            
            result.addAll(leafs(tree.right));
        return result;
    }
}
