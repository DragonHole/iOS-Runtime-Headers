/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifySubscriptionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	NSArray* _subscriptionsToSave;
	NSArray* _subscriptionIDsToDelete;

}

@property (nonatomic,retain) NSArray * subscriptionsToSave;                  //@synthesize subscriptionsToSave=_subscriptionsToSave - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDsToDelete;              //@synthesize subscriptionIDsToDelete=_subscriptionIDsToDelete - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
-(NSArray *)subscriptionsToSave;
-(NSArray *)subscriptionIDsToDelete;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

