/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcuts/VCDatabaseSyncDataHandler.h>

@interface VCWorkflowSyncDataHandler : VCDatabaseSyncDataHandler
+(int)messageType;
-(id)initWithDatabase:(id)arg1 ;
-(id)unsyncedChangesForSyncService:(id)arg1 metadata:(id*)arg2 error:(id*)arg3 ;
-(BOOL)markChangesAsSynced:(id)arg1 withSyncService:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(BOOL)resetSyncStateForService:(id)arg1 error:(id*)arg2 ;
@end

