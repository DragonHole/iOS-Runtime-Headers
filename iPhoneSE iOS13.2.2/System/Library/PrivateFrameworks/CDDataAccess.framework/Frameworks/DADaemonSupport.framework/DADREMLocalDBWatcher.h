/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:54 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface DADREMLocalDBWatcher : NSObject {

	NSMapTable* _concernedRemindersPartyToBlockMap;

}
+(id)sharedDBWatcher;
-(id)init;
-(void)registerConcernedRemindersParty:(id)arg1 withChangedBlock:(/*^block*/id)arg2 ;
-(void)removeConcernedRemindersParty:(id)arg1 ;
-(void)remindersDatabaseDidChange;
@end

