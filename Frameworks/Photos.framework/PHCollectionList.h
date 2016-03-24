/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollectionList : PHCollection {
    id /* block */ _childCollectionsSortingComparator;
    int _collectionListSubtype;
    int _collectionListType;
    NSArray *_collections;
    NSDate *_endDate;
    unsigned int _estimatedChildCollectionCount;
    NSArray *_localizedLocationNames;
    NSString *_localizedTitle;
    int _plAlbumKind;
    PHQuery *_query;
    NSDate *_startDate;
    NSString *_transientIdentifier;
    unsigned int _unreadAssetCollectionsCount;
}

@property (nonatomic, readonly, copy) id /* block */ childCollectionsSortingComparator;
@property (nonatomic, readonly) int collectionListSubtype;
@property (nonatomic, readonly) int collectionListType;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) unsigned int estimatedChildCollectionCount;
@property (nonatomic, readonly) NSArray *localizedLocationNames;
@property (nonatomic, readonly) PHQuery *query;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSString *transientIdentifier;
@property (nonatomic, readonly) unsigned int unreadAssetCollectionsCount;

+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchCollectionListsContainingCollection:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchCollectionListsWithType:(int)arg1 subtype:(int)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(int)arg1 containingMoment:(id)arg2 options:(id)arg3;
+ (id)fetchMomentListsWithSubtype:(int)arg1 options:(id)arg2;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchRootAlbumCollectionListWithOptions:(id)arg1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)propertiesToFetchWithHint:(unsigned int)arg1;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithAssetCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollections:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientCollectionListWithCollectionsFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (BOOL)canContainCollections;
- (BOOL)canPerformEditOperation:(int)arg1;
- (Class)changeRequestClass;
- (id /* block */)childCollectionsSortingComparator;
- (BOOL)collectionHasFixedOrder;
- (int)collectionListSubtype;
- (int)collectionListType;
- (id)collections;
- (id)description;
- (id)endDate;
- (unsigned int)estimatedChildCollectionCount;
- (id)initTransientWithCollections:(id)arg1 orQuery:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned int)arg2 photoLibrary:(id)arg3;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)pl_assetContainerList;
- (id)query;
- (id)startDate;
- (id)transientIdentifier;
- (unsigned int)unreadAssetCollectionsCount;

@end