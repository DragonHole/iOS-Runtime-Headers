/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Assistant/Plugins/ClientFlowService.assistantBundle/ClientFlowService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CFScriptDownloadDelegate <NSObject>
@required
-(id)cachePath;
-(void)scriptDownloadFailedForScript:(id)arg1 error:(id)arg2;
-(void)downloadedScript:(id)arg1;
-(void)scriptSavedToFilePath:(id)arg1 forScript:(id)arg2;

@end

