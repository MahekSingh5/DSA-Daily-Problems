1# Write your MySQL query statement below
2SELECT u.unique_id, e.name from Employees e LEFT JOIN EmployeeUNI u ON
3e.id = u.id;