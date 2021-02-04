/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation {

	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;              //@synthesize bundleIDs=_bundleIDs - In the implementation block
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(id)activityCreate;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(void)main;
@end
