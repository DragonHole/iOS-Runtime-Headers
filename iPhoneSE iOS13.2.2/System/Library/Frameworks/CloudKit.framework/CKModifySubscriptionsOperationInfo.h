/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubscriptionsToSave:(NSArray *)arg1 ;
-(NSArray *)subscriptionsToSave;
-(NSArray *)subscriptionIDsToDelete;
-(void)setSubscriptionIDsToDelete:(NSArray *)arg1 ;
@end

