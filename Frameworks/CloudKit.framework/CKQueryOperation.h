/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKQueryOperation : CKDatabaseOperation {
    CKQueryCursor *_cursor;
    NSArray *_desiredKeys;
    BOOL _fetchAllResults;
    CKQuery *_query;
    id /* block */ _queryCompletionBlock;
    id /* block */ _queryCursorFetchedBlock;
    id /* block */ _recordFetchedBlock;
    CKQueryCursor *_resultsCursor;
    unsigned int _resultsLimit;
    BOOL _shouldFetchAssetContent;
    CKRecordZoneID *_zoneID;
}

@property (nonatomic, copy) CKQueryCursor *cursor;
@property (nonatomic, copy) NSArray *desiredKeys;
@property (nonatomic) BOOL fetchAllResults;
@property (nonatomic, copy) CKQuery *query;
@property (nonatomic, copy) id /* block */ queryCompletionBlock;
@property (nonatomic, copy) id /* block */ queryCursorFetchedBlock;
@property (nonatomic, copy) id /* block */ recordFetchedBlock;
@property (nonatomic, retain) CKQueryCursor *resultsCursor;
@property (nonatomic) unsigned int resultsLimit;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic, copy) CKRecordZoneID *zoneID;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleCompletionCallback:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (id)cursor;
- (id)desiredKeys;
- (BOOL)fetchAllResults;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (BOOL)hasCKOperationCallbacksSet;
- (id)init;
- (id)initWithCursor:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (void)performCKOperation;
- (id)query;
- (id /* block */)queryCompletionBlock;
- (id /* block */)queryCursorFetchedBlock;
- (id /* block */)recordFetchedBlock;
- (id)resultsCursor;
- (unsigned int)resultsLimit;
- (void)setCursor:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAllResults:(BOOL)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryCompletionBlock:(id /* block */)arg1;
- (void)setQueryCursorFetchedBlock:(id /* block */)arg1;
- (void)setRecordFetchedBlock:(id /* block */)arg1;
- (void)setResultsCursor:(id)arg1;
- (void)setResultsLimit:(unsigned int)arg1;
- (void)setShouldFetchAssetContent:(BOOL)arg1;
- (void)setZoneID:(id)arg1;
- (BOOL)shouldFetchAssetContent;
- (id)zoneID;

@end