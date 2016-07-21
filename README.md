# TDDExerciseAccoutingSystem
This repository is used to practice TDD (Test-Driven Development)programming. Here list different iterations for people to implement unit test case and production code step by step.

### Iteration #1
For a single account with one main line and any optional "additional lines", calculate a monthly phone bill based on: 

- Plan Type — Gold or Silver
- Additional line rate (shown below)

##### **Plan Rates**
Here are the rates for each plan type:
| Plan     | Basic Monthly Rate | Rate per Additional Line   |
| :------- | ----: | :---: |
| Gold | 49.95 |  14.50    |
| Silver    | 29.95   |  21.50   |

##### **Examples:**
| Plan     | Number of Lines | Expected Bill   |
| :------- | :----: | :--- |
| Gold | 1 |  49.95   |
| Gold    | 2   |  14.50 + 49.95 = 64.45  |
| Silver | 1 |  29.95    |
| Silver    | 3   |  (2*21.50) + 29.95 = 72.95|


-----
### Iteration #2

For a single account, calculate a monthly phone bill, including excess minutes based on:

 - Plan Type — Gold or Silver
 - Number of Lines
 - Excess Minutes — minutes used in excess of the included minutes

##### **Plan Rates**
Here are excess minutes rates for each plan type:
| Plan     | Basic Monthly Rate | Included Minutes  |
| :------- | :----: | :---: |
| Gold | 49.95 |  1000   |
| Silver    | 29.95   | 500  |

##### **Examples**
| Plan     | Minutes Used | Number of Lines | Expected Bill   |
| :------- | :----: | :----: | :--- |
| Gold   | 999 | 1 |  49.95   |
| Gold   | 1000 | 1 |  49.95  |
| Gold   | 1001 | 1 |  49.95 + 0.45 = 50.40 |
| Gold   | 1010 | 1 |  49.95 + (10 * 0.45) = 54.45  |
| Silver | 499 | 1 |  29.95    |
| Silver | 500 | 1 |  29.95    |
| Silver | 520 | 1 |  29.95 + (20 * 0.54) = 40.75  |


----------
### Iteration #3
**Calculate Family Discount**

Families that have a main line and 3 or more additional lines qualify for Bill's "family discount."

For example, if Aunt Martha has 1 main line and 2 additional lines for her good-for-nothing sons, Ned and Ted, she doesn't qualify for Big Bill's family discount. If Aunt Martha got a 3rd additional line (maybe for her estranged sister, Bertha), that 3rd line would qualify for the "family" discount and only cost Martha an additional fee of \$5.00 per month instead of the Gold plan's additional line rate of \$14.50 per month or the Silver plan's additional line rate of $21.50 per month.

Please calculate a monthly phone bill for families that qualify or don't qualify for the family discount.

##### **Examples**
| Plan     | Minutes Used | Number of Lines | Expected Bill   |
| :------- | :----: | :----: | :--- |
| Gold   | <1000 | 2 |  49.95 + 14.50 = 64.45  |
| Gold   | <1000 | 3 |  49.95 + (2 * 14.50) = 78.95 |
| Gold   | <1000 | 4 |  49.95 + (2 * 14.50) + 5.00 = 83.95 |
| Silver | <500 | 4 |  29.95 + (2*21.50) + 5.00 = 77.95    |
| Silver | <500 | 5 |  29.95 + (2*21.50 + (2*5.00)) = 82.95    |