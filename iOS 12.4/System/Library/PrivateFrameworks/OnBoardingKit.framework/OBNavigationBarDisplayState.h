/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OBNavigationBarDisplayState : NSObject {

	double _backgroundOpacity;
	double _titleOpacity;

}

@property (assign,nonatomic) double backgroundOpacity;              //@synthesize backgroundOpacity=_backgroundOpacity - In the implementation block
@property (assign,nonatomic) double titleOpacity;                   //@synthesize titleOpacity=_titleOpacity - In the implementation block
+(id)displayStateForNavigationBar:(id)arg1 ;
-(void)applyState:(id)arg1 ;
-(double)backgroundOpacity;
-(double)titleOpacity;
-(void)setBackgroundOpacity:(double)arg1 ;
-(void)setTitleOpacity:(double)arg1 ;
-(id)initWithNavigationBar:(id)arg1 ;
@end

