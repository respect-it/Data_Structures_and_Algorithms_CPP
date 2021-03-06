*This challenge is part of a tutorial track by [MyCodeSchool](https://www.youtube.com/user/mycodeschool) andis accompanied by a video lesson.*

You’re given the pointer to the head node of a linked list. Change the next pointers of the nodes so that their order is reversed. The head pointer given may be null meaning that the initial list is empty.

#### Input Format

You have to complete the *SinglyLinkedListNode reverse(SinglyLinkedListNode head)* method which takes one argument - the head of the linked list. You should NOT read any input from stdin/console.

The input is handled by the code in the editor and the format is as follows:

The first line contains an integer <img src="https://latex.codecogs.com/svg.latex?\Large&space;t">, denoting the number of test cases.<br>
Each test case is of the following format:

The first line contains an integer <img src="https://latex.codecogs.com/svg.latex?\Large&space;n">, denoting the number of elements in the linked list.<br>
The next <img src="https://latex.codecogs.com/svg.latex?\Large&space;n"> lines contain an integer each, denoting the elements of the linked list.

#### Constraints
- <img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{t}\le{10}">
- <img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{n}\le{1000}">
- <img src="https://latex.codecogs.com/svg.latex?\Large&space;1\le{list_i}\le{1000}">, where is the <img src="https://latex.codecogs.com/svg.latex?\Large&space;list_i"> is the <img src="https://latex.codecogs.com/svg.latex?\Large&space;i^{th}"> element in the list.

#### Output Format

Change the next pointers of the nodes that their order is reversed and *return* the head of the reversed linked list. Do NOT print anything to stdout/console.

The output is handled by the code in the editor. The output format is as follows:

For each test case, print in a new line the elements of the linked list after reversing it, separated by spaces.

Sample Input|Expected Output|Explanation
-|-|-
1<br>5<br>1<br>2<br>3<br>4<br>5|5 4 3 2 1|The initial linked list is: 1 -> 2 -> 3 -> 4 -> 5 -> NULL<br>The reversed linked list is: 5 -> 4 -> 3 -> 2 -> 1 -> NULL
