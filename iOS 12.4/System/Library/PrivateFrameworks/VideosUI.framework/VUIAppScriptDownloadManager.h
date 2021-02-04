/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession, NSMutableDictionary, NSURL, NSURLSessionDataTask;

@interface VUIAppScriptDownloadManager : NSObject {

	NSURLSession* _session;
	NSMutableDictionary* _completionBlocksDict;
	NSURL* _currentURL;
	NSMutableDictionary* _appScriptDict;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) NSURL * currentURL;                               //@synthesize currentURL=_currentURL - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * appScriptDict;              //@synthesize appScriptDict=_appScriptDict - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                      //@synthesize task=_task - In the implementation block
+(id)sharedInstance;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(id)_init;
-(NSURLSessionDataTask *)task;
-(void)setCurrentURL:(NSURL *)arg1 ;
-(void)setAppScriptDict:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)appScriptDict;
-(NSURL *)currentURL;
-(void)fetchAppJavascript:(id)arg1 cachePolicy:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
