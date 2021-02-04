/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>

@class SSDownloadManager, SSDownload, TVPStateMachine, NSMutableArray, NSString;

@interface VUIStoreDownloadMonitor : NSObject <SSDownloadManagerObserver> {

	SSDownloadManager* _downloadManager;
	SSDownload* _download;
	TVPStateMachine* _stateMachine;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) SSDownloadManager * downloadManager;              //@synthesize downloadManager=_downloadManager - In the implementation block
@property (nonatomic,retain) SSDownload * download;                            //@synthesize download=_download - In the implementation block
@property (nonatomic,retain) TVPStateMachine * stateMachine;                   //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(SSDownload *)download;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)downloadManagerDownloadsDidChange:(id)arg1 ;
-(void)setDownloadManager:(SSDownloadManager *)arg1 ;
-(SSDownloadManager *)downloadManager;
-(void)dealloc;
-(NSMutableArray *)completionHandlers;
-(void)setStateMachine:(TVPStateMachine *)arg1 ;
-(TVPStateMachine *)stateMachine;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(void)_registerStateMachineHandlers;
-(id)initWithDownload:(id)arg1 downloadManager:(id)arg2 ;
-(void)waitForDownloadToBecomePlayableWithCompletion:(/*^block*/id)arg1 ;
-(void)setDownload:(SSDownload *)arg1 ;
@end
