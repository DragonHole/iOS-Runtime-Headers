/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, UIActivityIndicatorView;

@interface ICDocCamSpinner : NSObject {

	NSDate* _showDate;
	UIActivityIndicatorView* _activityIndicator;
	double _minimumDuration;

}

@property (nonatomic,retain) NSDate * showDate;                                        //@synthesize showDate=_showDate - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic) double minimumDuration;                                   //@synthesize minimumDuration=_minimumDuration - In the implementation block
-(double)minimumDuration;
-(void)setShowDate:(NSDate *)arg1 ;
-(NSDate *)showDate;
-(id)initWithView:(id)arg1 minimumDuration:(double)arg2 ;
-(void)setMinimumDuration:(double)arg1 ;
-(void)show;
-(void)hide;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
@end

