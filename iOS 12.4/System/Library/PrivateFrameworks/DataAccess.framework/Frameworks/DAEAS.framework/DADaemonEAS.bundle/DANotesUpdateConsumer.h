/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DANotesUpdateConsumer
@optional
-(void)notesFolderWithId:(id)arg1 failedToSyncWithStatus:(long long)arg2 error:(id)arg3;

@required
-(void)syncResultForNotesFolder:(id)arg1 noteContext:(id)arg2 newTag:(id)arg3 previousTag:(id)arg4 actions:(id)arg5 results:(id)arg6 changeSet:(id)arg7 notesToDeleteAfterSync:(id)arg8 isInitialSync:(BOOL)arg9 moreAvailable:(BOOL)arg10 moreLocalChangesAvailable:(BOOL)arg11;

@end

