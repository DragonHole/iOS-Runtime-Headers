/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface CKDPackageDirectoryPurger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _rootDirectories;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * rootDirectories;                //@synthesize rootDirectories=_rootDirectories - In the implementation block
+(id)sharedPurger;
+(void)schedulePeriodicPurgesInDirectory:(id)arg1 ;
-(void)purgeAll;
-(NSMutableArray *)rootDirectories;
-(void)purgeRootDirectory:(id)arg1 ;
-(void)purgeDirectory:(id)arg1 ;
-(void)registerXPCActivity;
-(void)addRootDirectory:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

