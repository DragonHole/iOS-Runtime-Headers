/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXVideoAnalyticsRouter, SXVideoPlayerVisibilityMonitor;

@interface SXVideoPlayerViewControllerResponse : NSObject {

	BOOL _shouldAutoplay;
	BOOL _expectVideoPlayerViewController;
	SXVideoAnalyticsRouter* _analyticsRouter;
	SXVideoPlayerVisibilityMonitor* _visibilityMonitor;

}

@property (assign,nonatomic) BOOL shouldAutoplay;                                             //@synthesize shouldAutoplay=_shouldAutoplay - In the implementation block
@property (assign,nonatomic) BOOL expectVideoPlayerViewController;                            //@synthesize expectVideoPlayerViewController=_expectVideoPlayerViewController - In the implementation block
@property (nonatomic,retain) SXVideoAnalyticsRouter * analyticsRouter;                        //@synthesize analyticsRouter=_analyticsRouter - In the implementation block
@property (nonatomic,retain) SXVideoPlayerVisibilityMonitor * visibilityMonitor;              //@synthesize visibilityMonitor=_visibilityMonitor - In the implementation block
-(BOOL)shouldAutoplay;
-(void)setShouldAutoplay:(BOOL)arg1 ;
-(SXVideoPlayerVisibilityMonitor *)visibilityMonitor;
-(void)setVisibilityMonitor:(SXVideoPlayerVisibilityMonitor *)arg1 ;
-(SXVideoAnalyticsRouter *)analyticsRouter;
-(void)setAnalyticsRouter:(SXVideoAnalyticsRouter *)arg1 ;
-(BOOL)expectVideoPlayerViewController;
-(void)setExpectVideoPlayerViewController:(BOOL)arg1 ;
@end

