/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookDataStore/BCCloudKitTransaction.h>

@class NSString;

@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction {

	NSString* _notificationName;

}

@property (nonatomic,copy) NSString * notificationName;              //@synthesize notificationName=_notificationName - In the implementation block
+(id)transactionNameForEntityName:(id)arg1 ;
-(NSString *)notificationName;
-(void)setNotificationName:(NSString *)arg1 ;
-(void)performWorkWithCompletion:(/*^block*/id)arg1 ;
-(double)coalescingDelay;
-(id)initWithEntityName:(id)arg1 notificationName:(id)arg2 delegate:(id)arg3 ;
@end
