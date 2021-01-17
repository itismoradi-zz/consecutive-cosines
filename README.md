# consecutive-cosines

<details><summary>mathematical theorem</summary>
  <p> 
      the answer of consecutive cosines function for each angle (in degrees) is close to 1 (approximately 0.99847741)
  </p>
  <p>
    consecutive-cosines is a recursive function.<br>
  </p>
  <p> 
      f(1, x) = cos(x)<br>
      f(2, x) = cos(cos(x))<br>
      f(3, x) = cos(cos(cos(x)))<br>
      f(4, x) = cos(cos(cos(cos(x))))<br>
      ...<br>
      f(n, x) = cos(f(n-1, x))<br>
  </p>
  <p align="center">
     <img src="/images/calculator.JPG" />
  </p>
</details>

More information on Quora.com : [what-is-the-value-of-underbrace-cos-cos-cos-cos-x-infty](https://www.quora.com/If-x-is-a-constant-then-what-is-the-value-of-underbrace-cos-cos-cos-cos-x-infty)
