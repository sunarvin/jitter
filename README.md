
There are always some noises when acquiring signals.
This simple snippet code is used to filter these noises.

Let's assume that you are using 5bits width. Here is an example to call the API:

    cur_bit &= 1; /* get current pin status */
    bits = ((bits << 1) + cur_bit) & NF5_MASK;
    result = noise_filter(NF5_WIDTH, bits);

The followings images show the transition among statuses:

3bits
  ![image](https://github.com/sunarvin/noise_filter/blob/main/images/3.png)
  
4bits
  ![image](https://github.com/sunarvin/noise_filter/blob/main/images/4.png)
  
5bits
  ![image](https://github.com/sunarvin/noise_filter/blob/main/images/5.png)
