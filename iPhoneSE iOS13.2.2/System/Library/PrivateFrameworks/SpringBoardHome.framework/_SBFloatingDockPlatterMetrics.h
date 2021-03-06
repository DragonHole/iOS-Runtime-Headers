/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardHome/SpringBoardHome-Structs.h>
@interface _SBFloatingDockPlatterMetrics : NSObject {

	double _continuousCornerRadius;
	double _shadowRadius;
	double _shadowYOffset;
	CGRect _bounds;

}

@property (nonatomic,readonly) CGRect bounds;                              //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) double continuousCornerRadius;              //@synthesize continuousCornerRadius=_continuousCornerRadius - In the implementation block
@property (nonatomic,readonly) double shadowRadius;                        //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (nonatomic,readonly) double shadowYOffset;                       //@synthesize shadowYOffset=_shadowYOffset - In the implementation block
-(CGRect)bounds;
-(double)shadowRadius;
-(double)shadowYOffset;
-(double)continuousCornerRadius;
-(id)initWithBounds:(CGRect)arg1 continuousCornerRadius:(double)arg2 shadowRadius:(double)arg3 shadowYOffset:(double)arg4 ;
@end

