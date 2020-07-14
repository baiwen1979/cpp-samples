#ifndef SUB_FUNC_H
#define SUB_FUNC_H

// 学号长度
#define ST_ID_LENGTH 9
// 课程编号长度
#define CS_ID_LENGTH 5


// 结构体：学生信息
typedef struct ST {
    char id[ST_ID_LENGTH];  // 学号
    const char* name; // 姓名
    const char gender[4]; // 性别

} Student;

// 结构体：学生成绩
typedef struct CSC {
    char student_id[ST_ID_LENGTH];  // 学号
    char course_id[CS_ID_LENGTH]; // 课程编号
    float usual_score; // 平时成绩
    float exam_score;  // 考试成绩
} CourseScore;

// 结构体：课程信息
typedef struct CS {
    char id[CS_ID_LENGTH];
    const char* name;
} Course;

// 函数声明：打印成绩表
void print_scores(CourseScore scores[], int size);

// 函数声明：统计总成绩
float total_score(float score1, float score2);

#endif