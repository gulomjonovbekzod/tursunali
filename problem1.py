-- 1-2. Bazani yaratish va ulanish
CREATE DATABASE course_platform;
USE course_platform;

-- 3. Jadval
CREATE TABLE courses (
    CourseID INT AUTO_INCREMENT PRIMARY KEY,
    Title VARCHAR(200) NOT NULL,
    Instructor VARCHAR(100) NOT NULL,
    DurationHr DECIMAL(4,1) NOT NULL,
    Price DECIMAL(8,2) DEFAULT 0,
    Rating DECIMAL(2,1) DEFAULT 0,
    Enrolled INT DEFAULT 0
);

-- 4. Ma'lumotlar (12 ta)
INSERT INTO courses (Title, Instructor, DurationHr, Price, Rating, Enrolled) VALUES
('Python asoslari', 'Muhammad Karimov', 24.0, 350000.00, 4.8, 1200),
('Web dasturlash (HTML/CSS)', 'Aziza Yusupova', 18.5, 0, 4.5, 2100),
('JavaScript boshlang''ich', 'Muhammad Karimov', 30.0, 400000.00, 4.7, 950),
('MySQL va ma''lumotlar bazasi', 'Jasur Tursunov', 20.0, 300000.00, 4.6, 780),
('Ingliz tili A1', 'Nilufar Rahimova', 40.0, 0, 4.3, 3000),
('Grafik dizayn asoslari', 'Aziza Yusupova', 22.5, 280000.00, 4.4, 640),
('Data Science kirish', 'Sardor Aliyev', 35.0, 600000.00, 4.9, 540),
('Git va GitHub', 'Jasur Tursunov', 6.0, 0, 4.2, 1800),
('Matematika abituriyentlar uchun', 'Muhammadjon Ergashev', 50.0, 450000.00, 4.6, 870),
('React.js', 'Sardor Aliyev', 28.0, 550000.00, 4.7, 410),
('Kiberxavfsizlik asoslari', 'Bekzod Nazarov', 26.5, 500000.00, 4.5, 320),
('Excel noldan', 'Nilufar Rahimova', 12.0, 150000.00, 4.1, 1500);

-- 5. So'rovlar
-- a) Bepul kurslar
SELECT * FROM courses WHERE Price = 0;

-- b) Eng ko'p ro'yxatdan o'tilgan 3 ta kurs
SELECT * FROM courses ORDER BY Enrolled DESC LIMIT 3;

-- c) O'qituvchisi nomida "Muhammad" bor kurslar
SELECT * FROM courses WHERE Instructor LIKE '%Muhammad%';

-- d) O'qituvchi bo'yicha kurslar soni
SELECT Instructor, COUNT(*) AS CourseCount FROM courses GROUP BY Instructor;
