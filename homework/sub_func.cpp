#include <stdio.h>
#include <string.h>
#include "sub_func.h"

/**
 * 打印水平线
 */
void print_hline(const char* lineStr, int len) {
	int times = len / strlen(lineStr) + 1;
	for (int i = 0; i < times; i++) {
		printf("%s", lineStr);
	}
	printf("\n");
}

/**
 * 第3题：打印成绩表
 */
void print_scores(CourseScore scores[], int size) {
	printf("%-16s \t %-8s \t %2s \t %2s \t %2s\n", 
		"学号", "课程编号", "平时成绩", "考试成绩","总评成绩");
	print_hline("-", 72);
	for (int i = 0; i < size; i++) {
		printf("%-8s \t %-8s \t %7.1f \t %7.1f \t %7.1f \n", 
			scores[i].student_id, 
			scores[i].course_id, 
			scores[i].usual_score, 
			scores[i].exam_score,
			total_score(scores[i].usual_score, scores[i].exam_score));
	}
}

/**
 * 第2题：计算总评成绩
 */
float total_score(float score1, float score2) {
	return score1 * 0.3 + score2 * 0.7;
}