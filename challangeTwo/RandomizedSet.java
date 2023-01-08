//Link : https://leetcode.com/problems/insert-delete-getrandom-o1/submissions/873761285/
class RandomizedSet {

    private Set<Integer> randomNumbers;
    public RandomizedSet() {
        randomNumbers = new HashSet<>();
    }

    public boolean insert(int val) {
        return randomNumbers.add(val);
    }

    public boolean remove(int val) {
        return randomNumbers.remove(val);
    }

    public int getRandom() {
        Integer[] numbers = randomNumbers.toArray(new Integer[0]);
        Random random = new Random();
        int n = random.nextInt(numbers.length);
        return numbers[n];   
        }
}
