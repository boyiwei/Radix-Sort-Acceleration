# Radix Sort Acceleration for Large Datasets
This project is dedicated to accelerate radix sort algorithm for large datasets. (\~$10^6$)

In this version, compared to the branch main_1, we did not fully expand input_bucket. Instead, we used a for loop. However, we applied another technique that can finish
sorting 2 digits at the first loop.