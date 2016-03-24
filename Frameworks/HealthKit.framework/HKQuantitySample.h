/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQuantitySample : HKSample <HDCoding> {
    HKQuantity *_quantity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) HKQuantity *quantity;
@property (readonly) HKQuantityType *quantityType;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (BOOL)_isConcreteObjectClass;
+ (id)_quantitySampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 quantityType:(id)arg5 startDate:(double)arg6 endDate:(double)arg7 quantity:(id)arg8;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (id)quantitySampleWithType:(id)arg1 quantity:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 metadata:(id)arg5;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setQuantity:(id)arg1;
- (id)_validateConfiguration;
- (id)_valueDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)quantity;
- (id)quantityType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;
+ (id)migrateCodableObject:(id)arg1;

- (BOOL)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end