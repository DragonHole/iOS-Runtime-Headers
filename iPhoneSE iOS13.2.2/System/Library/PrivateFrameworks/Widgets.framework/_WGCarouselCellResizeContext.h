/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewFloatAnimatableProperty;

@interface _WGCarouselCellResizeContext : NSObject {

	BOOL _active;
	double _compactHeight;
	double _expandedHeight;
	UIViewFloatAnimatableProperty* _resizeProgress;

}

@property (assign,getter=isActive,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) double compactHeight;                                        //@synthesize compactHeight=_compactHeight - In the implementation block
@property (assign,nonatomic) double expandedHeight;                                       //@synthesize expandedHeight=_expandedHeight - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * resizeProgress;              //@synthesize resizeProgress=_resizeProgress - In the implementation block
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(double)expandedHeight;
-(UIViewFloatAnimatableProperty *)resizeProgress;
-(double)compactHeight;
-(void)setCompactHeight:(double)arg1 ;
-(void)setExpandedHeight:(double)arg1 ;
-(void)setResizeProgress:(UIViewFloatAnimatableProperty *)arg1 ;
@end
