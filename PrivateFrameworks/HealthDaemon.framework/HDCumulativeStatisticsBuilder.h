/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCumulativeStatisticsBuilder : HDStatisticsBuilder {
    HDCumulativeCollectionCalculator *_collectionCalculator;
    HDLastIntervalInfo *_lastIntervalInfo;
    HKStatistics *_lastStatistics;
}

@property (nonatomic, retain) HDLastIntervalInfo *lastIntervalInfo;
@property (nonatomic, retain) HKStatistics *lastStatistics;

- (void).cxx_destruct;
- (id)_initialStatisticsForCollection:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldStopProcessing:(id /* block */)arg4 error:(id*)arg5;
- (BOOL)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (id)_statisticsWithTimePeriod:(id)arg1 samples:(id)arg2 lastPeriod:(BOOL)arg3 error:(id*)arg4;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id*)arg3;
- (id)collectionCalculatorWithBucketBoundaries:(id)arg1;
- (id)lastIntervalInfo;
- (id)lastStatistics;
- (void)setLastIntervalInfo:(id)arg1;
- (void)setLastStatistics:(id)arg1;

@end