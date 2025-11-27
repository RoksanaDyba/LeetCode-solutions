# Write your MySQL query statement below
SELECT e.name AS Employee FROM Employee e
JOIN Employee m on m.id=e.managerID
WHERE e.salary>m.salary;