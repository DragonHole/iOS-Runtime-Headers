/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBSCloudHistoryConfiguration : NSObject {

	BOOL _shouldBatchSaveRecords;
	BOOL _shouldUseLongLivedOperationsToSaveRecords;
	NSString* _singleDeviceSaveChangesThrottlingPolicyString;
	NSString* _multipleDeviceSaveChangesThrottlingPolicyString;
	NSString* _singleDeviceFetchChangesThrottlingPolicyString;
	NSString* _multipleDeviceFetchChangesThrottlingPolicyString;
	NSString* _syncCircleSizeRetrievalThrottlingPolicyString;
	unsigned long long _maximumRequestCharacterCount;
	double _syncWindow;

}

@property (retain) NSString * singleDeviceSaveChangesThrottlingPolicyString;                 //@synthesize singleDeviceSaveChangesThrottlingPolicyString=_singleDeviceSaveChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * multipleDeviceSaveChangesThrottlingPolicyString;               //@synthesize multipleDeviceSaveChangesThrottlingPolicyString=_multipleDeviceSaveChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * singleDeviceFetchChangesThrottlingPolicyString;                //@synthesize singleDeviceFetchChangesThrottlingPolicyString=_singleDeviceFetchChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * multipleDeviceFetchChangesThrottlingPolicyString;              //@synthesize multipleDeviceFetchChangesThrottlingPolicyString=_multipleDeviceFetchChangesThrottlingPolicyString - In the implementation block
@property (retain) NSString * syncCircleSizeRetrievalThrottlingPolicyString;                 //@synthesize syncCircleSizeRetrievalThrottlingPolicyString=_syncCircleSizeRetrievalThrottlingPolicyString - In the implementation block
@property (assign) unsigned long long maximumRequestCharacterCount;                          //@synthesize maximumRequestCharacterCount=_maximumRequestCharacterCount - In the implementation block
@property (assign) double syncWindow;                                                        //@synthesize syncWindow=_syncWindow - In the implementation block
@property (readonly) BOOL shouldBatchSaveRecords;                                            //@synthesize shouldBatchSaveRecords=_shouldBatchSaveRecords - In the implementation block
@property (readonly) BOOL shouldUseLongLivedOperationsToSaveRecords;                         //@synthesize shouldUseLongLivedOperationsToSaveRecords=_shouldUseLongLivedOperationsToSaveRecords - In the implementation block
-(double)syncWindow;
-(BOOL)shouldUseLongLivedOperationsToSaveRecords;
-(NSString *)singleDeviceSaveChangesThrottlingPolicyString;
-(NSString *)multipleDeviceSaveChangesThrottlingPolicyString;
-(NSString *)singleDeviceFetchChangesThrottlingPolicyString;
-(NSString *)multipleDeviceFetchChangesThrottlingPolicyString;
-(NSString *)syncCircleSizeRetrievalThrottlingPolicyString;
-(id)_builtInConfiguration;
-(void)_applyBuiltInConfiguration:(id)arg1 ;
-(id)remoteConfiguration;
-(void)applyRemoteConfiguration:(id)arg1 ;
-(void)_applyConfiguration:(id)arg1 withTolerance:(long long)arg2 ;
-(BOOL)shouldBatchSaveRecords;
-(id)_sharedBuiltInConfiguration;
-(id)platformBuiltInConfiguration;
-(void)applyPlatformConfiguration:(id)arg1 withTolerance:(long long)arg2 ;
-(void)setSingleDeviceSaveChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMultipleDeviceSaveChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setSingleDeviceFetchChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMultipleDeviceFetchChangesThrottlingPolicyString:(NSString *)arg1 ;
-(void)setSyncCircleSizeRetrievalThrottlingPolicyString:(NSString *)arg1 ;
-(void)setMaximumRequestCharacterCount:(unsigned long long)arg1 ;
-(void)setSyncWindow:(double)arg1 ;
-(unsigned long long)maximumRequestCharacterCount;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
