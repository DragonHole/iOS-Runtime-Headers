/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolPageDomainEventDispatcher : NSObject {

	AugmentableInspectorController* _controller;

}
-(void)safe_frameStartedLoadingWithFrameId:(id)arg1 ;
-(void)safe_frameNavigatedWithFrame:(id)arg1 ;
-(void)safe_frameStoppedLoadingWithFrameId:(id)arg1 ;
-(void)safe_frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2 ;
-(void)safe_loadEventFiredWithTimestamp:(double)arg1 ;
-(void)safe_defaultAppearanceDidChangeWithAppearance:(long long)arg1 ;
-(void)safe_domContentEventFiredWithTimestamp:(double)arg1 ;
-(void)safe_frameDetachedWithFrameId:(id)arg1 ;
-(void)safe_frameClearedScheduledNavigationWithFrameId:(id)arg1 ;
-(id)initWithController:(AugmentableInspectorController*)arg1 ;
-(void)domContentEventFiredWithTimestamp:(double)arg1 ;
-(void)loadEventFiredWithTimestamp:(double)arg1 ;
-(void)frameNavigatedWithFrame:(id)arg1 ;
-(void)frameDetachedWithFrameId:(id)arg1 ;
-(void)frameStartedLoadingWithFrameId:(id)arg1 ;
-(void)frameStoppedLoadingWithFrameId:(id)arg1 ;
-(void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2 ;
-(void)frameClearedScheduledNavigationWithFrameId:(id)arg1 ;
-(void)defaultAppearanceDidChangeWithAppearance:(long long)arg1 ;
@end

