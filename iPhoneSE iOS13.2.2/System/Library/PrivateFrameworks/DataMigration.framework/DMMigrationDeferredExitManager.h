/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DMMigrationDeferredExitManager : NSObject
+(id)_serialQueue;
-(id)_deferralDuration;
-(void)_exitClean;
-(void)migrationDidStart;
-(void)migrationDidEnd;
-(void)deferExitWithConnection:(id)arg1 ;
-(void)cancelDeferredExitWithConnection:(id)arg1 ;
-(void)_resetGlobalState;
-(BOOL)_isDeferringExit;
@end
