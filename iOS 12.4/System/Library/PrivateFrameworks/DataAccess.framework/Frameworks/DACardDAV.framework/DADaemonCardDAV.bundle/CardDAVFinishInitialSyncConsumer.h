/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DADaemonCardDAV.bundle/DADaemonCardDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CardDAVFinishInitialSyncConsumer <NSObject>
@required
-(void)successfullyFinishedInitalUploadForFolderWithID:(id)arg1 blacklistedUUIDs:(id)arg2 blacklistedHREFs:(id)arg3;
-(void)failedToFinishInitialSync:(id)arg1 error:(id)arg2;

@end

