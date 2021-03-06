/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXVideoPlaybackObserver.h>

@protocol SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate;
@class NSString;

@interface SXAutomaticFullscreenVideoPlaybackBehaviorManager : NSObject <SXVideoPlaybackObserver> {

	unsigned long long _behavior;
	id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> _delegate;
	CGRect _videoBounds;

}

@property (assign,nonatomic) CGRect videoBounds;                                                                         //@synthesize videoBounds=_videoBounds - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                                                                //@synthesize behavior=_behavior - In the implementation block
@property (assign,nonatomic,__weak) id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGRect)videoBounds;
-(void)conditionsChanged;
-(void)playbackCoordinatorStartedPlayback:(id)arg1 ;
-(void)playbackCoordinatorResumedPlayback:(id)arg1 ;
-(BOOL)fullscreenPlaybackRequiredForCurrentConditions;
-(void)setVideoBounds:(CGRect)arg1 ;
-(void)setDelegate:(id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate>)arg1 ;
-(id<SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate>)delegate;
-(void)setBehavior:(unsigned long long)arg1 ;
-(unsigned long long)behavior;
@end

