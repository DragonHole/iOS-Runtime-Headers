/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperation.h>

@class NSArray;

@interface CKFetchWhitelistedBundleIDsOperation : CKOperation {

	/*^block*/id _fetchWhitelistedBundleIDsCompletionBlock;
	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                      //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,copy) id fetchWhitelistedBundleIDsCompletionBlock;              //@synthesize fetchWhitelistedBundleIDsCompletionBlock=_fetchWhitelistedBundleIDsCompletionBlock - In the implementation block
-(NSArray *)bundleIDs;
-(BOOL)hasCKOperationCallbacksSet;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(Class)operationInfoClass;
-(void)_handleCompletionCallback:(id)arg1 ;
-(id)fetchWhitelistedBundleIDsCompletionBlock;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)setFetchWhitelistedBundleIDsCompletionBlock:(id)arg1 ;
@end
