/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate;

@interface GEOEventRecorderInstrumentation : NSObject {

	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSString* _filepath;
	NSString* _geoFilepath;
	NSString* _movieFilepath;
	NSDate* _startDate;

}
+(id)defaultInstrumentation;
+(id)initializeDefaultInstrumentation;
+(void)endInstrumentation;
-(void)captureUserActionLogMessageEvent:(id)arg1 ;
-(void)_setupLogging;
-(void)initializeFilepaths;
-(void)writeString:(id)arg1 ToFilepath:(id)arg2 ;
-(void)_captureScreenVideo:(id)arg1 ;
-(id)getRecordedFilePaths;
-(void)captureUIEvent:(id)arg1 ;
-(void)captureEventRecorderScreenVideo;
-(id)init;
@end

