/* have -> an game score array

  diff func. - >
    1. highest score
    2. lowest score
    3. avg. score
    4. sum of all elements.
    5. highest no. element index.
    6. no. of century.
    7. no. of half century.
    8. no. of zeros.
                                    */

#include<stdio.h>

// highest score
int highestScore(int scores[]){
  int max = 0;
  for (int i = 0; i < 10; i++) {
    if (scores[i]>max) {
      max = scores[i];
    }
  }
  return max;
}

// lowest score
int lowestScore(int scores[]){
  int min = scores[0];
  for (int i = 0; i < 10; i++) {
    if (scores[i]<min) {
      min = scores[i];
    }
  }
  return min;
}

// average score
float averageScore(int scores[]){
  float avg = 0;
  for (int i = 0; i < 10; i++) {
    avg += scores[i];
  }
  return avg /= 10;
}

// Total sum of elements
int totalSumOfScores(int scores[]){
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += scores[i];
  }
  return sum;
}

// No. of centuries
int numberOfCentury(int scores[]){
  int century = 0;
  for (int i = 0; i < 10; i++) {
    if (scores[i]>=100) {
      century++;
    }
  }
  return century;
}

// No. of half-centuries
int numberOfHalfCentury(int scores[]){
  int halfCentury = 0;
  for (int i = 0; i < 10; i++) {
    if (scores[i]>=50 && scores[i]<100) {
      halfCentury++;
    }
  }
  return halfCentury;
}

// No. of zeros..
int numberOfZeros(int scores[]){
  int zeroCount = 0;
  for (int i = 0; i < 10; i++) {
    if (scores[i] == 0) {
      zeroCount++;
    }
  }
  return zeroCount;
}

// highest score element index
int highestScoreIndex(int scores[]){
  int current = highestScore(scores);
  for (int i = 0; i < 10; i++) {
    if (scores[i]==current) {
      return i;
    }
  }
}

void main(){
  int scores[10] = {11, 0, 50, 20, 60, 110, 0, 200, 51, 72};
  printf("Highest Number is %d\n", highestScore(scores));
  printf("Lowest Number is %d\n", lowestScore(scores));
  printf("Average is %f\n", averageScore(scores));
  printf("Total is %d\n", totalSumOfScores(scores));
  printf("Total Number of Centuries is %d\n", numberOfCentury(scores));
  printf("Total Number of Half-Centuries is %d\n", numberOfHalfCentury(scores));
  printf("Total Number of Zeros are %d\n", numberOfZeros(scores));
  printf("Highest Number Index is %d\n", highestScoreIndex(scores));
}
