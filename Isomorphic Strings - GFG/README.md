# Isomorphic Strings
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given two strings '<strong style="user-select: auto;">str1</strong>' and '<strong style="user-select: auto;">str2</strong>', check if these two&nbsp;strings are isomorphic to each other.<br style="user-select: auto;">
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while <strong style="user-select: auto;">preserving the order</strong>.<br style="user-select: auto;">
Note:&nbsp;All occurrences of every character in ‘str1’ should map to the same character in ‘str2’</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>str1 = aab
str2 = xxy
<strong style="user-select: auto;">Output: </strong>1<strong style="user-select: auto;">
Explanation: </strong>There are two different
charactersin aab and xxy, i.e a and b
with frequency 2and 1 respectively.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>str1 = aab
str2 = xyz
<strong style="user-select: auto;">Output: </strong>0<strong style="user-select: auto;">
Explanation: </strong>There are two different
charactersin aab but there are three
different charactersin xyz. So there
won't be one to one mapping between
str1 and str2.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything.Your task is to complete the function <strong style="user-select: auto;">areIsomorphic</strong>()&nbsp;which takes the string <strong style="user-select: auto;">str1</strong>&nbsp;and string <strong style="user-select: auto;">str2</strong>&nbsp;as input parameter&nbsp;and</span>&nbsp;<span style="font-size: 18px; user-select: auto;">&nbsp;check&nbsp;if two strings are isomorphic. The function returns <strong style="user-select: auto;">true </strong>if strings are isomorphic else it returns <strong style="user-select: auto;">false</strong>.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(|str1|+|str2|).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Number of different characters).<br style="user-select: auto;">
<strong style="user-select: auto;">Note:</strong>&nbsp;|s| represents the length of string s.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= |str1|, |str2|&nbsp;&lt;= 2*10<sup style="user-select: auto;">4</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>