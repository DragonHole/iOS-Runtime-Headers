/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CRInsightsDelegate;
#import <CoreRecognition/CoreRecognition-Structs.h>
@class NSMutableDictionary;

@interface CRInsights : NSObject {

	id<CRInsightsDelegate> _delegate;
	NSMutableDictionary* _threadsToContexts;

}

@property (nonatomic,retain) NSMutableDictionary * threadsToContexts;              //@synthesize threadsToContexts=_threadsToContexts - In the implementation block
@property (__weak) id<CRInsightsDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInsights;
+(void)dispatchAsyncOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setThreadsToContexts:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)threadsToContexts;
-(void)attachContextToCurrentThread:(id)arg1 ;
-(id)cameraReaderForCurrentThread;
-(void)resetContextForCurrentThread;
-(id)allowOverrideWithKey:(id)arg1 forValue:(id)arg2 ;
-(id)takeContextSnapshot;
-(void)attachContextCopyToCurrentThread:(id)arg1 ;
-(void)attachNewContextToCurrentThreadWithCameraReader:(id)arg1 ;
-(void)notifySampleBufferProcessingStart:(opaqueCMSampleBufferRef)arg1 ;
-(void)notifySampleBufferProcessingEnd:(opaqueCMSampleBufferRef)arg1 ;
-(void)provideInsightValue:(id)arg1 forKey:(id)arg2 ;
-(id)enterSection:(id)arg1 withDescription:(id)arg2 ;
-(void)leaveSection:(id)arg1 ;
-(id)allowOverrideWithKey:(id)arg1 forResultFromBlock:(/*^block*/id)arg2 ;
-(void)setContextValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<CRInsightsDelegate>)arg1 ;
-(id<CRInsightsDelegate>)delegate;
-(id)currentContext;
@end

