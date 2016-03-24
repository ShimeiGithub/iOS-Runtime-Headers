/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableObjectCollection : PBCodable <NSCopying> {
    NSMutableArray *_activityCaches;
    NSMutableArray *_binarySamples;
    NSMutableArray *_categorySamples;
    NSMutableArray *_correlations;
    NSMutableArray *_deletedSamples;
    HDCodableProvenance *_provenance;
    NSMutableArray *_quantitySamples;
    HDCodableSource *_source;
    NSString *_sourceBundleIdentifier;
    NSMutableArray *_workouts;
}

@property (nonatomic, retain) NSMutableArray *activityCaches;
@property (nonatomic, retain) NSMutableArray *binarySamples;
@property (nonatomic, retain) NSMutableArray *categorySamples;
@property (nonatomic, retain) NSMutableArray *correlations;
@property (nonatomic, retain) NSMutableArray *deletedSamples;
@property (nonatomic, readonly) BOOL hasProvenance;
@property (nonatomic, readonly) BOOL hasSource;
@property (nonatomic, readonly) BOOL hasSourceBundleIdentifier;
@property (nonatomic, retain) HDCodableProvenance *provenance;
@property (nonatomic, retain) NSMutableArray *quantitySamples;
@property (nonatomic, retain) HDCodableSource *source;
@property (nonatomic, retain) NSString *sourceBundleIdentifier;
@property (nonatomic, retain) NSMutableArray *workouts;

- (void).cxx_destruct;
- (id)activityCaches;
- (id)activityCachesAtIndex:(unsigned int)arg1;
- (unsigned int)activityCachesCount;
- (void)addActivityCaches:(id)arg1;
- (void)addBinarySamples:(id)arg1;
- (void)addCategorySamples:(id)arg1;
- (void)addCorrelations:(id)arg1;
- (void)addDeletedSamples:(id)arg1;
- (void)addQuantitySamples:(id)arg1;
- (void)addWorkouts:(id)arg1;
- (id)binarySamples;
- (id)binarySamplesAtIndex:(unsigned int)arg1;
- (unsigned int)binarySamplesCount;
- (id)categorySamples;
- (id)categorySamplesAtIndex:(unsigned int)arg1;
- (unsigned int)categorySamplesCount;
- (void)clearActivityCaches;
- (void)clearBinarySamples;
- (void)clearCategorySamples;
- (void)clearCorrelations;
- (void)clearDeletedSamples;
- (void)clearQuantitySamples;
- (void)clearWorkouts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlations;
- (id)correlationsAtIndex:(unsigned int)arg1;
- (unsigned int)correlationsCount;
- (unsigned int)count;
- (id)decodedObjects;
- (id)deletedSamples;
- (id)deletedSamplesAtIndex:(unsigned int)arg1;
- (unsigned int)deletedSamplesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasProvenance;
- (BOOL)hasSource;
- (BOOL)hasSourceBundleIdentifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentToObjectCollection:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)provenance;
- (id)quantitySamples;
- (id)quantitySamplesAtIndex:(unsigned int)arg1;
- (unsigned int)quantitySamplesCount;
- (BOOL)readFrom:(id)arg1;
- (void)setActivityCaches:(id)arg1;
- (void)setBinarySamples:(id)arg1;
- (void)setCategorySamples:(id)arg1;
- (void)setCorrelations:(id)arg1;
- (void)setDeletedSamples:(id)arg1;
- (void)setProvenance:(id)arg1;
- (void)setQuantitySamples:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setWorkouts:(id)arg1;
- (id)source;
- (id)sourceBundleIdentifier;
- (id)workouts;
- (id)workoutsAtIndex:(unsigned int)arg1;
- (unsigned int)workoutsCount;
- (void)writeTo:(id)arg1;

@end